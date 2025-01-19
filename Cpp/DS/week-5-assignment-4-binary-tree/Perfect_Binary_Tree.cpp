/***
 * Objective:
 *
 * Context: You will be given a binary tree as input in level order. You need to tell if the binary tree is perfect or not. A binary tree is called perfect if all leaf nodes are at the maximum depth of the tree, and the tree is completely filled with no gaps.
 * Also there is formula available to tell if a binary tree is perfect or not. The formula is :

Total number of nodes 2^max_depth - 1
 *
 *
 * Constrains:
 * 1. 1 <= Maximum number of nodes in the binary tree <= 10^5
 * 2. 1 <= Value of nodes <= 10^3
 *
 * Note: Here depth is counted from 1. In the above image maximum depth is 4, so total number of nodes are 2 pow(4) - 1 = 15. So there should be 15 nodes to call it a perfect binary tree.
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. Input will contain the binary tree in level order. -1 means there is no node available.
 * 3. Output "YES" if the tree is perfect, "NO" otherwise.
 * 4. End
 *
 */

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

Node *input_binary_tree()
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
        cin >> leftVal;
        if (leftVal != -1)
        {
            current->left = new Node(leftVal);
            q.push(current->left);
        }

        cin >> rightVal;
        if (rightVal != -1)
        {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }

    return root;
}

void collect_leaf_nodes(Node *root, vector<int> &leaves)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        leaves.push_back(root->value);
        return;
    }

    collect_leaf_nodes(root->left, leaves);
    collect_leaf_nodes(root->right, leaves);
}

int max_depth(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + max(max_depth(root->left), max_depth(root->right));
}

int total_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + total_nodes(root->left) + total_nodes(root->right);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *root = input_binary_tree();
    vector<int> leaves;
    collect_leaf_nodes(root, leaves);

    int depth = max_depth(root);
    int total = total_nodes(root);

    if (total == pow(2, depth) - 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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