/***
 * Objective:
 *
 * Context: You will be given a binary tree as input in level order. Also you will be given a level X. You need to print all the node's values in that level from left to right. Assume that level starts from 0.
 * For Example: If X = 2, then the output for the above tree will be: 40 50 60
 *
 * Constrains:
 * 1. 1 <= Maximum number of nodes in the binary tree <= 10^5
 * 2. 1 <= Value of nodes <= 10^3
 * 3. 0 <= X <= 10^5
 *
 * Note: If the level X is not a valid level, the print "Invalid".
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. Input will contain the binary tree in level order. -1 means there is no node available.
 * 3. Output all the node's values in level X.
 * 4. If the level X is not a valid level, then print "Invalid".
 * 5. End
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

void print_level(Node *root, int level)
{
    if (root == NULL)
        return;

    if (level == 0)
    {
        cout << root->value << " ";
        return;
    }

    print_level(root->left, level - 1);
    print_level(root->right, level - 1);
}

int height(Node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

void print_level_order(Node *root, int level)
{
    int h = height(root);

    if (level >= h)
    {
        cout << "Invalid" << endl;
        return;
    }

    print_level(root, level);
    cout << endl;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *root = input_binary_tree();
    int level;
    cin >> level;

    print_level_order(root, level);

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