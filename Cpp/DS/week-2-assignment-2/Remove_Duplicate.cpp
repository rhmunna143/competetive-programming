/***
 * Objective:
 * 
 * Context: You will be given a singly linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list.

The process is, for each node N, traverse from that node and delete all nodes where the values are same with N.
 *
 * 
 * Constrains:
 * 1. 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
 * 2. 0 <= V <= 1000; Here V is the value of each node.
 * 
 * Note: You must use singly linked list, otherwise you will not get marks.
 *
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. First line will contain the values of the singly linked list, and will terminate with -1.
 * 3. Output the final linked list where there will be no duplicate values.
 * 4. end
 *
 */

#include<bits/stdc++.h>
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

    tail->next = new_node;
    tail = new_node;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    Node *head = NULL;
    Node *tail = NULL;

    int value;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_at_tail(head, tail, value);
    }

    Node *temp1 = head;

    while (temp1 != NULL)
    {
        Node *temp2 = temp1;
        while (temp2->next != NULL)
        {
            if (temp1->value == temp2->next->value)
            {
                Node *node_to_delete = temp2->next;
                temp2->next = temp2->next->next;
                delete node_to_delete;
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        temp1 = temp1->next;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;

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