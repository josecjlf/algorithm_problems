#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, d;
    cin >> n >> d;
    int total = 0;

    vector<int> l (n);

    for(int i = 0; i < n;i++){
        int temp;
        cin >> temp;
        l[i] = temp;
        total += temp;
    }

    if((10*(n-1) + total) > d){
        cout << "-1";
        return 0;
    }

    total = 0;

    for(int i = 0; i < n; i++){
        d -= l[i];
        if(d >= 10){
            d -= 10;
            total++;
            total++;
        }
        else if(d >= 5){
            d -= 5;
            total++;
        }

    }

    total += d / 5;

    cout << total;



    return 0;
}