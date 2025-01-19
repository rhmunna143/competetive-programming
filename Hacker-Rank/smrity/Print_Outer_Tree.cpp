#include <iostream>
#include <queue>
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

void get_left_boundary(Node *root, vector<int> &boundary)
{
  Node *current = root;
  while (current)
  {
    if (current->left || current->right)
    {
      boundary.push_back(current->data);
    }
    if (current->left)
    {
      current = current->left;
    }
    else
    {
      current = current->right;
    }
  }
}

void get_right_boundary(Node *root, vector<int> &boundary)
{
  vector<int> temp;
  Node *current = root;
  while (current)
  {
    if (current->left || current->right)
    {
      temp.push_back(current->data);
    }
    if (current->right)
    {
      current = current->right;
    }
    else
    {
      current = current->left;
    }
  }
  for (auto it = temp.rbegin(); it != temp.rend(); ++it)
  {
    boundary.push_back(*it);
  }
}

void get_leaves(Node *root, vector<int> &boundary)
{
  if (!root)
    return;
  get_leaves(root->left, boundary);
  if (!root->left && !root->right)
  {
    boundary.push_back(root->data);
  }
  get_leaves(root->right, boundary);
}

vector<int> print_outer_nodes(Node *root)
{
  vector<int> boundary;
  if (!root)
    return boundary;

  if (root->left || root->right)
  {
    boundary.push_back(root->data);
  }

  get_left_boundary(root->left, boundary);
  get_leaves(root, boundary);
  get_right_boundary(root->right, boundary);

  return boundary;
}

int main()
{
  Node *root = input_binary_tree();
  vector<int> result = print_outer_nodes(root);

  for (int val : result)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}