#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int Calcular_VM(int A[],int x,int minimo){
	if(x<0){
		return minimo;
	}else{
		if(A[x] < minimo){
			minimo = A[x];
		}
		Calcular_VM(A,x-1,minimo);
	}
}


int main(void){
	int x, y;
	cout<<"Ingrese el tamaño del arreglo:";
	cin>>x;
	int A[x];
	for(int i=0; i < x; i++){
		cout<<"Dato en la posicion"<<i+1<<" ";
		cin>>A[i];
	}	
	y = Calcular_VM(A,x-1,2000);
	cout<<"El menor valor es: "<<y;
	return 0;
}
