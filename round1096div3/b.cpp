#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int cantidachar;
        cin >> cantidachar;
        string linea;
        cin >> linea;
        int cantidadleft = 0;
        int cantidadright = 0;
        for(char c : linea){
        if(c == '('){
            cantidadleft++;
        }
        else{
            cantidadright++;
        }
     }
     if(cantidadleft == cantidadright){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
    return 0;    
}