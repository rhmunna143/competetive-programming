/***
 * Objective:
 *
 * Context: You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X. Your task is to determine whether X is present in the linked list or not. If it is present, print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.
 *
 *
 * Constrains:
 * 1. 1 <= T <= 100
 * 2. 1 <= N <= 10^5
 * 3. -10 pow(9) <= V, X <= 10^9
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. First line will contain T, the number of test cases.
 * 3. First line of each test case will contain the values of the singly linked list, and will terminate with -1.
 * 4. Second line of each test case will contain X.
 * 5. Output the index of X in the linked list.
 * 6. end
 *
 */

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

int search_node(Node *head, int x)
{
    int index = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->value == x)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }

    return -1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
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

        int X;
        cin >> X;

        int result = search_node(head, X);
        cout << result << endl;
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