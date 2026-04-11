// Doubly Linked List
// ALL insertions are done befoe. Like beforeHead, beforeTail,... After Try yourself
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1,Node* back1) {
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1) {  //another constructor bcz then we'll pass only data and next will be pointed to null
        data=data1;
        next=nullptr;
        back=NULL;
    }
};

Node* convertArr2DLL(vector<int> arr) {
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++) {
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* print(Node* head) {
    Node*temp=head;
    while(temp!=nullptr) {  
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* removeHead(Node* head) {
    if(head==NULL || head->next==NULL) return NULL;
    Node* prev=head;
    head=head->next;
    head->back=NULL;
    prev->next=NULL;
    delete prev;
    return head;
}

Node* removeTail(Node* head) {
    if(head==NULL || head->next==NULL) {
        return NULL;
    }
    Node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    Node* newTail=temp->back;
    newTail->next=NULL;
    temp->back=NULL;
    delete temp;
    return head;
}

Node* removeKth(Node* head, int k) {  //k can be from 1 to n only(n->size of DLL)
    if(head==NULL) return NULL;
    int c=0;
    Node* kNode=head;
    while(kNode!=NULL) {
        c++;
        if(c==k) break;
        kNode=kNode->next;
    }
    Node* prev=kNode->back;
    Node* front=kNode->next;
    if(prev==NULL && front==NULL) {
        return NULL;
    }
    else if(prev==NULL) {
        return removeHead(head);
    }
    else if(front==NULL) {
        return removeTail(head);
    }
    prev->next=front;
    front->back=prev;
    kNode->next=NULL;
    kNode->back=NULL;
    delete kNode;
    return head;
}

void removeVal(Node* temp) {
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL) {
        prev->next=NULL;
        temp->back=NULL;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=NULL;
    free(temp);
}

Node* insertBeforeHead(Node* head,int val) {
    Node* newHead=new Node(val,head,NULL);
    head->back=newHead;
    return newHead;
}

Node* insertBeforeTail(Node* head, int val) {
    if(head->next==NULL) {
        return insertBeforeHead(head,val);
    }
    Node* tail=head;
    while(tail->next!=NULL) {
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newNode=new Node(val,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}

Node* insertBeforeKth(Node* head,int k, int val) {
    if(k==1) {
        return insertBeforeHead(head,val);
    }
    Node* temp=head;
    int c=0;
    while(temp!=NULL) {
        c++;
        if(c==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode=new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}

void insertBeforeNode(Node* node, int val) {  //node cannot be head, asthen head will be changed
    Node* prev=node->back;
    Node* newNode=new Node(val,node, prev);
    prev->next=newNode;
    node->back=newNode;
}

int main() {
    vector<int> arr={12,5,8,7};

    // Node* head=convertArr2DLL(arr);
    // print(head);

    // Removing head
    // Node* head=convertArr2DLL(arr);
    // head=removeHead(head);
    // print(head);

    // // Removing tail
    // Node* head=convertArr2DLL(arr);
    // head=removeTail(head);
    // print(head);  

    // Removing kth node
    // Node* head=convertArr2DLL(arr);
    // head=removeKth(head,2);
    // print(head);

    // Removing a node value
    // Node* head=convertArr2DLL(arr);
    // removeVal(head->next->next);
    // print(head);

    // Inserting before head
    // Node* head=convertArr2DLL(arr);
    // head=insertBeforeHead(head,11);
    // print(head);

    // Inserting before tail
    // Node* head=convertArr2DLL(arr);
    // head=insertBeforeTail(head,11);
    // print(head);

    // Inserting before kth node
    // Node* head=convertArr2DLL(arr);
    // head=insertBeforeKth(head,3,10);
    // print(head);

    // Inserting before node
    Node* head=convertArr2DLL(arr);
    insertBeforeNode(head->next->next,100);
    print(head);
}