#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
    if (tail == NULL)
    {
        tail = head;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    if (tail == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}
void delete_at_position(Node *&head, Node *&tail, int index)
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
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int Q;
    cin >> Q;
    Node *head = NULL;
    Node *tail = NULL;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_position(head, tail, V);
        }
        print_list(head);
    }
    return 0;
}