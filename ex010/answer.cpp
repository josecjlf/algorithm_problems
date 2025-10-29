#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>l(n);
    for(int i = 0; i< n; i++) cin >> l[i];
    

    int left = 0;
    int maxi = 1;
    
    for(int right = 1; right < n; right++){
        if(l[right] > l[right-1]){
            maxi = max(maxi, right-left+1);
        }
        else{
            left = right;
        }
        
    }
    
    cout << maxi;
    

    return 0;
}