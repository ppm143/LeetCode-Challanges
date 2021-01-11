//Problem Link: https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3600/
 void merge(vector<int>& A, int m, vector<int>& B, int n) {
         int i=m-1;
		int j=n-1;
		int k = m+n-1;
		while(i >=0 && j>=0)
		{
			if(A[i] > B[j])
				A[k--] = A[i--];
			else
				A[k--] = B[j--];
		}
		while(j>=0)
			A[k--] = B[j--];
    }