#include<iostream>
using namespace std;

int main(){
    int n, A[100], pares[100], impares[100], s, ep, ei;
    int i, f;
    cout<<"Ingrese la cantidad de elementos: ";cin>>n;
    s = 0;
    ep = 0;
    ei = 0;
    for(i = 0; i <  n; i++){
        cout << "Ingrese el elemento " <<i<<endl;
        cin>>A[i];
        
        if(A[i] % 2 == 0){
            pares[ep] = A[i];
            ep = ep + 1;
        }
            else{
                impares[ei] = A[i];
                ei = ei + 1;
            }
       
    }
    cout<<"Numeros impares: ";
    for(i = 0; i <  ei; i++){
        cout << impares[i] <<" ";
    }
    cout<<endl;

    cout<<"Numeros pares: ";
    for(int i = 0; i < ep; i++){
        cout << pares[i] <<" ";
    }
    cout<<endl;

    return 0;
}
