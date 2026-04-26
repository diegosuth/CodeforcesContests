#include <bits/stdc++.h>
using namespace std;

int main(){
int largoarray;
long long energia;
cin >> largoarray >> energia;
long long tramos[largoarray];
for(int i = 0; i < largoarray; i++){
    cin >> tramos[i];
}
long long izquierda = 0;
long long sumacurrent = 0;
long long maxtramo = 0;
for(int derecha = 0; derecha < largoarray; derecha++){
    sumacurrent += tramos[derecha];
    while(sumacurrent > energia){ //ajusto el rango por el lado izquierdo hasta que este dentro de la energia
        sumacurrent -= tramos[izquierda];
        izquierda++;
    }
    if((derecha - izquierda + 1) > maxtramo){
        maxtramo = derecha - izquierda + 1; //para incluir el rango completo(3-2-1 por ej en vez de 3-1 = 2)
    }
}
cout << maxtramo;
return 0;    
}