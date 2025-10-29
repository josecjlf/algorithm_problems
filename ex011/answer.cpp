#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    
    for(int i = 0; i < n; i++) cin >> vec[i];

    int sereja = 0, dima = 0;
    int left = 0, right = n-1;
    bool turn = true;

    while(left <= right){
        int temp;
        if(vec[right] > vec[left]){
            temp = vec[right];
            right--;
        }
        else{
            temp = vec[left];
            left++;
        }
        
        if(turn){
            sereja += temp;
        }
        else{
            dima += temp;
        }

        turn = !turn;
    }

   
    cout << sereja << " " << dima;

    return 0;
}