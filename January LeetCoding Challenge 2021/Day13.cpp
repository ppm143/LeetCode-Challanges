
//Problem Link:https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3602/
 int numRescueBoats(vector<int>& ppl, int limit) {
        sort(begin(ppl), end(ppl));
          int boats=0;
          for (int i = 0, j = ppl.size() - 1; i <= j; ++boats, --j) {
            if (ppl[i] + ppl[j] <= limit) ++i;
          }
          return boats;
}