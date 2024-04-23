#include <iostream>
#include <string>
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

int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

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
    if(head == NULL) {
        Node* newNode = new Node(data);
        tail = newNode; 
        head = newNode; 
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

void insertAtPosition(Node* &head, Node* tail, int data, int position) {
    if(position < 1) {
        cout<<"Cannot insert, Please enter a valid position"<<endl;
        return;
    }
    int length = getLength(head);
    
    if(position == 1) {
        insertAtHead(head, data);
    } else if(position > length) {
        insertAtTail(head, tail, data);
    } else {
        //step: 1.create new node
        Node* newNode = new Node(data);
        //traverse prev || current to position
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        //step3: attach prev to newNode
        prev->next = newNode;
        //ste4: attach newNode to curr
        newNode->next = curr;
    }
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 15);
    insertAtHead(head, 40);
    // printLL(head);
    // insertAtTail(head, tail, 80);
    // insertAtTail(head, tail, 90);
    insertAtPosition(head, tail, 55, 45);
    printLL(head);


    // // Node a; creating node
    // Node* first = new Node(10);
    // Node* second = new Node(53);
    // Node* third = new Node(4);
    // Node* forth = new Node(51);
    // Node* fifth = new Node(78);

    // //linked created
    // first->next = second;
    // second->next = third;
    // third->next = forth;
    // forth->next = fifth;

    // //head created
    // Node* head = first;
    // Node* tail = fifth;
    // // printLL(head);

    // insertAtHead(head, 4);
    // printLL(head);
    // insertAtTail(head, tail, 44);
    // printLL(head);
    return 0;
}