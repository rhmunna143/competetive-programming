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

#include <bits/stdc++.h>
using namespace std;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    class Node
    {
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    void insert_at_index(Node * &head, Node * &tail, int index, int val)
    {
        Node *new_node = new Node(val);

        if (index == 0)
        {
            // Insertion at the beginning
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
            // Traverse to the (index - 1)th node
            Node *temp = head;
            int currIndex = 0;
            while (temp != NULL && currIndex < index - 1)
            {
                temp = temp->next;
                currIndex++;
            }

            // If index is invalid, print "Invalid" and return
            if (temp == NULL)
            {
                cout << "Invalid" << endl;
                return;
            }

            // Insert the new node at the correct position
            new_node->next = temp->next;
            if (temp->next != NULL)
            {
                temp->next->prev = new_node;
            }
            temp->next = new_node;
            new_node->prev = temp;

            // If we inserted at the last position, update the tail
            if (new_node->next == NULL)
            {
                tail = new_node;
            }
        }
    }

    // Function to print the list from left to right
    void print_forward(Node * head)
    {
        Node *newnode = head;
        while (newnode != NULL)
        {
            cout << newnode->val << " ";
            newnode = newnode->next;
        }
        cout << endl;
    }

    // Function to print the list from right to left
    void print_backward(Node * tail)
    {
        Node *newnode = tail;
        while (newnode != NULL)
        {
            cout << newnode->val << " ";
            newnode = newnode->prev;
        }
        cout << endl;
    }

    int main()
    {
        int Q;
        cin >> Q; // Number of queries

        Node *head = NULL;
        Node *tail = NULL;

        for (int i = 0; i < Q; i++)
        {
            int X, V;
            cin >> X >> V;

            insert_at_index(head, tail, X, V); // Insert val at index X
            print_forward(head);               // Print the list from head to tail
            print_backward(tail);              // Print the list from tail to head
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