
//Problem Link - https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3589/

bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
    int n = arr.size();
    int m = pieces.size();

    for (int i = 0; i < m; i++) {
        int nm = pieces[i][0];
        int ind = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == nm) {
                ind = j;
            }
        }
        for (int j = ind; j < pieces[i].size() + ind; j++) {
            if (arr[j] != pieces[i][j - ind])return false;
        }
    }
    return true;
}

// TC: O(n*m) & SC: O(1)