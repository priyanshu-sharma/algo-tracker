#include<bits/stdc++.h>

class Node
{
    public:
        int data;
        Node* next;
};

int main()
{
    int n, i, e;
    std::cout<<"Enter the size of ll : ";
    std::cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        Node* new_node = new Node();
        new_node -> data = e;
        new_node -> next = NULL;

        if(head == NULL)
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

    std::cout<<"\n Deleting Elements from begining : \n";
    Node* del_t = head;
    head = del_t -> next;
    free(del_t);

    std::cout<<"\nDeleting element from end\n";
    Node* end_del_t = head;
    Node* prev = NULL;
    while(end_del_t->next!=NULL)
    {
        prev = end_del_t;
        end_del_t = end_del_t -> next;
    }
    prev -> next = NULL;
    tail = prev;
    free(end_del_t);

    std::cout<<"\nOutput linked list is : ";
    Node* t = head;
    while(t!=NULL)
    {
        std::cout<<t->data<<"\n";
        t = t->next;
    }
    return 0;
}