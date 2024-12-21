/***
 * Objective:
 *
 * Context: You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. -10^9 <= A[i] <= 10^9
 *
 * Note: must use singly linked list to solve this problem, otherwise you will not get marks.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. Input will contain the values of the singly linked list, and will terminate with -1.
 * 3. Output the difference between the maximum and minimum value.
 * 4. end
 *
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

    // find the maximum and minimum value
    int max_value = INT_MIN;
    int min_value = INT_MAX;

    // if only one node is present
    if (head == NULL || head->next == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        max_value = max(max_value, temp->value);
        min_value = min(min_value, temp->value);
        temp = temp->next;
    }

    // output the difference between the maximum and minimum value
    cout << max_value - min_value << endl;

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