#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int largoarray;
    cin >> largoarray;
    vector<int> arraynumeros;
    for(int d = 0; d < largoarray; d++){
        int temp;
        cin >> temp;
        arraynumeros.push_back(temp);
    }
    long long sumatoriafinal = 0;
    long long multiplicador = 1;
    bool skip = false;
    bool shouldiadd = false;
    for(int g = 0; g < largoarray;g++){
        if(skip){
            skip = false;
            continue;
        }
        if(arraynumeros[g] == 1 && g < largoarray -1){
            if(shouldiadd){
                sumatoriafinal += multiplicador;
                multiplicador = 1;
                shouldiadd = false;
            }
            sumatoriafinal += arraynumeros[g+1];
            skip = true;
            
        }
        else{
            multiplicador = multiplicador * arraynumeros[g];
            shouldiadd = true;
        }
    }
    cout << sumatoriafinal % 676767677 << endl;
}
    return 0;
}
