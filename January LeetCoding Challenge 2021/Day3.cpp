//Problem Link : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3591/

class Solution {
    int ans=0;
public:
    int countArrangement(int n) {
        int a[n+1];
        for(int i=0;i<=n;i++)a[i]=i;
        solve(a,1,n+1);
         return ans;
    }
    void solve(int a[],int ind,int n){
        if(ind==n){
            ans++;
            return;
        }
        
        for(int i=ind;i<n;i++){
            if(ind%a[i]==0 || a[i]%ind==0){
                swap(a[ind],a[i]);
                solve(a,ind+1,n);
                swap(a[ind],a[i]);
            }
        }
    }
   
};