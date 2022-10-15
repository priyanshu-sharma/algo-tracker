#include<bits/stdc++.h>

class Node
{
    public:
        int data;
        Node* next;
};

int find_length(Node* start)
{
    int count = 0;
    while(start!=NULL)
    {
        count++;
        start = start -> next;
    }
    return count;
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

    Node* start = head;
    int length = find_length(start);
    std::cout<<"\nLenght of ll is : "<<length;
    std::cout<<"\nElements of ll are : ";
    Node* tra = head;
    while(tra!=NULL)
    {
        std::cout<<tra->data<<"\n";
        tra = tra -> next;
    }
    return 0;
}