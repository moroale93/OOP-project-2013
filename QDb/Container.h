#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class k>
class Container;										//dichiarazione incompleta container per <<

template <class k>
ostream& operator<<(ostream&,const Container<k>&);

template <class k>
class Container{
	friend ostream& operator<< <k>(ostream&,const Container<k>&);
	private:
		class ContainerItem;
        ContainerItem* root;
        void insertRic(ContainerItem*,const k&);
        ContainerItem* Min(ContainerItem*)const;
		ContainerItem* Max(ContainerItem*)const;
		ContainerItem* alberoSenzaMin(ContainerItem*);
		int contaK(ContainerItem*, const k&);
		void printRic(ContainerItem* ) const;
		ContainerItem* removeRic(ContainerItem*, const k&, bool&);
		int size(ContainerItem* p)const;
		void contentRic(ostringstream&,ContainerItem*,int&)const;
        static void distruggi(ContainerItem*);//distruzione profonda
        static ContainerItem* copia(ContainerItem*);//copia profonda
	public:
        Container():root(0){}
        Container(const Container<k>&); //copia profonda
        ~Container();//distruzione profonda
		void insert(const k&);
        bool remove(const k&);
		void removeAll(const k&);
        bool modify(const k&,const k&);
		bool search (const k&) const;
        void print()const;
		int size()const;
   		string content()const;
        Container<k>& operator=(const Container<k>&);

        class const_iteratore;					//iteratore
        const k& operator[](const_iteratore) const;
        const const_iteratore begin() const;
        const const_iteratore end() const;
};

template <class k>
class Container<k>::ContainerItem{
	public:
		bool isLast()const;
		ContainerItem* left;
		ContainerItem* right;
		ContainerItem* parent;
		k info;
		ContainerItem(const k& , ContainerItem*, ContainerItem*, ContainerItem*);
		ContainerItem* next()const;
};

template <class k>
class Container<k>::const_iteratore{
    friend class Container<k>;
    private:
        Container<k>::ContainerItem* itPunt;
    public:
        const_iteratore& operator++();				//incremento prefisso
        const_iteratore operator++(int);				//incremento postfisso
        bool operator==(const_iteratore) const;			//uguaglianza
        bool operator!=(const_iteratore) const;			//disuguaglianza
        k& operator*();
};

template <class k>
inline ostream& operator<<(ostream& os,const Container<k>& c){
    os<<c.content();
    return os;
}

/*-------------------------------DEFINIZIONI---------------------------------*/

/*--------------------------------Container----------------------------------*/

template <class k>
void Container<k>::distruggi(ContainerItem* c){
    if(c){
        distruggi(c->left);
        distruggi(c->right);
        delete c;
    }
}

template <class k>
Container<k>::~Container(){
    if(root) distruggi(root);
}

template <class k>
typename Container<k>::ContainerItem* Container<k>::copia(ContainerItem * c){
    if(c){
        ContainerItem* aux;
        aux= new ContainerItem(c->info,copia(c->left),copia(c->right));
        if(c->parent==0)aux->parent=0;
        if(aux->left)aux->left->parent=aux;
        if(aux->right)aux->right->parent=aux;
        return aux;
    }
    return 0;
}

template <class k>
Container<k>::Container(const Container<k> & c):root(copia(c.root)){}

template <class k>
typename Container<k>::Container& Container<k>::operator=(const Container<k>& c){
    return Container(c);
}

template <class k>
void Container<k>::insertRic(ContainerItem* p,const k& value){
	if(value<p->info){
		if(p->left!=0)
	              insertRic(p->left, value);
		else
		      p->left=new ContainerItem(value,0,0,p);	
	}
	else{
		if(p->right!=0)
          	    insertRic(p->right, value);
	  	else
	      	    p->right= new ContainerItem(value,0,0,p);
        	}
}

template <class k>
void Container<k>::insert(const k& value){
	if(root)
		insertRic(root, value);
	else
		root=new ContainerItem(value);
}

template <class k>
int Container<k>::contaK(ContainerItem* p, const k& value){
	if(p!=0){	
		if(p->info==value)
			return 1+ contaK(p->left, value) + contaK(p->right, value);
		if(p->info<value)
			return contaK(p->right, value);
		return contaK(p->left, value);
	}
	else return 0;
}

template <class k>
void Container<k>::removeAll(const k& value){
	int num=contaK(root,value);
	for(int i=0;i<num; i++)
		remove(value);
}

template <class k>
typename Container<k>::ContainerItem* Container<k>::Min(ContainerItem* p)const{
    if(p){
        if(p->left==0)
            return p;
        return Min(p->left);
    }
    return 0;
}

template <class k>
typename Container<k>::ContainerItem* Container<k>::Max(ContainerItem* p)const{
    if(p){
        if(p->right==0)
            return p;
        return Max(p->right);
    }
    return 0;
}

template <class k>
typename Container<k>::ContainerItem* Container<k>::alberoSenzaMin(ContainerItem* p){
	if(p->left==0)	//s Ã¨ il successore che avevamo trovato
		return p->right;
	ContainerItem* aux=p;
	aux->right=p->right;
	aux->left=alberoSenzaMin(p->left);
	return aux;
}

template <class k>
typename Container<k>::ContainerItem* Container<k>::removeRic(ContainerItem* p, const k& value, bool& find){
	if(!p) return 0;
	else{
		if(p->info==value){
            ContainerItem* aux;
			find=true;
			if(p->right!=0){	//caso in cui c'Ã¨ un successore
				if(p->left==0)
                    aux= p->right;
				else{
                    aux= new ContainerItem(Min(p->right)->info,p->left,alberoSenzaMin(p->right));
				}
			}
            else aux= p->left;
            delete p;
            return aux;
		}
		if(p->info<value)
			p->right=removeRic(p->right, value, find);
		else
			p->left=removeRic(p->left, value, find);
		return p;
	}
}

template <class k>
bool Container<k>::remove(const k& value){
	ContainerItem* original=root;
	bool trovato=false;
	root=removeRic(root, value, trovato);
	if(!trovato) root=original;
    return trovato;
}

template <class k>
bool Container<k>::modify(const k& pre,const k& post){
    bool r=remove(pre);
    if(r) insert(post);
    return r;
}

template <class k>
bool Container<k>::search(const k& value) const{
	ContainerItem* browser=root;
	while(browser!=0 && !(browser->info==value)){
        if(browser->info<value)
            browser=browser->right;
		else
            browser=browser->left;
	}
    return browser!=0; //se non è stato trovato ritornerà  l'indirizzo del figlio destro di una foglia (0)
}

template <class k>
void Container<k>::printRic(ContainerItem* c) const{
	if(c==0)
		cout << "@";
	else{
		cout<< "(" << c->info << ",";
		printRic(c->left);
		cout<< ",";
		printRic(c->right);
		cout << ")";
	}
}

template <class k>
void Container<k>::print() const{
	printRic(root);
	cout << endl;
}

template <class k>
int Container<k>::size(ContainerItem* p)const{
    if(p){
		int sizeUnder=0;
		if(p->left) sizeUnder+=size(p->left);
		if(p->right) sizeUnder+=size(p->right);
		return 1+ sizeUnder;
	}
	else return 0;
}

template <class k>
int Container<k>::size()const{
    return size(root);
}

template <class k>
void Container<k>::contentRic(ostringstream& ss, ContainerItem* p,int& num)const{
    if(p){
        if(p->left) {contentRic(ss,p->left,num);}
        num++;
        ss<<num<<") "<<p->info<<endl;
        if(p->right) contentRic(ss,p->right,num);
    }
}

template <class k>
string Container<k>::content()const{
	ostringstream out;
	int num=0;
    contentRic(out,root,num);
    return out.str();
}

template <class k>
const k& Container<k>::operator[](const_iteratore it) const{
    return (it.itPunt)->info;
}

template <class k>
const typename Container<k>::const_iteratore Container<k>::begin() const{
    const_iteratore aux;
    aux.itPunt=Min(root);
    return aux;
}

template <class k>
const typename Container<k>::const_iteratore Container<k>::end() const{
    const_iteratore aux;
    aux.itPunt=0;//Max(root);
    return aux;
}

/*------------------------------ContainerItem--------------------------------*/

template <class k>
Container<k>::ContainerItem::ContainerItem(const k& value, ContainerItem* l=0, ContainerItem* r=0, ContainerItem* p=0):left(l), right(r), parent(p),info(value){}

template <class k>
bool Container<k>::ContainerItem::isLast() const{
	if(this->right) return false;
	const ContainerItem* aux=this;
	while(aux->parent && aux->parent->right==aux){
		if(!this->parent) return true;
		aux=aux->parent;
	}
	return false;
}

template <class k>
typename Container<k>::ContainerItem::ContainerItem* Container<k>::ContainerItem::next() const{
//LETTURA INFISSA
	const ContainerItem * c=this;
	if(c->right){
		ContainerItem* aux=c->right;
		while(aux->left)
			aux=aux->left;
		return aux;
	}
	ContainerItem* aux=c->parent;
	while(aux && c==aux->right){
		c=aux;
		aux=aux->parent;
	}
	return aux;
	/*nel caso in cui this sia il puntatore all'ultimo nodo viene ritornato un puntatore null, ovvero il puntatore null coincidente al
	padre della radice che dovrebbe essere il prossimo nodo dell'albero*/
}

/*-------------------------------const_iteratore-----------------------------------*/

template <class k>
typename Container<k>::const_iteratore& Container<k>::const_iteratore::operator++(){
    if(!itPunt->isLast()) {
        itPunt=itPunt->next();}
    return *this;
}

template <class k>
typename Container<k>::const_iteratore Container<k>::const_iteratore::operator++(int){
    const_iteratore aux=*this;
    if(!itPunt->isLast())
        itPunt=itPunt->next();
    return aux;
}

template <class k>
bool Container<k>::const_iteratore::operator==(const_iteratore it) const{
    return itPunt==it.itPunt;
}

template <class k>
bool Container<k>::const_iteratore::operator!=(const_iteratore it) const{
    return itPunt!=it.itPunt;
}

template <class k>
k& Container<k>::const_iteratore::operator*(){
    return itPunt->info;
}

#endif
