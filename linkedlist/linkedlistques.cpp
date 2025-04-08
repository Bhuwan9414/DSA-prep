// revision of singly linked list :

#include <iostream>
#include<stack>
using namespace std;

// creation of a node using class :
class Node
{

public:
    int data;
    Node *next;

    // constructor for creation of a new node:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor :
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

// logic to insert at the begin of the linkedlist :
void insertatbegin(Node *&head, int data)
{

    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// logic to insert at the middle of the linked list :
void insertatmiddle(Node *&head, int data, int pos)
{

    Node *temp = head;

    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void insertatend(Node *&tail, int data)
{

    Node *temp = new Node(data);
    tail->next = temp;
    temp->next = NULL;
    // tail = temp;
}

void print(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


// deletion logics :

// deletion of the head node
void deleteatbegin(Node* &head)
{

    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    delete(temp);

}

// function to delete a node at any position of the linked list :
void deleteatmid(Node* &head, int pos){

    Node* prev = NULL;
    Node* curr = head;

    int cnt = 1;    
    while(cnt<pos){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}

// function to find the length of the linked list:

int findlength(Node* &head){

    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        temp = temp -> next;
        cnt++;
    }

    return cnt;

}

bool findelement(Node* head, int key){

    Node* temp = head;

    while(temp != nullptr){
        if(temp->data == key)
            return true;
            temp = temp -> next;
    }
    return false;
}

Node* findmid(Node* head){

    int n = findlength(head);  

    int mid = (n/2) + 1;

    Node* temp = head;

    while(temp != NULL){
       mid = mid - 1;
       if(mid == 0)
       break;
       temp = temp -> next;
    }
    return temp;

}

// optimal approach for finding the mid node :

Node* mid(Node* head){

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next-> next;
    }

    return slow;

}


// reverse a linked list :

Node* reverse(Node* head){

    Node* temp = head;
    stack <int> st;

    while(temp != NULL){
        st.push(temp->data);
        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL){
        temp -> data = st.top();
        st.pop();
        temp = temp -> next;
    }
    return temp;

}

// reversing using recursive approach :

Node* recurse(Node* head){

    Node* temp = head;
    Node* prev = NULL;
     
    while(temp != NULL){

        Node* front = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = front;

    }

    return prev;

}

int main()
{

    // int data;
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;

    cout << "initial linked list with only one element" << endl;
    print(head);

    cout << endl;

    insertatbegin(head, 10);
    cout << "after first insertion at begin" << endl;
    print(head);

    cout << endl;

    insertatbegin(head, 20);
    cout << "after second insertion at begin" << endl;
    print(head);

    cout << endl;

    insertatmiddle(head, 400, 2);
    cout << "after middle insertion " << endl;
    print(head);

    cout << endl;

    insertatend(tail, 500);
    cout << "after insertion at tail " << endl;
    print(head);

    cout << endl;

    deleteatbegin(head);
    cout << "after deletion at the head " << endl;
    print(head);

    cout << endl;

    deleteatmid(head, 4);
    cout << "after deletion at given position " << endl;
    print(head);

    cout << endl;

    int ans = findlength(head);
    cout << "length of the latest updated linked list is : " << ans << endl;

    // cout << endl;

    if(findelement(head, 10)){
        cout << "element found" << endl;
    }
    else{
        cout << "not found" << endl;
    }


    // Node* result = findmid(head);
    // cout << "mid element is : " << result -> data << endl;
    // int result = findmid(head);
    // cout << "mid is " << result << endl;


    Node* result2 = mid(head);
    cout << "after optimal appraoch " << result2 -> data << endl;

    reverse(head);
    cout << "after reversal" << endl;
    print(head);

    cout << endl;

    head = recurse(head);
    cout << "After another approach " << endl;
    print(head);

}