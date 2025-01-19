/***
 * Objective:
 *
 * Context:
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

        cin >> val;
        if (val != -1)
        {
            current->left = new Node(val);
            q.push(current->left);
        }

        cin >> val;
        if (val != -1)
        {
            current->right = new Node(val);
            q.push(current->right);
        }
    }

    return root;
}

int sum_without_leaf(Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return root->value + sum_without_leaf(root->left) + sum_without_leaf(root->right);
}

int main() {
    Node* root = input_binary_tree();

    int sum = sum_without_leaf(root);

    cout << sum << endl;

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