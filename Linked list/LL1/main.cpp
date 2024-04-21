#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node() {
            this->next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

int insertAtHead(Node* &head, int data) {
    if(head == NULL) { //LL is empty
        Node* newNode = new Node(data);
        head = newNode;        
    } else { //LL not empty
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

int insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL || tail == NULL) {
        Node* newNode = new Node(data);
        tail = newNode; 
    } else {
        Node* newNode = new Node(data);
        //attach new node with tail node
        tail->next = newNode;
        tail = newNode; 
    }
}

void printLL(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
        len++;
    }
    cout<<"NULL"<<endl;
    cout<<"length is "<<len<<endl;
}

int main() {

    // Node a; creating node
    Node* first = new Node(10);
    Node* second = new Node(53);
    Node* third = new Node(4);
    Node* forth = new Node(51);
    Node* fifth = new Node(78);

    //linked created
    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    //head created
    Node* head = first;
    // printLL(head);

    insertAtHead(head, 4);
    printLL(head);
    return 0;
}