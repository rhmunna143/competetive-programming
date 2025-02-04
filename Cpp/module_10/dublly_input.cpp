/***
 * Objective:
 * 
 * Context:
 *
 * 
 * Constrains:
 *
 * 
 * Note:
 *
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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
        new_node->prev = tail;
        tail = new_node;
    }
}

void print_forward(Node *head)
{
    Node *newnode = head;
    while (newnode != NULL)
    {
        cout << newnode->value << " ";
        newnode = newnode->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *newnode = tail;
    while (newnode != NULL)
    {
        cout << newnode->value << " ";
        newnode = newnode->prev;
    }
    cout << endl;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   Node* head = NULL;
    Node* tail = NULL;
   int val;
   while(true)
   {
    cin>>val;
    if(val==-1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
   } 
   
print_forward(head);
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
 *
 * Copyright (c) All rights reserved.
 */