#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c, f;
    cin >> n >> c >> f;

    vector <int> lista(n);

    for(int i = 0; i < n; i++) cin >> lista[i];

    sort(lista.begin(), lista.end());

    int i = 0;

    while(c > lista[i] && i < n){
        c += lista[i];
        i++;
    }

    if(c > f){
        cout << "SIM";
    }

    else{
        cout << "NAO";
    }
    return 0;
}