/***
 * Objective:
 *
 * Context: You will be given a binary tree as input in level order. Also you will be given a level . You need to print all the node's values in that level from left to right. Assume that level starts from .
 *
 *
 * Constrains:
 *
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *input_tree_at_level_order()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;
        if (leftVal != -1)
        {
            current->left = new Node(leftVal);
            q.push(current->left);
        }
        if (rightVal != -1)
        {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }
    return root;
}
void print_level(Node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        print_level(root->left, level - 1);
        print_level(root->right, level - 1);
    }
}
int tree_height(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(tree_height(root->left), tree_height(root->right));
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *root = input_tree_at_level_order();
    int level;
    cin >> level;
    int height = tree_height(root);
    if (level >= height)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        print_level(root, level);
        cout << endl;
    }
    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. [Engg.] in Computer Science and Engineering, [CSE]
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */