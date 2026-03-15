#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int totalcartas;
    int cartasporturno;
    int posicioninicialwincondition;
    int totalenergiadisponible;
    vector<int> mazo;
    cin >> totalcartas >> cartasporturno >> posicioninicialwincondition >> totalenergiadisponible;
    for(int j = 0; j < totalcartas; j++){
        int temp;
        cin >> temp;
        mazo.push_back(temp);
    }
    int contadorjuegowincondition = 0;
    int posicionwincondition = posicioninicialwincondition - 1;
    int cartaaevaluar;
    bool outofenergy = false;
    bool cutre = false;
    int indicecartaaevaluar;
    while(totalenergiadisponible > 0){
        outofenergy = false;
        cutre = false;
        int menorcarta = 6000;
        for(int f = 0; f < cartasporturno; f++){
            if(f == posicionwincondition){
                posicionwincondition = mazo.size() - 1;
                mazo.push_back(mazo[f]);
                if((totalenergiadisponible - mazo[f]) < 0){
                    outofenergy = true;
                    break;
                }
                totalenergiadisponible = totalenergiadisponible - mazo[f];
                contadorjuegowincondition++;
                cutre = true;
                mazo.erase(mazo.begin() + f);
                break;
            }
            if((mazo[f] < menorcarta)){
                menorcarta = mazo[f];
                cartaaevaluar = mazo[f];
                indicecartaaevaluar = f;
            }
        }
        if(outofenergy){
            break;
        }
        if(cutre){
            continue;
        }
        totalenergiadisponible = totalenergiadisponible - cartaaevaluar;
        mazo.erase(mazo.begin() + indicecartaaevaluar);
        mazo.push_back(cartaaevaluar);
        posicionwincondition--;
    }
    cout << contadorjuegowincondition << endl;
}
    return 0;
}
