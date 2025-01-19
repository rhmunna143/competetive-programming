// Input binary Tree
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