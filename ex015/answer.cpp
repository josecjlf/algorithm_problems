#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    vector<int> l (n);
    
    for(int i = 0; i < n; i++) cin >> l[i];
    
    for(int i = n-2; i >= 0; i--){
        for(int j = i; j < n-1; j++){
            if(l[j] > l[j+1]){
                int temp = l[j];
                l[j] = l[j+1];
                l[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) cout << l[i] << " ";
    
}