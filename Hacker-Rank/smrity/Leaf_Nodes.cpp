#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* input_binary_tree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cin >> val;
        if (val != -1) {
            current->left = new Node(val);
            q.push(current->left);
        }
        cin >> val;
        if (val != -1) {
            current->right = new Node(val);
            q.push(current->right);
        }
    }
    return root;
}
void descending_leaf_level_order(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    vector<int> leafNodes;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        if (!current->left && !current->right) {
            leafNodes.push_back(current->data);
        }
        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }
    sort(leafNodes.begin(), leafNodes.end(), greater<int>());
    for (int leaf : leafNodes) {
        cout << leaf << " ";
    }
    cout << endl;
}
int main() {
    Node* root = input_binary_tree();
    descending_leaf_level_order(root);
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