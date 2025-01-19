#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition of TreeNode
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to build the tree from level order input
TreeNode *buildTree(const vector<int> &levelOrder)
{
  if (levelOrder.empty() || levelOrder[0] == -1)
    return nullptr;

  TreeNode *root = new TreeNode(levelOrder[0]);
  queue<TreeNode *> q;
  q.push(root);
  size_t i = 1;

  while (!q.empty() && i < levelOrder.size())
  {
    TreeNode *current = q.front();
    q.pop();

    if (levelOrder[i] != -1)
    {
      current->left = new TreeNode(levelOrder[i]);
      q.push(current->left);
    }
    i++;

    if (i < levelOrder.size() && levelOrder[i] != -1)
    {
      current->right = new TreeNode(levelOrder[i]);
      q.push(current->right);
    }
    i++;
  }

  return root;
}

// Function to get the left boundary (excluding leaves)
void getLeftBoundary(TreeNode *node, vector<int> &result)
{
  while (node)
  {
    if (node->left || node->right)
      result.push_back(node->val);
    if (node->left)
      node = node->left;
    else
      node = node->right;
  }
}

// Function to get all leaf nodes
void getLeaves(TreeNode *node, vector<int> &result)
{
  if (!node)
    return;
  if (!node->left && !node->right)
  {
    result.push_back(node->val);
    return;
  }
  getLeaves(node->left, result);
  getLeaves(node->right, result);
}

// Function to get the right boundary (excluding leaves)
void getRightBoundary(TreeNode *node, vector<int> &result)
{
  vector<int> temp;
  while (node)
  {
    if (node->left || node->right)
      temp.push_back(node->val);
    if (node->right)
      node = node->right;
    else
      node = node->left;
  }
  // Reverse and add to result
  for (auto it = temp.rbegin(); it != temp.rend(); ++it)
  {
    result.push_back(*it);
  }
}

// Function to print the outer boundary of the tree
vector<int> printOuterTree(const vector<int> &levelOrder)
{
  TreeNode *root = buildTree(levelOrder);
  vector<int> result;
  if (!root)
    return result;

  if (root->left || root->right)
    result.push_back(root->val); // Root is part of the boundary if it's not a single leaf

  getLeftBoundary(root->left, result);
  getLeaves(root, result);
  getRightBoundary(root->right, result);

  return result;
}

// Main function to test the implementation
int main()
{
  vector<int> levelOrder = {10, 20, 30, 40, 70, -1, 50, 90, 110, -1, -1, 80, 60, -1, -1, -1, -1, 100, -1, -1, -1, -1, -1};
  vector<int> result = printOuterTree(levelOrder);

  for (int val : result)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
