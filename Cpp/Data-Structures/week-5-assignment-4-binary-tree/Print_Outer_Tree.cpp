#include <iostream>
#include <queue>
#include <stack>
#include <vector>
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

void print_left_boundary(Node *root, vector<int> &boundary)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
    {
        boundary.push_back(root->data);
        print_left_boundary(root->left, boundary);
    }
    else if (root->right != NULL)
    {
        boundary.push_back(root->data);
        print_left_boundary(root->right, boundary);
    }
}

void print_right_boundary(Node *root, vector<int> &boundary)
{
    if (root == NULL)
        return;
    if (root->right != NULL)
    {
        print_right_boundary(root->right, boundary);
        boundary.push_back(root->data);
    }
    else if (root->left != NULL)
    {
        print_right_boundary(root->left, boundary);
        boundary.push_back(root->data);
    }
}

void print_leaves(Node *root, vector<int> &boundary)
{
    if (root == NULL)
        return;
    print_leaves(root->left, boundary);
    if (root->left == NULL && root->right == NULL)
    {
        boundary.push_back(root->data);
    }
    print_leaves(root->right, boundary);
}

void print_outer_nodes(Node *root)
{
    if (root == NULL)
        return;

    vector<int> boundary;
    boundary.push_back(root->data);

    print_left_boundary(root->left, boundary);
    print_leaves(root->left, boundary);
    print_leaves(root->right, boundary);
    print_right_boundary(root->right, boundary);

    for (int i = 0; i < boundary.size(); i++)
    {
        cout << boundary[i] << " ";
    }
    cout << endl;
}

int main()
{
    Node *root = input_binary_tree();
    print_outer_nodes(root);
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