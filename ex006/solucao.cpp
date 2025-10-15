#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> vec1(n);
    vector<int> vec2(m);

    for(int i = 0; i < n; i++){
        cin >> vec1[i];
    }

    for(int i = 0; i < m; i++){
        cin >> vec2[i];
    }

    sort(vec1.begin(), vec1.end());

    for(int i = 0; i < m;i++){
        
        cout << upper_bound(vec1.begin(), vec1.end(), vec2[i]) - vec1.begin() << " ";
    }



}
