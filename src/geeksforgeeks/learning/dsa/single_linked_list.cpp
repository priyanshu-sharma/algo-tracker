#include<bits/stdc++.h>

class Node{
    public:
        int data;
        Node* next;
};


int main()
{
    int n , i , e;
    std::cout<<"\n Enter the size of linked list : ";
    std::cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        Node *new_node = new Node();
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

    Node* transversal = head;
    std::cout<<"\n Elements of linked lists are : ";
    while(transversal!=NULL)
    {
        std::cout<<transversal-> data<<"\n";
        transversal = transversal -> next;
    }
    return 0;

}