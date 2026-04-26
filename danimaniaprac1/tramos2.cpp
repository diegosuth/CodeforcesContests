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
long long maxenergia = 0;
long long energiaori = energia;
for(int h = 0; h < largoarray; h++){
    long long contador = 0;
    for(int k = h; k < largoarray; k++){
        if((energia - tramos[k]) >= 0){
            energia = energia - tramos[k];
            contador++;
        }
        else{
            break;
        }
    }
    if(contador > maxenergia){
        maxenergia = contador;
    }
    energia = energiaori;
}
cout << maxenergia;
return 0;    
}