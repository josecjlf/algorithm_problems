#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> l(n);

    for(int i = 0; i < n;i++) cin >> l[i];

    int min_sum = 0;
    int temp_sum = 0;
    int index = 1;

    for(int i = 0; i< k; i++) temp_sum += l[i];
    min_sum = temp_sum;

    for(int i = k; i < n; i++){
        temp_sum += l[i] - l[i-k];
        if(temp_sum < min_sum){
            min_sum = temp_sum;
            index = i-k+2;
        }

    }

    cout << index;

    return 0;
}