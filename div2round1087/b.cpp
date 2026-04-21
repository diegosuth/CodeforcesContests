#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    long long largoarray;
    cin >> largoarray;
    long long arraynumeros[largoarray];
    for(int j = 0; j < largoarray; j++){
        cin >> arraynumeros[j];
    }
    vector<int> indicesgod;
    for(int f = 0; f < largoarray; f++){
        int contadorindicesgod = 0;
        for(int g = f + 1; g < largoarray; g++){
            if(arraynumeros[f] == arraynumeros[g]){
                continue;
            }
            else if((arraynumeros[f] > 0) && (arraynumeros[g] < 0)){
                contadorindicesgod++;
            }
            else if((arraynumeros[f] < 0) && (arraynumeros[g] > 0)){
                contadorindicesgod++;
            }
            else if(arraynumeros[f] > arraynumeros[g]){
                contadorindicesgod++;
            }
            else if(arraynumeros[g] > arraynumeros[f]){
                contadorindicesgod++;
            }
        }
        indicesgod.push_back(contadorindicesgod);
    }
    int contadorcutre = 0;
    for(int d : indicesgod){
        if(contadorcutre == 0){
            contadorcutre++;
            cout << d;
            continue;
        }
        cout << ' ' << d;
    }
    cout << endl;
}
    return 0;
}
