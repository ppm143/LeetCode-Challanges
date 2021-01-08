//Problem Link:https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3597/ 

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1="";
        for(int  i=0;i<word1.size();i++)ans1+=word1[i];
          string ans2="";
        for(int  i=0;i<word2.size();i++)ans2+=word2[i];
        
        return ans1==ans2;
    }