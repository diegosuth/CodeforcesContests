#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int total;
        cin >> total;
        string todoselementos = "";
        for(int f = 0; f < total; f++){
            char temp;
            cin >> temp;
            todoselementos += temp;
        }
        int izq = 0;
        int der = 1;
        int contadoriguales = 0;
        int maxcontadoriguales = 0;
        string mediana;
        string prevmediana = todoselementos.substr(izq,der);
        while(der < todoselementos.size() && izq <= der){
            der = der + 2;
            mediana = todoselementos.substr(izq,der);
            sort(mediana.begin(),mediana.end());
            mediana = mediana[(((der-izq) * 2) - 1)/2];
            if(mediana == prevmediana){
                contadoriguales++;
                if(contadoriguales > maxcontadoriguales){
                    maxcontadoriguales = contadoriguales;
                }

            }
            else{
                izq = izq + 2;
                contadoriguales = 0;
                mediana = todoselementos.substr(izq,der);
                sort(mediana.begin(),mediana.end());
                mediana = mediana[(((der-izq) * 2) - 1)/2];
                if(mediana == prevmediana){
                    contadoriguales++;
                    if(contadoriguales > maxcontadoriguales){
                        maxcontadoriguales = contadoriguales;
                    }
                }
            }
            prevmediana = mediana;
        }
        cout << maxcontadoriguales << endl;
    }
    
    return 0;    
}