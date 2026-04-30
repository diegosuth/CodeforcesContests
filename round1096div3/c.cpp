#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int largoarray;
        cin >> largoarray;
        deque<int> numerosoptimized;
        vector<int> multiplosde6;
        vector <int> trez;
        vector<int> doz;
        for(int j = 0; j < largoarray; j++){
            int temp;
            cin >> temp;
            if(temp % 6 == 0){
                multiplosde6.push_back(temp);
                continue;
            }
            else if(temp % 3 == 0){
                trez.push_back(temp);
                continue;
            }
            else if(temp % 2 == 0){
                doz.push_back(temp);
                continue;
            }
            numerosoptimized.push_back(temp);
        }
        for(int g = 0; g < trez.size(); g++){
                numerosoptimized.push_front(trez[g]);
        }
        for(int g = 0; g < doz.size(); g++){
                numerosoptimized.push_back(doz[g]);
        }   
        for(int g = 0; g < multiplosde6.size(); g++){
            if(g % 2 == 0){
                numerosoptimized.push_front(multiplosde6[g]);
            }
            else{
                numerosoptimized.push_back(multiplosde6[g]);
            }
        }
        for(int h = 0; h < numerosoptimized.size(); h++){
            if(h == numerosoptimized.size() - 1){
                cout << numerosoptimized[h] << endl;
                continue;
            }
            cout << numerosoptimized[h] << ' ';
        }
    }
    return 0;    
}