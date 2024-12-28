#include <bits/stdc++.h>
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
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    if (head == NULL || head->next == NULL)
    {
        cout << 0 << endl;
        return 0;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        maximum = max(maximum, temp->value);
        minimum = min(minimum, temp->value);
        temp = temp->next;
    }
    cout << maximum - minimum << endl;
    return 0;
}