#include <bits/stdc++.h>
using namespace std;

int main(){
    string fechas;
    string fechaini;
    string fechafinal;
    int personas;
    int diadecena1;
    int diaunidad1;
    int mesunidad1;
    int diadecena2;
    int diaunidad2;
    int mesunidad2;
    int fechadiatotal1;
    int fechadiatotal2;
    int fecha1convertida;
    int fecha2convertida;
    int diaretornado;
    int mesretorando;
    cin >> personas;
    cin.ignore();
    for (int i = 0; i < personas;i++){
        getline(cin, fechas);
        istringstream iss(fechas);
        iss >> fechaini >> fechafinal;
        diadecena1 =( fechaini[0] + '0') * 10;
        diaunidad1 = fechaini[1] + '0';
        mesunidad1 = fechaini[4] + '0';
        diadecena2 = (fechafinal[0] + '0') * 10;
        diaunidad2 = fechafinal[1] + '0';
        mesunidad2 = fechafinal[4] + '0';
        fechadiatotal1 = diadecena1 + diaunidad1;
        fechadiatotal2 = diadecena2 + diaunidad2; 
        if(mesunidad1 == 8){
            fecha1convertida =  31 + fechadiatotal1;
        }
        else{
            fecha1convertida = fechadiatotal1;
        }
        if(mesunidad2 == 8){
            fecha2convertida = 31 + fechadiatotal2;
        }
        else{
            fecha2convertida = fechadiatotal2;
        }
return 0;    
}