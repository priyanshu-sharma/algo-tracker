#include<bits/stdc++.h>

class Node
{
    public:
        int data;
        Node* next;
};

void delete_ll(Node* tra)
{
    Node* current = tra;
    Node* futu = tra;
    while(current!=NULL)
    {
        futu = current->next;
        std::cout<<"Deleted item : "<<current->data<<futu->data;
        free(current);
        current = futu;
    }
    tra = NULL;
    std::cout<<"This is done";
}

void print_linked_list(Node* tra)
{
    std::cout<<"Output of the linked list : ";
    while(tra!=NULL)
    {
        std::cout<<tra->data<<"\n";
        tra = tra -> next;
    }
}

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
        new_node->data = e;
        new_node->next = NULL;
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
    Node* tra = head;
    std::cout<<"\n"<<tra->next->data<<"\n";
    delete_ll(tra->next);
    print_linked_list(head);
    return 0;
}