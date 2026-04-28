#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        long long x;
        long long y;
        cin >> x >> y;
        bool istrue = false;
        if(y > (x + x)){
            istrue = true;
        }
        if(istrue){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    
    return 0;    
}