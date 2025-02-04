/***
 * Objective:to test stl list skills
 *
 * Context: You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

You need to insert the value V at index X. Assume that index starts from 0.
After that for each query you need to print the linked list from left to right and right to left.
If the index is invalid, then print "Invalid".
 *
 *
 * Constrains:
 * 1. 0 <= Q, X, V <= 1000
 *
 * Note: must use list stl. use functions like sort, unique, remove_if, etc. also use custom function
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input first line as number of queries Q
 * 3. take input next Q lines as X and V
 * 4. insert the value V at index X
 * 5. print the linked list from left to right (L -> 10 20)
 * 6. print the linked list from right to left (R -> 20 10)
 * 7. if the index is invalid then print "Invalid"
 * 8. end
 *
 */

#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
class dubly_linked_list
{
public:
    Node *head;
    Node *tail;
    dubly_linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    void insert_at_index(int index, int value)
    {
        Node *new_node = new Node(value);
        if (index == 0)
        {
            if (head == NULL)
            {
                head = new_node;
                tail = new_node;
            }
            else
            {
                new_node->next = head;
                head->prev = new_node;
                head = new_node;
            }
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                if (temp == NULL)
                {
                    cout << "Invalid" << endl;
                    delete new_node;
                    return;
                }
                temp = temp->next;
            }
            if (temp == NULL)
            {
                cout << "Invalid" << endl;
                delete new_node;
                return;
            }
            new_node->next = temp->next;
            new_node->prev = temp;
            if (temp->next != NULL)
            {
                temp->next->prev = new_node;
            }
            temp->next = new_node;
            if (new_node->next == NULL)
            {
                tail = new_node;
            }
        }
        print_link_list();
    }
    void print_link_list()
    {
        cout << "L -> ";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
        cout << "R -> ";
        temp = tail;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};
int main()
{
    int Q;
    cin >> Q;
    dubly_linked_list val;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        val.insert_at_index(X, V);
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