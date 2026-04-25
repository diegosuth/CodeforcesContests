#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int totalproblems;
        cin >> totalproblems;
        bool sepuede = false;
        int temp;
        for(int j = 0; j < totalproblems; j++){
            cin >> temp;
            if(temp == 100){
                sepuede = true;
                break;
            }
        }
        if(sepuede){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;    
}