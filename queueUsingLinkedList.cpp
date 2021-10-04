#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(){
            data=-1;
            next=NULL;
        }
        Node(int val){
            data=val;
            next=NULL;
        }
};

class Queue{
    public:
        Node *head=NULL;

        bool isEmpty(){
            if(head==NULL){
                return true;
            }
            return false;
        }

        bool isFull(){
            Node *ptr=new Node;
            if(ptr==NULL){
                return true;
            }
            delete ptr;
            return false;
        }

        void enqueue(int val){
            if(isFull()){
                cout<<"\n\nQueue Overflow." <<endl;
            }
            else{
                if(isEmpty()){
                    head=new Node(val);
                }
                else{
                    Node *temp, *ptr=head;
                    while(ptr->next!=NULL){
                        ptr=ptr->next;
                    }
                    temp=new Node(val);
                    ptr->next=temp;
                }
                cout<<"\n\nNode with value " <<val <<" is Enqueued into the Queue." <<endl;
            }
        }

        int dequeue(){
            if(isEmpty()){
                cout<<"\n\nQueue Underflow." <<endl;
                return -1;
            }
            else{
                int val=head->data;
                Node *ptr=head->next;
                delete head;
                head=ptr;
                cout<<"\n\nNode with value " <<val <<" is Dequeued from the Queue." <<endl;
                return val;
            }
        }

        int count(){
            if(isEmpty()){
                cout<<"\n\nQueue Underflow." <<endl;
                return -1;
            }
            else{
                Node *ptr=head;
                int counter=0;
                while(ptr!=NULL){
                    counter++;
                    ptr=ptr->next;
                }
                cout<<"\n\nThere are " <<counter <<" Node in Queue." <<endl;
                return counter;
            }            
        }

        void display(){
            if(isEmpty()){
                cout<<"\n\nQueue Underflow." <<endl;
            }
            else{
                Node *ptr=head;
                cout<<"\n\nDisplaying all the elements of the Queue: " <<endl;
                while(ptr!=NULL){
                    cout<<"\n\t>> " <<ptr->data;
                    ptr=ptr->next;
                }
            }
        }
        
};

int main(){
    system("cls");
    cout<<"********** Welcome to Queue Operation with Linked List **************" <<endl;
    int op;
    Queue ds;
    cout<<"\n\nSelect an option to continue: " <<endl;

    while(1){
        cout<<"\n\n\n\nPress '0' to Exit()" <<endl
            <<"\nPress '1' to check if Queue is Empty" <<endl
            <<"\nPress '2' to check if Queue is Full" <<endl
            <<"\nPress '3' to Enqueue an element" <<endl
            <<"\nPress '4' to Dequeue an element" <<endl
            <<"\nPress '5' to Display all the elements" <<endl
            <<"\nPress '6' to get Count of all the elements" <<endl
            <<"\n\n\t\t>> ";
        cin>>op;

        switch(op){
            case 0:
                cout<<"\n\nHope to see you again!" <<endl;
                exit(0);
                break;

            case 1:
                if(ds.isEmpty()){
                    cout<<"\n\nQueue is Empty \nYou reached the end of the World." <<endl;
                }
                else{
                    cout<<"\n\nQueue has some space Occupied." <<endl;
                }
                break;

            case 2:
                if(ds.isFull()){
                    cout<<"\n\nQueue is Completely Full" <<endl;
                }
                else{
                    cout<<"\n\nQueue has some space Vacant." <<endl;
                }
                break;

            case 3:
                cout<<"\nEnter the value to be Pushed into the Queue: ";
                cin>>op;
                ds.enqueue(op);
                break;

            case 4:
                ds.dequeue();
                break;

            case 5:
                ds.display();
                break;

            case 6:
                ds.count();
                break;
                
            default:
                cout<<"\n\nPlease enter a valid option 0-5" <<endl;
        }
    }

    return 0;
}
