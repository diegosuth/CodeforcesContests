#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    long long guardiastotales;
    long long moduloreset;
    cin >> guardiastotales >> moduloreset;
    vector<long long> timers;
    for(int j = 0; j < guardiastotales; j++){
        long long temp;
        cin >> temp;
        timers.push_back(temp);
    }
    long long timerinicial = timers[0];
    int contadorseguidos = 1;
    bool cooked = false;
    for(int t = 1; t < guardiastotales; t++){
        if(timerinicial == timers[t]){
            contadorseguidos++;
            if(contadorseguidos == moduloreset){
                cooked = true;
            }
        }
        else{
            contadorseguidos = 1;
            timerinicial = timers[t];
        }
    }
    if(cooked){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

}
    return 0;
}
