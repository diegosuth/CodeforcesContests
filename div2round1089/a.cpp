#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int largoarray;
    cin >> largoarray;
    for(int f = largoarray; f > 0; f--){
        if(f == 0){
            cout << f;
            continue;
        }
        cout << ' ' <<f;
    }
    cout << endl;
}
    return 0;
}
 