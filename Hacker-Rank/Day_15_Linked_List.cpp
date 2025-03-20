/***
 * Objective: Implement a linked list insertion method
 * 
 * Context:
 * - Need to add nodes to the end of a linked list
 * - Insert function accepts head pointer and data
 * - Returns the head pointer after insertion
 * 
 * Constrains:
 * - 1 ≤ T ≤ 1000
 * - 1 ≤ data ≤ 1000
 * 
 * Algorithm:
 * 1. Create a new node with the given data
 * 2. If list is empty (head is NULL), make the new node the head
 * 3. Otherwise, traverse to find the last node
 * 4. Append the new node after the last node
 */

#include<bits/stdc++.h>
using namespace std;

// Node class definition
class Node {
    public:
        int data;
        Node *next;
        Node(int d) {
            data = d;
            next = NULL;
        }
};

class Solution {
    public:
        // Function to insert a node at the end of the linked list
        Node* insert(Node *head, int data) {
            // Create a new node with the given data
            Node *newNode = new Node(data);
            
            // If the list is empty, make the new node the head
            if(head == NULL) {
                return newNode;
            }
            
            // Otherwise, traverse to find the last node
            Node *current = head;
            while(current->next != NULL) {
                current = current->next;
            }
            
            // Link the new node after the last node
            current->next = newNode;
            
            // Return the head of the list
            return head;
        }

        // Function to display the linked list
        void display(Node *head) {
            Node *start = head;
            while(start) {
                cout << start->data << " ";
                start = start->next;
            }
        }
};

int main() {
    // Create an empty linked list
    Node* head = NULL;
    Solution mylist;
    
    // Read number of nodes to insert
    int T, data;
    cin >> T;
    
    // Read each element and insert into the linked list
    while(T--) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    
    // Display the linked list
    mylist.display(head);
    
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