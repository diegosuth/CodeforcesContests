#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    int sillastotal;
    cin >> sillastotal;
    int arraysillas[sillastotal];
    for(int f = 0; f < sillastotal;f++){
        cin >> arraysillas[f];
        arraysillas[f] = arraysillas[f] - 1;
    }
    int contador = 0;
    int contadoralt = 0;
    vector<bool> notvisited(sillastotal,true);
    int marcador = 0;
    while(true){
        marcador = arraysillas[contadoralt];
        if(arraysillas[contadoralt] > (sillastotal/2) && notvisited[contadoralt]){
            contador++;
            notvisited[marcador] = false;
        }
        else if(notvisited[contadoralt]){
            contador++;
            notvisited[marcador] = false;
        }
        else{
            break;
        }
        contadoralt++;
        contadoralt = contadoralt % sillastotal;
    }
    cout << contador << endl;
}
    return 0;
}
