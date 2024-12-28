#include <iostream>
using namespace std;
class Node {
public:
    int value;
    Node* next;
    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};
void insert_at_tail(Node*& head, Node*& tail, int value) {
    Node* new_node = new Node(value);

    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}
int search(Node* head, int x) {
    int index = 0;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->value == x) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;
        int val;
        while (true) {
            cin >> val;
            if (val == -1) {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        int result = search(head, x);
        cout << result << endl;
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}