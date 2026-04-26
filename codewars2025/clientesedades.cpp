#include <bits/stdc++.h>
using namespace std;

int main(){
int clientes;
int edad;
int parquebolas = 0;
int parqueatracc = 0;
int expculinaria = 0;
cin >> clientes;
for (int i = 0; i < clientes; i++){
    cin >> edad;
    if (2 < edad && edad < 7){
        parquebolas += 1;
    }
    else if(6 < edad && edad <18){
        parqueatracc += 1;
    }
    else if(edad > 17){
        expculinaria += 1;
    }
}
cout << "PARQUE BOLAS: " << parquebolas << endl;
cout << "PARQUE ATRACCIONES: " << parqueatracc << endl;
cout << "EXPERIENCIA CULINARIA: " << expculinaria << endl;  
return 0;    
}