#include<bits/stdc++.h>

class Node
{
    public:
        int data;
        Node* next;
};

int main()
{
    int n, i , e;
    Node* head = NULL;
    Node* tail = NULL;
    std::cout<<"Enter the size of linked list : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        Node* new_node = new Node();
        new_node -> data = e;
        new_node -> next = NULL;
        if(head==NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail -> next = new_node;
            tail = tail -> next;
        }
    }

    int deleted_element;
    std::cout<<"\nEnter the element to be deleted : ";
    std::cin>>deleted_element;
    Node* prev = NULL;
    Node *del_t = head;
    while(del_t->data!=deleted_element)
    {
        prev = del_t;
        del_t = del_t -> next;
    }
    prev -> next = del_t -> next;
    free(del_t);

    std::cout<<"\n Elements of linked list are : ";
    Node* transversal = head;
    while(transversal!=NULL)
    {
        std::cout<<transversal->data<<"\n";
        transversal = transversal -> next;
    }
    return 0;
}