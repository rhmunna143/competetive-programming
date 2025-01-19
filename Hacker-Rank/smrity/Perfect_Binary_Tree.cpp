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
bool is_perfect_binary_tree(Node *root)
{
    if (root == NULL)
        return true;
    queue<Node *> q;
    q.push(root);
    bool foundLeafLevel = false;
    int level = 0;
    int leafLevel = -1;
    while (!q.empty())
    {
        int size = q.size();
        level++;
        for (int i = 0; i < size; i++)
        {
            Node *current = q.front();
            q.pop();
            if (current->left == NULL && current->right == NULL)
            {
                if (!foundLeafLevel)
                {
                    foundLeafLevel = true;
                    leafLevel = level;
                }
                else if (level != leafLevel)
                {
                    return false;
                }
            }
            else if (current->left == NULL || current->right == NULL)
            {
                return false;
            }
            if (current->left != NULL)
            {
                q.push(current->left);
            }
            if (current->right != NULL)
            {
                q.push(current->right);
            }
        }
    }
    return true;
}
int main()
{
    Node *root = input_tree_at_level_order();
    if (is_perfect_binary_tree(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
 */