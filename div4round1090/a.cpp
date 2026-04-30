#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int largoarray;
    int numerobonus;
    cin >> largoarray >> numerobonus;
    int secuencianumeros[largoarray];
    long long sumatoria = 0;
    for(int j = 0; j < largoarray; j++){
        cin >> secuencianumeros[j];
        sumatoria += secuencianumeros[j];
    }
    if(sumatoria % 2 == 0){
        //ver si k * cantidad de elementos es par o no
        if(((largoarray * numerobonus) - 1)  % 2 == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    else{
        cout << "YES" << endl;
    }
}
    return 0;
}
