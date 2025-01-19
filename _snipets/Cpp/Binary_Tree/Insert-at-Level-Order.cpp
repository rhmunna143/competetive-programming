// Insert at Level Order
Node *insert_level_order(Node *root)
{
    queue<Node *> q;
    int value;
    cin >> value;
    if (value == -1)
        return NULL;

    root = new Node(value);
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cin >> value;
        if (value != -1)
        {
            p->left = new Node(value);
            q.push(p->left);
        }

        cin >> value;
        if (value != -1)
        {
            p->right = new Node(value);
            q.push(p->right);
        }
    }

    return root;
}

// IALo