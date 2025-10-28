#include <bits//stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    int m;
    cin >> m;
    vector<int> l(m);

    for(int i = 0; i < m; i++) cin >> l[i];


    for(int i = 0; i < m; i++){

        auto up = upper_bound(vec.begin(), vec.end(), l[i]);
        cout << (up-vec.begin()) << endl;


    }



    return 0;
}