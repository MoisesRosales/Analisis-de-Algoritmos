#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int Calcular_Potencia(int b,int x){
	if(x==0){
		return 1;
	}else{
		return b*Calcular_Potencia(b,x-1);
	}
}

int main(void){
	int base,potencia;
	cout<<"Introdusca la base:";
	cin>>base;
	cout<<"Introdusca su potencia:";
	cin>>potencia;
	cout<<"El resultado es de:";
	cout<<Calcular_Potencia(base,potencia);
	return 0;
}
