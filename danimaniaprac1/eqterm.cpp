#include <bits/stdc++.h>
using namespace std;

int main(){
int m1;
int t1;
int m2;
int t2;
cin >> m1 >> t1;
cin >> m2 >> t2;
float formula = ((m1*t1) + (m2*t2))/(m1 + m2);
cout << floor(formula);
return 0;    
}
