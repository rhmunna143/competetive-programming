void delete_at_index(Node *&head, Node *&tail, int index)
{
    if (index < 0 || head == NULL)
        return;

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < index - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
        return;

    Node *node_to_delete = temp->next;
    temp->next = temp->next->next;
    if (temp->next == NULL)
    {
        tail = temp;
    }
    delete node_to_delete;
}