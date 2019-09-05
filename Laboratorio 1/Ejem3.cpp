#include <cstdio>
#include <cstdlib>
#include <iostream>

//Suma de los elementos de un arreglo de forma recursiva
 
using namespace std;

static int Suma(int numeros[], int i, int suma,int limite) {
	if(i < limite){
		suma = suma + numeros[i];
		i=i+1;
		Suma(numeros ,i,suma,limite);
	}else{
		return suma;
	}
}
int main(int argc, char *argv[]){

	int tamanio=0,a=0,i=0;
	bool flag;

    cout<< "ingrese la cantidad de numeros que desea sumar";
    cin>>tamanio;
    int numeros[tamanio];
    
	cout<< "Ingrese los numeros que desea sumar";    
	for(i;i<tamanio; i++){
		cin>>a;
		numeros[i]=a;
	}
	i=i+1;
	cout<<"La suma de los numeros es de:";
	cout<<+ Suma(numeros,0,0,i);
	return 0;
}
