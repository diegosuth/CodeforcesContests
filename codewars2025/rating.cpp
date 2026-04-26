#include <bits/stdc++.h>
using namespace std;

int main(){
string linea;
int casos;
int rating;
bool venida = true;
cin >> casos;
cin.ignore();
getline(cin,linea);
istringstream iss(linea);
for (int i = 1; i <= casos ; i++){
    iss >> rating;
    if (rating >= 1200){
        cout << i;
        venida = false;
        break;
    }
    continue;
}
if (venida){
    cout << "-1";
}
return 0;    
}