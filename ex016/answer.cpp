#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> all;
    vector<int> current;

    vector<vector<int>> subsets(vector<int>& nums) {
        bt(nums, 0);
        return all;
    }

    void bt(vector<int> &vec, int i){
        if(i == vec.size()){
            all.push_back(current);
            return;
        }

        bt(vec, i+1);
        current.push_back(vec[i]);
        bt(vec, i+1);
        current.pop_back();

    }

};