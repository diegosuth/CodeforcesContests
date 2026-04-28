#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int largoarray;
        int operacionestotales;
        vector<int> elementospares;
        vector<int> elementosimpares;
        vector<int> indicesamarcarodd;
        vector<int> indicesamarcareven;
        cin >> largoarray >> operacionestotales;
        for(int j = 0; j < largoarray; j++){
            int temp;
            cin >> temp;
            if(j % 2 == 0){
                elementospares.push_back(temp);
            }
            else{
                elementosimpares.push_back(temp);
            }
        }
        for(int g = 0; g < operacionestotales; g++){
            int temp;
            cin >> temp;
            temp--;
            bool iseven;
            if(temp % 2 == 0){
                indicesamarcareven.push_back(temp);
            }
            else{
                indicesamarcarodd.push_back(temp);
            }
        }
        sort(elementosimpares.begin(),elementosimpares.end());
        sort(elementospares.begin(),elementospares.end());
        long long sumatoria = 0;
        int maximosoddquepuedoborrar = indicesamarcarodd.size();
        bool borrealgunoodd = false;
            if(indicesamarcarodd.size() > 0){
                for(int d = int(elementosimpares.size()-1); d >= 0; d--){
                    if((elementosimpares[d] > 0) && (maximosoddquepuedoborrar > 0)){
                        maximosoddquepuedoborrar--;
                        borrealgunoodd = true;
                        continue;
                }
                sumatoria+= elementosimpares[d];
                }
                if(!borrealgunoodd && !elementosimpares.empty()){
                        sumatoria = sumatoria - elementosimpares[elementosimpares.size()-1];
                    }
            }
            else{
                for(int d = 0; int(d < elementosimpares.size()); d++){
                    sumatoria += elementosimpares[d];
                }
            }
        int maximosevenquepuedoborarr = indicesamarcareven.size();
        bool borrealgunopar = false;
        if(indicesamarcareven.size() > 0){
            for(int d = int(elementospares.size() - 1); d >= 0;d--){
                if((elementospares[d] > 0) && (maximosevenquepuedoborarr > 0)){
                    maximosevenquepuedoborarr--;
                    borrealgunopar = true;
                    continue;
                }
                sumatoria+= elementospares[d];
                }
                if(!borrealgunopar && !elementospares.empty()){
                    sumatoria = sumatoria - elementospares[elementospares.size()-1];
                }
        }
        else{
            for(int d = 0; d < int(elementospares.size());d++){
                sumatoria+= elementospares[d];
            }
    }
    cout << sumatoria << endl;
}
    return 0;    
}