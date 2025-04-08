// doubly linkedlist basics :

#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *back;

    // constructor 1:
    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }

    // constructor 2 :
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

// function to convert an array into a doubly linked list :
Node *convert(vector<int> &arr)
{

    // creation of the head node:
    Node *head = new Node(arr[0]); // use of constructor 1
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev); // use of constructor 2
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// function to delete the head node of the linked list :

Node *del(Node *head)
{

    if (head == NULL || head->next == NULL)
        return NULL;

    Node *prev = head;

    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

// function to delete the tail of a DLL :

Node *delatend(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    Node *prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;
    delete tail;
    return head;
}

// function to insert a node at the end of the DLL:

Node* insertatend(Node* head, int data){

    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node* tail = head;

    while(tail -> next != NULL){
        tail = tail -> next;
    }

    Node* nodetoinsert = new Node(data);
    tail -> next = nodetoinsert;
    nodetoinsert -> back = tail;
    nodetoinsert -> next = nullptr;

    return head;
    

}

// function to reverse a doubly linked list :

Node* reverse(Node* head){

    if(head == NULL || head -> next == NULL){
         return head;
    }

    Node* prev = NULL;
    Node* curr = head;
   

    while(curr != NULL){

    prev = curr -> back;
    curr -> back = curr -> next;
    curr -> next = prev;
    curr = curr -> back;
    }

    return prev -> back;
    

}

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50};

    Node *head = convert(arr);

    print(head);

    cout << endl;

    head = del(head);

    print(head);

    cout << endl;

    head = delatend(head);

    print(head);

    cout << endl;

    head = insertatend(head, 100);

    print(head);

    cout << endl;

    cout << "reversing DLL" << endl;
    head =  reverse(head);
    
    print(head);
}