//Problem Link: https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3592/


ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if (!h1) 
        return h2; 
    if (!h2) 
        return h1; 
    if (h1->val < h2->val) { 
        h1->next = mergeTwoLists(h1->next, h2); 
        return h1; 
    } 
    else { 
        h2->next = mergeTwoLists(h1, h2->next); 
        return h2; 
    } 
}