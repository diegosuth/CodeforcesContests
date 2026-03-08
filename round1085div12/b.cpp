#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
for (int i = 0; i < casos;i++){
    int linternastotales;
    int animatronicos;
    int segundostotales;
    cin >> linternastotales >> animatronicos >> segundostotales;
    int instanteinterna[linternastotales];
    for(int j = 0; j < linternastotales; j++){
        cin >> instanteinterna[j];
    }
    int dangerporanimatronico[animatronicos] = {0};
    int contador = 0;
    int contadoreliminar = 0;
    for(int g = 0; g < segundostotales; g++){
        if(contador == animatronicos){
            contador = 0;
        }
        if(contadoreliminar == animatronicos){
            contadoreliminar = 0;
        }
        dangerporanimatronico[contador] = dangerporanimatronico[contador] + 1;
        if(g == instanteinterna[g]){
            dangerporanimatronico[contadoreliminar] = 0;
            contadoreliminar++;
        } 
        contador++;
    }
    sort(dangerporanimatronico,dangerporanimatronico + animatronicos);
    cout << dangerporanimatronico[0] << endl;
}
return 0;    
}
