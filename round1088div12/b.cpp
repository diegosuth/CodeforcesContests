#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int x;
    int y;
    cin >> x >> y;
    int elementostotales = x + y;
    int condicion = abs(x - y);
    int funcion;
    if(condicion % 2 != 0){
        funcion = 1;
    }
    else{
        funcion = 2;
    }
    
}
    return 0;
}
