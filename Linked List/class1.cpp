// Linked List
// Linked List with one element: That element is both head and tail  
// In insertion and deletion, we'll study: i)inserting and delteing head  ii)inserting and delteing from a particular position iii)inserting and delteing a particular value   iv) inserting and delteing tail
// Problems: Difference between NULL and nullptr. Difference between free and delete. Which one to use where

#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data=data1;
        next=next1;
    }
    // OR
    // Node(int data, Node* next) {  // Using the same name for parameter
    //     this->data = data;  // 'this->data' refers to the class member
    //     this->next = next;
    // }


    public:
    Node(int data1) {  //another constructor bcz then we'll pass only data and next will be pointed to null
        data=data1;
        next=nullptr;
    }
};

Node* convertArrToLL(vector<int> &arr) {  //converting array to LinkedList
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++) {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;  //or mover=mover.next
    }
    return head;
}

int lengthOfLL(Node* head) {   //Length of LinkedList
    int c=0;
    Node* temp=head;
    while(temp) {   //or while(temp!=null)
        temp=temp->next;
        c++;
    }
    return c;
}

void print(Node* head) {   //Printing LinkedList
    Node*temp=head;
    while(temp!=nullptr) {  //or while(temp)
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

bool search(Node* head,int val) {   //Search for a value
    Node* temp=head;
    while(temp) {
        if(temp->data==val) return true;
        temp=temp->next;
    }
    return false;
}

Node* removeHead(Node* head) {   //Removing head element
    if(head==NULL) return head;  //return NULL is also working
    Node* temp=head;
    head=head->next;
    delete temp;  //free(temp) is also working
    return head;
}

Node* removeTail(Node* head) {   //Removing tail
    if(head==NULL || head->next==NULL) return NULL;  //return head is also working
    Node* temp=head;
    while(temp->next->next!=NULL) {
        temp=temp->next;
    }
    delete temp->next;  //free(temp->next) is also working
    temp->next=nullptr;  //NULL is also working
    return head;
}

Node* removeKthElement(Node* head,int k) {   //Removing kth element(will work for removing head and tail as well)
    if(head==NULL) return head;
    if(k==1) {
        Node* temp=head;
        head=head->next;
        free(temp);   //delete(temp) is also working
        return head;
    }
    int c=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL) {
        c++;
        if(c==k) {
            prev->next=prev->next->next;
            free(temp);  //delete(temp) is also working
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head; 
}

Node* removeVal(Node* head,int val) {    //Removing a particular value
    if(head==NULL) return head;
    if(head->data==val) {
        Node* temp=head;
        head=head->next;
        free(temp);   
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL) {
        if(temp->data==val) {
            prev->next=prev->next->next;
            free(temp);  
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head; 
}

Node* insertHead(Node* head, int val) {  //Inserting head
    // Node* temp= new Node(val, head);   //using first constructor in node class. val will be data and next will be head
    // return temp;

    // OR
    return new Node(val,head);
}

Node* insertTail(Node* head, int val) {   //Inserting at tail(will work for inserting at head and tail as well)
if(head==NULL) return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

Node* insertKth(Node* head, int val, int k) {  //Inserting at kth position(k should be from 1 to n+1, n-> size of linked list)
    if(head==NULL) {
        if(k==1) return new Node(val);
        else return head;
    }
    if(k==1) {  //Inserting at head
        return new Node(val,head);
    }
    int c=0;
    Node* temp=head;
    while(temp!=NULL) {
        c++;
        if(c==k-1) {
            Node* x=new Node(val,temp->next);  // this will create a new node and this node next will be pointed to temp->next
            temp->next=x;   //now temp->next will be pointed to newly created node. Uppar wala line mein pehle naya node ke next mein temp ka next ko karna pada kyuki agar pehle temp-> next ko naya node kar dete toh phir naya node ka next kisko karte phir humlog ke pass jo pehle ka temp-> next tha uska track nhi rakh pate
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node* insertVal(Node* head, int el, int val) {  //Inserting a val before an element
        if(head==NULL) return NULL;
        if(head->data==el) {  
            return new Node(val,head);
        }
        Node* temp=head;
        while(temp->next!=NULL) {
            if(temp->next->data==el) {
                Node* x=new Node(val,temp->next);  
                temp->next=x;   
                break;
            }
            temp=temp->next;
        }
        return head;
}

int main() {
    vector<int> arr={2,5,8,7};

    // Node* y=new Node(arr[0],nullptr);  //Use this only(using new keyword)
    // cout<<y<<endl;
    // cout<<y->data<<endl;
    // cout<<y->next<<endl;

    // Node z=Node(arr[0],nullptr);   //Avoid this(Prefer above one)
    // cout<<z.data<<endl;
    // cout<<z.next<<endl;
   
    // Traversal
    // Node* head=convertArrToLL(arr);
    // cout<<head->data<<endl;
    // Node*temp=head;
    // while(temp!=nullptr) {  //or while(temp)
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }

    // Length of LL
    // Node* head=convertArrToLL(arr);
    // cout<<lengthOfLL(head)<<endl;

    // Search an element
    // Node* head=convertArrToLL(arr);
    // cout<<search(head,5);

    // Deleting head
    // Node* head=convertArrToLL(arr);
    // head=removeHead(head);
    // print(head);

    // Deleting tail
    // Node* head=convertArrToLL(arr);
    // head=removeTail(head);
    // print(head);

    // Deleting kth element
    // Node* head=convertArrToLL(arr);
    // head=removeKthElement(head,2);
    // print(head);

    // Deleting a particular value
    // Node* head=convertArrToLL(arr);
    // head=removeVal(head,5);
    // print(head);

    // Inserting head
    // Node* head=convertArrToLL(arr);
    // head=insertHead(head,100);
    // print(head);

    // Inserting at tail
    // Node* head=convertArrToLL(arr);
    // head=insertTail(head,100);
    // print(head);

    // Inserting at kth position
    // Node* head=convertArrToLL(arr);
    // head=insertKth(head,100,4);
    // print(head);

    // Inserting a val before an element
    Node* head=convertArrToLL(arr);
    head=insertVal(head,5,100);
    print(head);
}