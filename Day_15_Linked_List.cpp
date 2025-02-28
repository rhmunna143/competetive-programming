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
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node* head, int data) {
            Node* newNode = new Node(data);
            
            // If list is empty, return new node as head
            if(head == NULL) {
                return newNode;
            }
            
            // Find the last node
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            
            // Add new node at the end
            temp->next = newNode;
            
            return head;
        }

        void display(Node *head) {
            Node *temp = head;
            while(temp != NULL) {
                cout << temp->data;
                if(temp->next != NULL) {
                    cout << " ";
                }
                temp = temp->next;
            }
        }
};

int main() {
    Node* head = NULL;
    Solution mylist;
    
    int T, data;
    cin >> T;
    
    while(T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    
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