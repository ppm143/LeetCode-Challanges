//Problem Link: https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3593/ 


ListNode* deleteDuplicates(ListNode* start) {
       ListNode* dummy = new ListNode; 
  
  
    dummy -> next = start; 
      
 
    ListNode* prev = dummy; 
      
   
    ListNode* current = start; 
  
    while(current != NULL) 
    { 
       
        while(current -> next != NULL && 
              prev -> next -> val == current -> next -> val) 
            current = current -> next; 
  
      
        if (prev -> next == current) 
            prev = prev -> next; 
  
       
        else
            prev -> next = current -> next; 
  
        current = current -> next; 
    } 
  
    start = dummy -> next;  
        return start;
    }
    