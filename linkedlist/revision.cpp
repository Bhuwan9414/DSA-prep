#include<iostream>
using namespace std;

class Node
{
    public :

    int data;
    Node *next;

    // this is a constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //  this is a destructor
    ~Node() {
    // Just reset the next pointer
    // Do NOT delete the next node to prevent recursive deletion
    this->next = NULL;
}

};

// void insert(Node* &head, int data){

//     Node* newnode = new Node(data);

//     if(head == nullptr){
//         head = newnode;
//     }
//     else{
//         Node* temp = head;
//         while(temp -> next != nullptr)
//            temp = temp -> next;

//            temp -> next = newnode;
//     }

// }

// function for inserting at end
void insertatend(Node* &head, int data){

    Node* newnode = new Node(data);

    if(head == nullptr){
        head = newnode;
    }
    else{
        Node* temp = head;
        
        while(temp->next != nullptr)
            temp = temp -> next;

            temp ->next = newnode;
    }

}


// function for inserting at begin

void insertatbegin(Node *&head, int data){

    Node *temp = new Node(data);
    temp -> next = head;
    head = temp;
}

// function to insert at middle :

void insertatmiddle(Node *&head, int data, int pos){

    Node *temp = head;

    int cnt = 1;
    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }

    Node *newnode = new Node(data);
    newnode -> next = temp -> next;
    temp -> next = newnode;
}


// function to delete a node at begin
void deleteatbegin(Node *&head){

    Node *temp = head;

    head = head -> next;

    delete temp;

}
 

// function to delete a node at end
void deleteatend(Node *&head){

    Node *prev = head;

    while(prev -> next -> next != nullptr){
        prev = prev -> next;
    }

    delete prev -> next;
    prev -> next = nullptr;

}







void display(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp -> next;
    }
}



int main(){

    Node *head = nullptr;
    Node *tail = nullptr;


    insertatbegin(head, 5);
    insertatbegin(head, 2);

    insertatend(head, 10);
    insertatend(head, 20);
    insertatend(head, 30);


    insertatmiddle(head, 7, 3);
    insertatmiddle(head, 8, 4);

    
    cout << "linked list : " << endl;
    display(head);

    cout << endl;

    deleteatbegin(head);
    cout << "after deletion" << endl;
    display(head);

    cout << endl;
    deleteatend(head);
    cout << "after deletion at end" << endl;
    display(head);

}