// Problem Link - https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3590/

TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    queue<TreeNode*> q1, q2;
    q1.push(original); q2.push(cloned);
    while (!q1.empty()) {
        auto size = q1.size();
        while (size --) {
            auto n1 = q1.front(), n2 = q2.front();
            q1.pop(); q2.pop();
            if (n1 == target) return n2;
            if (n1->left) {
                q1.push(n1->left);
                q2.push(n2->left);
            }
            if (n1->right) {
                q1.push(n1->right);
                q2.push(n2->right);
            }
        }
    }
    return NULL;
}

//TC: O(height of tree) & SC: O(number of nodes)