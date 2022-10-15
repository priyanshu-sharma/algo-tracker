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
    std::cout<<"Enter the size of linked list : ";
    std::cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    std::cout<<"\nEnter the elements of ll : ";
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

    std::cout<<"\nEnter the index of the element to be deleted : ";
    int index;
    std::cin>>index;
    Node* prev = head;
    Node* pres = head;
    if(index==0)
    {
        std::cout<<"Deleting the 0 index";
        head = pres -> next;
        free(pres);
    }
    else if(index==n-1)
    {
        std::cout<<"Deleting the n-1 index";
        while(pres->next!=NULL)
        {
            prev = pres;
            pres = pres -> next;
        }
        prev -> next = NULL;
        tail = prev;
        free(pres);
    }
    else
    {
        std::cout<<"Deleting the other index";
        for(i=0;i<index;i++)
        {
            prev = pres;
            pres = pres -> next;
        }
        prev -> next = pres -> next;
        free(pres);
    }

    Node* tra = head;
    std::cout<<"Elements of ll are : ";
    while(tra!=NULL)
    {
        std::cout<<tra->data<<"\n";
        tra = tra -> next;
    }
    return 0;
}