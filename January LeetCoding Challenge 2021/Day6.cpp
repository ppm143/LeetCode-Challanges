//Problem Link:https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3594/   

int findKthPositive(vector<int>& a, int k) {
        int n= a.size();
        int ans=1,i=0;
        while(k){
            if(i>=n)k--;
            else if(ans==a[i])i++;
            else k--;
                               
            ans++;                   
        }
        return ans-1;
    }