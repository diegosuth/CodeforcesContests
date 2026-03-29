#include <bits/stdc++.h>
using namespace std;
int main() {
int casos;
cin >> casos;
for(int i = 0; i < casos; i++){
    long long combatemain;
    long long monstruostotales;
    long long powerups;
    long long ataque = 0;
    cin >> monstruostotales >> combatemain >> powerups;  
    long long plantillamonstruos[monstruostotales];
    for(int j = 0; j < monstruostotales; j++){
        cin >> plantillamonstruos[j];
    }
    sort(plantillamonstruos,plantillamonstruos + monstruostotales); 
    for(int j = 0; j < monstruostotales; j++){
         if(combatemain >= plantillamonstruos[j]){
            while((combatemain > plantillamonstruos[j]) && (powerups > 0)){
                ataque = combatemain - plantillamonstruos[j];
                if(powerups - ataque < 0){
                    ataque = powerups;
                }
                plantillamonstruos[j] = plantillamonstruos[j] + ataque;
                powerups = powerups - ataque;
            }
            combatemain += plantillamonstruos[j];
        }
    }
    cout << combatemain << endl;

}
    return 0;
}
