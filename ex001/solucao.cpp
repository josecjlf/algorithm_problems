#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> lista(n);

    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }

    int total = 1 << n;

    for(int mask = 0; mask < total; mask++){
        int angulo = 0;

        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                angulo += lista[i];
            }
            else{
                angulo -= lista[i];
            }
        }

        if(angulo % 360 == 0){
            cout << "SIM" << endl;
            return 0;
        }
    }

    cout << "NAO";
    return 0;
}