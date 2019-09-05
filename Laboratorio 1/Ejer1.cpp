#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

void mostrarMatriz(int matriz[3][3],int filas,int columnas) { 
	for (int i=0;i<filas;i++) { 
		for(int j=0;j<columnas;j++) { 
			cout<<matriz[j]<<"t"; 
		} 
	cout<<endl; 
	}	 
} 
int SumarMatiz(int A[3][3],int B[3][3],int C[3][3], int i, int j){
	if(i < 3 && j ){
		C[i][j]= A[i][j]+B[i][j];
		i+=1;
		j+=1;
		SumarMatiz(A,B,C,i,j);		
	}else{
		mostrarMatriz(A,3,3);
		cout<<" + ";
		mostrarMatriz(B,3,3);
		cout<<" = ";
		mostrarMatriz(C,3,3);
	}
}


int main(void){
	int A[3][3]= {{1,2,3},{4,5,6},{7,8,9}}; 
	int B[3][3]= {{2,3,4},{5,6,7},{8,9,10}}; 
	int C[3][3]={{0,0,0},{0,0,0},{0,0,0}}; 
	int i=0,j=0;
	SumarMatiz(A,B,C,i,j);
	return 0;
}
