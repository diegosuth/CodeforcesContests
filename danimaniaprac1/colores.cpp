#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int largoarray;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> largoarray;
        vector<int> impares;
        int arraytodo[largoarray];
        for(int j = 0 ; j < largoarray;j++){
            cin >> arraytodo[j];
        }
        for(int f : arraytodo){
            if(f % 2 == 1){
                impares.push_back(f);
            }
        }
        if(impares.size() % 2 == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
return 0;    
}
