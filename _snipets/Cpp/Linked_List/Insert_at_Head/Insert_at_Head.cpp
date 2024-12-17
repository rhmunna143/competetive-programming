void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);

    new_node->next = head;
    head = new_node;
}

// shortcut: cpplih (cpp linked list insert at head)