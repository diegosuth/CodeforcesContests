#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int largoarray;
    cin >> largoarray;
    set<int> copia;
    vector<int> numeros;
    for(int j = 0; j < largoarray; j++){
        int temp;
        cin >> temp;
        numeros.push_back(temp);
        copia.insert(temp);
    }
    if(copia.size() != numeros.size()){
        cout << -1 << endl;
    }
    else{
    sort(numeros.begin(),numeros.end());
    reverse(numeros.begin(),numeros.end());
    for(int f = 0; f < largoarray; f++){
        if(f == largoarray - 1){
            cout << numeros[f] << endl;
            continue;
        }
        cout << numeros[f] << ' ';
        }
    }
}
    return 0;
}
