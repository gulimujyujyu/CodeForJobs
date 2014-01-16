/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root) return;
        TreeLinkNode *lv_ptr = root, *cur_ptr = root, *pp;
        while (lv_ptr->left) { //we have next level
            cur_ptr = lv_ptr;
            //populate next pointers to next level
            while (cur_ptr) {
                pp = cur_ptr->left;
                pp->next = cur_ptr->right;
                cur_ptr = cur_ptr->next;
                pp = pp->next;
                if (cur_ptr) {
                    pp->next = cur_ptr->left;
                } else {
                    pp->next = NULL; // ready to break
                }
            }
            lv_ptr = lv_ptr->left;
        }
    }
};