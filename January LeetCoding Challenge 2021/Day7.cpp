
//Problem Link: https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3595/
int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int> charIndex(256, -1);
        int longest = 0, m = 0;
        for(int i=0;i<n;i++){
            m = max(charIndex[s[i]] + 1, m);    
            charIndex[s[i]] = i;
            longest = max(longest, i - m + 1);
        }
        return longest;
}