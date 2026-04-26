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
long long maxtramos = 0;
for(int h = 0; h < largoarray; h++){
    long long contador = 0;
    long long tramillos = 0;
    for(int k = h; k < largoarray; k++){
        if((contador + tramos[k]) <= energia){
            tramillos++;
            contador += tramos[k];
        }
        else{
            break;
        }
    }
    if(tramillos > maxtramos){
        maxtramos = tramillos;
    }
    contador = 0;
    tramillos = 0;
}
cout << maxtramos;
return 0;    
}