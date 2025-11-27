#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> all;
    vector<int> current;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bt(nums, 0);
        return all;
    }

    void bt(vector<int> &vec, int i){
        if(i == (int)vec.size()){
            auto it = find(all.begin(), all.end(), current);
            if(it == all.end()){
                all.push_back(current);
            }
            return;

        }

        bt(vec, i+1);
        current.push_back(vec[i]);
        bt(vec, i+1);
        current.pop_back();

    }

};