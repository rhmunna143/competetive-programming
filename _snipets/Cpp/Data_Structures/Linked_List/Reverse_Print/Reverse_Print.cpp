void linked_list_reverse_print(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    linked_list_reverse_print(head->next);
    cout << head->value << endl;
}

// shortcut: cppllrp (cpp linked list reverse print)