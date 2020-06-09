
#include <iostream>
#include <string.h>
using namespace std;


/*
Examen 1
Realice una lista doblemente enlazada para guardar un conjunto de Libros con issn, nombre, autor y valor
1.	Agregar Libro
2.	Mostrar libro del autor x
3.	Eliminar zapato por issn
4.	Buscar un libro de nombre X
5.	Hallar los libros cuyo precio superen los 20000
*/


class Libro{
	
	string issn;
	string nombre;
	string autor;
	float valor;
	
	
	public:
		Libro *sig;
		Libro *ant;
		Libro( string is,string no, string aut,float val){
			issn=is;
			nombre=no;
			autor=aut;
			valor=val;
			sig=NULL;
		}
		string getissn(){
			return issn;
		}
		string getnombre(){
			return nombre;
		}
		float getvalor(){
			return valor;
		}
		void show(){
			cout<<" "<<issn<<" "<<nombre<<" "<<autor<<" "<< valor<<"\n";
		}
};
class ListaLibro{
	Libro *ptr=NULL;
	public:
		ListaLibro(){
			
		}
		void add(Libro *x);
		void remove(Libro *x);
		Libro* get();
		bool empty();
		int size();
		void show();
		Libro* getptr(){
			return ptr;
		}
		
};
void ListaLibro::remove(Libro *x){
	if(!empty()){
		
		x->ant->sig=x->sig;
		x->sig->ant->sig=x->ant;
	}
}
Libro* ListaLibro::get(){
	if(!empty())
		return ptr;
	
}
void ListaLibro::add(Libro *x){
	Libro *aux=ptr;
	if(empty() ){
		ptr=x;
	}else{
		while(aux->sig!=NULL){
			if (aux->getnombre()<x->getnombre()){
				x->sig=aux;
				x->ant=aux->ant;
				aux->ant=x;
				break;		
			}
		}
		x->sig=aux;
		x->ant=aux->ant;
		aux->ant=x;
		
	}
}
void ListaLibro::show(){
	Libro  *p=ptr;
	while(p!=NULL){
		p->show(); 
		p=p->sig;
	}
}
bool ListaLibro::empty(){
	return (ptr==NULL);
}
void librosCaros(ListaLibro *lista){
	Libro  *p=lista->getptr();
	while(p!=NULL){
		if(p->getvalor()>20000) p->show(); 
		p=p->sig;
	}
	
	
}

void agregar(ListaLibro *lista){
	float valor;
	string nombre,autor,issn ;
	
	cout<<" Dig. issn"; cin>>issn;
	cout<<" Dig. nombre"; cin>>nombre;
	cout<<" Dig. autor"; cin>>autor;
	cout<<" Dig. valor"; cin>>valor;
	Libro *p=new Libro(issn,nombre,autor,valor);
	lista->add(p);
	
}
Libro* buscarLibro(ListaLibro *lista){
	Libro  *p=lista->getptr();
	string issn ;
	
	cout<<" Dig. issn"; cin>>issn;
	while(p!=NULL){
		if(p->getissn()==issn){
			p->show();
			return p;
		} 
		p=p->sig;
	}
}

bool eliminarLibro(ListaLibro *lista){
	Libro *libro= buscarLibro(lista);
	
	lista->remove(libro);
	
}


int main(){
	
    int op=0;
    ListaLibro *lista = new ListaLibro();
	do{
		cout<<"\n";
		cout<<" 1. Agr. Libro 2. Mostrar libros por autor 3.% eliminar libro 4. buscar libro por nombre 5.libros valor > 20000 .6 Salir";
		cin>>op;
		switch(op){
			case 1: 
					agregar(lista);
			break;
			case 2: 
					lista->show();
			break;
			case 3: 
				eliminarLibro(lista);
			break;
			case 4:
				buscarLibro(lista);
				break;
			case 5:
				librosCaros(lista);
				break;
			case 6: break;
		}
		
	}while(op!=4);

	return 1;
}
/*
Examen 1
Realice una lista doblemente enlazada para guardar un conjunto de Libros con issn, nombre, autor y valor

1.	Agregar Libro
2.	Mostrar libro del autor x
3.	Eliminar zapato por issn
4.	Buscar un libro de nombre X
5.	Hallar los libros cuyo precio superen los 20000

*/


