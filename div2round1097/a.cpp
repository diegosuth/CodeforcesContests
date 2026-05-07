#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        vector<long long> numeros;
        int largonumeros;
        cin >> largonumeros;
        for(int d = 0; d < largonumeros;  d++){
            long long temp;
            cin >> temp;
            numeros.push_back(temp);
        }
        int contadoralt = 0;
        for(int g = numeros.size()-1; g >= 0; g--){
            if(numeros[g] <= 0){
                if((g > 0) && ((numeros[g-1] + numeros[g]) >= 0)){
                    numeros[g-1] += numeros[g];
                    contadoralt++;
                }
            }
            else{
                contadoralt++;
            }
        }
        for(int f = 0; f < numeros.size()-1;f++){
            if(numeros[f] <= 0 && numeros[f+1] + numeros[f] > 0){
                numeros[f] +=numeros[f+1];
                contadoralt++;
            }
        }
        cout << contadoralt << endl;
    }
    return 0;    
}