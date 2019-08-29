#include<iostream>
using namespace std;

// RECURCION POR COLA

int fibo(int n){
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}
int Fibo_I(int n){
    fibo(n);
    return fibo(n);
}
int main(){
    cout<<"\n        FIBONACCI \n\n";
    int i, num ;
    do{
        cout<<"Ingrese un numero entero y positivo: ";
        cin>>num;
        
    }while(num < 0);
    
    cout<<"\nLa serie es: \n\n\t";
    
    for(i=0; i<num; i++){
       if(Fibo_I(i) != 0)
          cout<< ",";
          cout<< Fibo_I(i);
    }
    return 0;
}