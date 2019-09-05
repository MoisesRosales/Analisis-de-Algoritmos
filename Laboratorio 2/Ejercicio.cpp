#include <iostream> 

using namespace std; 

struct nodo{ 

    int dato; 
    nodo *sig; 
    nodo *prev; 
}*inicio, *fin; 

class ListaEnlazada{ 

    public: 
		nodo* crearNodo(int valor){ 
        nodo *n = new nodo; 
        n->dato =valor; 
        n->sig = nullptr; 
        n->prev = nullptr; 
        return n; 
    } 
    
	void mostrarLista(){ 
    nodo *temp = inicio; 
    if(!inicio){ 
        cout<<"La lista no posee ningun elemento"<<endl; 
    }else{ 
        while(temp){ 
            cout<<temp->dato<<" , "; 
            temp = temp->sig; 
        	} 
    	} 
	} 

	void agregarElemneto(int valor){ 
    nodo *n = crearNodo(valor); 
    if(!inicio){ 
        inicio =n; 
        fin = n; 
    }else{
        fin->sig = n; 
        n->prev = fin; 
        fin = n; 
   	} 
} 

void IntercambiarElementos(int p1, int p2){
    nodo *h = inicio;
    nodo *a;
    nodo *b;
    for(int i=0;i<=p1;i++){
        h = h->sig;
    }
    a->dato = h->dato;
    
    h=inicio;
    for(int i=0;i<=p2;i++){
        h = h->sig;
    }
    
    b->dato = h->dato;
    h->dato = a->dato;
    
    h=inicio;
    for(int i=0;i<=p1;i++){
        h = h->sig;
    }
    h->dato = b->dato;
} 

ListaEnlazada(){ 	
    inicio= nullptr; 

	} 
}; 
int main(void) 

{ 
    ListaEnlazada lista1; 
    lista1.agregarElemneto(1); 
    lista1.agregarElemneto(2); 
    lista1.agregarElemneto(3);
    lista1.agregarElemneto(4); 
    lista1.agregarElemneto(5); 
    lista1.agregarElemneto(6);
    lista1.mostrarLista(); 
    cout<<endl; 
    lista1.IntercambiarElementos(2,3); 
    lista1.mostrarLista(); 

    return 0; 
} 
