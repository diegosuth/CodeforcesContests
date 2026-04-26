#include <bits/stdc++.h>
using namespace std;
//Este programa cuenta la frecuencia del numero solicitado dado un array de largo n
int main(){
    int n;
    cout << "Introduce el largo del array seguido por un enter y luego el array separado por espacios, y finalmente coloca el numero a consultar:" << endl;
    cin >> n;
    int array[n];
    map <int,int> contador;
    int frecuenciasolicitada;
    for(int i = 0; i < n;i++){
        cin >> array[i];
    }
    for(int h : array){
        contador[h]++;
    }
    cin >> frecuenciasolicitada;
    cout << "El numero solicitado " << frecuenciasolicitada<< " aparece " << contador[frecuenciasolicitada]<< " veces." << endl;
    cout << "Si te interesa saber todas las frecuencias, son: "<<endl;
    for(auto const& [key,freq] : contador){
        cout << "El numero " << key << " aparece " << freq << " veces" << endl;
    } 
return 0;    
}