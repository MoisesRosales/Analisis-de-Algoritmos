#include <iostream>

using namespace std;

int activity_selection_problem(int inicio[], int fin[]){
    
    int L[] ={0,0,0,0,0,0,0,0,0,0,0};
    
    for(int i= 0; i< 11; i++){
        
        for(int j= 0;j<i; j++){
            
            if(fin[j] < inicio[i] && L[i] < L[j]){
                
                L[i]=L[j];
            }
        } 
        
        L[i]++;
    }
    cout << L[10]<<endl;
}

int main(){
    int inicio[] ={ 1,3,0,5,3,5,6,8,8,2,12 };
    
    int fin[] = { 4,5,6,7,8,9,10,11,12,13,14 };

    activity_selection_problem(inicio,fin);
    
    return 0;
}
