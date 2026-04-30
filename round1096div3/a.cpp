#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int a, b;
        bool sepuede = false;
        cin >> a >> b;
        if(a % 2 == 0){
            if(b % 2 == 0){
                sepuede = true;
            }
            else{
                sepuede = true;
            }
        }
        else{
            if(b % 2 == 0){
                sepuede= true;
            }
        }
        if(sepuede){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;    
}