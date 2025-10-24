#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    int L = 0;
    int temp_sum = 0;
    int max_sum = -1;

    vector<int> vec(n);
    for(int i = 0; i<n;i++) cin >> vec[i];

    for(int i = 0; i < n; i++){
        temp_sum += vec[i];

        while(temp_sum>t){
            temp_sum -= vec[L];
            L++;
        }
        max_sum = max(max_sum, i-L+1);

    }



    cout << max_sum;



    return 0;
}