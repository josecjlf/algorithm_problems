#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
   
    int answer = 0;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0, mx=-1e9, mn=1e9, count = 0;

        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                sum += vec[i];
                mn = min(mn, vec[i]);
                mx = max(mx, vec[i]);
                count++;
            }
        }

        if((count>=2) & ((mx-mn) >= x) & (sum >=l) & (sum <= r) ){
            answer++;
        }
    
    }

    cout << answer;
  

    return 0;
}
