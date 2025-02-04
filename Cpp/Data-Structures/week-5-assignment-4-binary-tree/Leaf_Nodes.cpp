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

void print_leaf_nodes(Node *root)
{
    vector<int> leaves;
    collect_leaf_nodes(root, leaves);
    sort(leaves.begin(), leaves.end(), greater<int>());

    for (int leaf : leaves)
    {
        cout << leaf << " ";
    }
    cout << endl;
}

int main()
{
    Node *root = input_binary_tree();
    print_leaf_nodes(root);

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
 */