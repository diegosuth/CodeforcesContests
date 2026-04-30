#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int n;
    cin >> n;
    unsigned long long target = 1;
    unsigned long long actual = 1;
    for(int j = 1; j <= n; j++){
       while(actual % target != 1){
            target++;
       }
       unsigned long long k = target + 1;
       while(gcd(actual, target * k) != target){
            k++;
       }
       unsigned long long siguiente = target * k;
       if( j == n){
        cout << actual << endl;
       }
       else{
        cout << actual << ' ';
       }
       actual = siguiente;
       target++;
    }
  
}
    return 0;
}
