/***
 * Objective:
 *
 * Context: You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".
 *
 *
 * Constrains:
 * 1. 1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list
 * 2. 0 <= V <= 1000; Here V is the value of each node.
 *
 * Note: You must use singly linked list, otherwise you will not get marks.
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. First line will contain the values of the first singly linked list, and will terminate with -1.
 * 3. Second line will contain the values of the second singly linked list, and will terminate with -1.
 * 4. Output "YES" or "NO".
 * 5. end
 */

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

    Node *head2 = NULL;

    Node *tail2 = NULL;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2, value);
    }

    Node *temp1 = head;

    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->value != temp2->value)
        {
            cout << "NO" << endl;
            return 0;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL && temp2 == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

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