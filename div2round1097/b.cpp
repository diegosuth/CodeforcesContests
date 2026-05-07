#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int largoarray;
        vector<int> numeros;
        cin >> largoarray;
        numeros.reserve(largoarray);
        long long maxnumber = 0;
        for(int d = 0; d < largoarray; d++){
            int temp; 
            cin >> temp;
            if(temp > maxnumber){
                maxnumber = temp;
            }
            numeros.push_back(temp);
        }
        long long sumatoria = 0;
        sort(numeros.begin(),numeros.end());
        int mex = 0;
        for(int g = 0; g < largoarray; g++){
            if(numeros[g] == mex){
                mex++;
            }
        }
        for(int f = 0; f < largoarray ; f++){
            sumatoria += mex + maxnumber;
        }
        cout << sumatoria << endl;
    }
    return 0;    
}