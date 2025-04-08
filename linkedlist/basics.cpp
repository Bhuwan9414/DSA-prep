// #include<iostream>
// #include<vector>
// using namespace std;

// struct Node {
//     public : 
//     int data;
//     Node* next;

//     public :
//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }
// };

// int main(){

//   vector<int> arr = {2,4,6,7,8};
//   Node* y = new Node(arr[3], nullptr);
//   cout << y -> data;

// }


// love babbar linkedlist :

#include<iostream>
using namespace std;

// creation of a node
class Node {

    // things that the node will contain 
    public:
    int data;
    Node* next;

    // creation of a new node:
    // below is a constructor
    Node(int data){ 
        this -> data = data;
        this -> next = NULL;
    }

    // destructor :
    ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};


// function to insert a node at the beginning of a linked list :

void insertatbegin(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

// function to insert a node at the end of the LL:

void insertatend(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

// function to insert a node at the middle of the linkedlist:

void insertatmiddle(Node* tail, Node* &head, int pos, int data){

    // incase if we want to insert at the first poisition then :  
    if(pos == 1){
        insertatbegin(head,data);
        return;
    }

    Node* temp = head;  // this is a temp pointer which is assigned with the value of head
    int cnt = 1;


    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }

    // incase if we want to insert at the end:
    if(temp -> next == NULL){
        insertatend(tail,data);
        return;
    }

    Node* nodetoinsert = new Node(data);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;

}

// function to print the linkedlist :

void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;  

}

// function to delete the starting node of the LL :
void deleting(int pos, Node* &head){

    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<pos){
            prev = current;
            current = current -> next;
            cnt++; 
        }
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
    }

}


int main(){

    Node* node1 = new Node(10); 
    Node* head = node1;
    Node* tail = node1;


    cout << "before insertion " << endl;
    print(head);

    

    insertatbegin(head, 200);
    cout << "after updation " << endl;
    print(head);

    insertatend(tail, 40);
    cout << "after insertion at the end " << endl;
    print(head);

    insertatmiddle(tail, head, 4, 100);
    cout << "after insertion at the given position " << endl;
    print(head);

    deleting(2,head);
    cout << "after deleting the given node " << endl;
    print(head);


}

// void printing(Node* &head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }

// }