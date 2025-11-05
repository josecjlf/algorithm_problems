#include <bits/stdc++.h>

using namespace std;

int main(){

    string word;
    cin >> word;

    vector<int> prefix(word.size()+1,0);

    for(int i = 1; i <= (int)word.size(); i++){
        prefix[i] = prefix[i-1];
        if (word[i] == word[i-1]) {
            prefix[i]++;
        }
    }

    int n;
    cin >> n;

    while(n--){
        int l,r;
        cin >> l >> r;
        cout << prefix[r-1] - prefix[l-1] << endl;


    }
    


    return 0;
}