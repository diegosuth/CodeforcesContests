#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
string linea;
string opcion;
int votos = 0;
int contador = 0;
bool empate = false;
int indexganador = 0;
int mayoresvotos = 0;
cin >> casos;
cin.ignore();
string opciones[casos];
int eleccion[casos];
for (int i = 0; i < casos; i++){
    getline(cin,linea, ':');
    opcion = linea;
    opciones[i] = opcion;
    getline(cin,linea);
    istringstream jss(linea);
    jss >> votos;
    eleccion[i] = votos;
    }
    mayoresvotos = eleccion[0];
for (int v = 1; v < casos; v++){
    if (eleccion[v] == mayoresvotos){
        empate = true;
    }
    if (eleccion[v] > mayoresvotos){
        mayoresvotos = eleccion[v];
        indexganador = v;
    }
    }
if (empate){
    cout << "Hay que seguir discutiendolo (o echar a alguien del grupo)";
}
else{
cout << opciones[indexganador];
}
return 0;    
}