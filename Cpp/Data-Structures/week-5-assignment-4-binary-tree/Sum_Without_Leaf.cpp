#include <iostream>
#include <queue>
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

Node *insert_level_order(Node *root)
{
    queue<Node *> q;
    int val;
    cin >> val;
    if (val == -1)
        return NULL;

    root = new Node(val);
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cin >> val;
        if (val != -1)
        {
            p->left = new Node(val);
            q.push(p->left);
        }

        cin >> val;
        if (val != -1)
        {
            p->right = new Node(val);
            q.push(p->right);
        }
    }

    return root;
}

int sum_without_leaf(Node *root)
{
    if (root == NULL)
        return 0;

    int sum = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        if (current->left != NULL || current->right != NULL)
        {
            sum += current->data;
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

    return sum;
}

int main()
{
    Node *root = NULL;

    // Construct the binary tree from input
    root = insert_level_order(root);

    // Calculate the sum of non-leaf nodes
    int result = sum_without_leaf(root);
    cout << result << endl;

    return 0;
}