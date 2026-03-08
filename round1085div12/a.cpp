#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
for (int i = 0; i < casos;i++){
    int largobasura;
    string numeros;
    cin >> largobasura;
    cin >> numeros;
    for(int j = 0; j < numeros.length(); j++){
        if(j == 0 || j == numeros.length()-1){
            continue;
        }
        if(numeros[j-1] == '1' && numeros[j+1] == '1'){
            numeros[j] = '1';
        }
    }
    int contadorunos = 0;
    for(char c: numeros){
        if(c == '1'){
            contadorunos++;
        }
    }
    for(int f = 0; f < numeros.length(); f++){
        if(f == 0 || f == numeros.length()-1){
            continue;
        }
        if(numeros[f-1] == '1' && numeros[f+1] == '1'){
            numeros[f] = '0';
        }
    }
    int contadorceros = 0;
    for(char d: numeros){
        if(d == '1'){
            contadorceros++;
        }
    }
    cout << contadorceros << ' ' << contadorunos << endl;
}
return 0;    
}
