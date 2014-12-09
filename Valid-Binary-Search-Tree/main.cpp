// Binary Search Tree validation
// (c) Sergey Smirnov, 2014
// smirnov@nyu.edu

#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
public:
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool is_valid_bst(TreeNode *root)
{
    if (root->left && root->right)
    {
        if (root->left->val < root->val && root->right->val > root->val)
        {
            if (root->left->left || root->left->right)
                return is_valid_bst(root->left);
            if (root->right->left || root->right->right)
                return is_valid_bst(root->right);
            return true;
        }
        else return false;
    }
    else if (root->left)
    {
        if (root->left->val < root->val)
        {
            if (root->left->left || root->left->right)
                return is_valid_bst(root->left);
            return true;
        }
        else return false;
    }
    else if (root->right)
    {
        if (root->right->val > root->val)
        {
            if (root->right->left || root->right->right)
                return is_valid_bst(root->right);
            return true;
        }
        else return false;
    }
    else return true;
}

int main()
{
    TreeNode *t1 = new TreeNode(1);
    TreeNode *t2 = new TreeNode(2);
    TreeNode *t3 = new TreeNode(3);
    TreeNode *t4 = new TreeNode(4);
    TreeNode *t5 = new TreeNode(5);
    t3->left = t2;
    t3->right = t4;
    t4->left = t1;
    t4->right = t5;

    cout << "Testing tree {3, 2, 4, #, #, 1, 5}:\n";
    if (is_valid_bst(t3))
        cout << "Tree is valid.\n";
    if (!is_valid_bst(t3))
        cout << "Tree is not valid.\n";

    t5->val = 3;
    cout << "Testing tree {3, 2, 4, #, #, 1, 3}:\n";
    if (is_valid_bst(t3))
        cout << "Tree is valid.\n";
    if (!is_valid_bst(t3))
        cout << "Tree is not valid.\n";
}