#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int largoarray;
    cin >> largoarray;
    int numeros[largoarray];
    for(int j = 0; j < largoarray; j++){
        cin >> numeros[j];
    }
    if (largoarray == 1){
        cout << 1;
    }
    else if(largoarray == 2){
        cout << 2 << ' ' << 2;
    }
    else{
        for(int h = 0; h < largoarray; h++){
            if(h == 0){
                cout << 2;
                continue;
            }
            else{
                cout << ' ' << 2;
            }
        }
    }
    cout << endl;
}
    return 0;
}
