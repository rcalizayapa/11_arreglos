#include<iostream>
using namespace std;

int main(){
    int n, A[n], s, c;
    float p;
    s = 0;
    c = 0;
    cout << "Ingrese el numero de elementos: ";cin>>n;
    for(int i = 0; i < n; i++){
        cout << "Ingrese el elemento " << i+1 << ": ";cin>>A[i];
        s = s + A[i];
        
        if(A[i] == 0){
        	c = c + 1;
            break;
        }
    }   
    p = float(c*100)/n;
    cout << "La sumatoria de los elementos es: " << s << endl;
    cout << "El porcentaje de ceros ingresados es: " << p << "%" << endl;
}
    
