#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        string linea;
        cin >> linea;
        string copialinea;
        int contadoriguales = 0;
        bool istrue = true;
        for(int d = 0; d < linea.length()-1; d++){
            if(linea[d] == linea[d+1]){
                contadoriguales++;
            }
        }
        if(contadoriguales > 2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
}
    return 0;    
}