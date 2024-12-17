void insert_at_any_position(Node *&head, int index, int value)
{
    Node *new_node = new Node(value);

    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
}

// shortcut: cpplliap (cpp linked list insert at any position)