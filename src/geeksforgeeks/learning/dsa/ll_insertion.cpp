#include<bits/stdc++.h>

class Node
{
    public:
        int data;
        Node* next;
};

int main()
{
    int n , i , e;
    std::cout<<"Enter the size of linked list : ";
    std::cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        Node* new_node = new Node();
        new_node -> data = e;
        new_node -> next = NULL;
        if (head==NULL)
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

    Node* tranversal = head;
    std::cout<<"\nElements in nodes are : ";
    while(tranversal!=NULL)
    {
        std::cout<<tranversal->data<<"\n";
        tranversal = tranversal -> next;
    }

    int end_element, mid_element;
    std::cout<<"\nEnter the element to be inserted in the end : ";
    std::cin>>end_element;
    Node* final = head;
    std::cout<<"\nEnd Element is going to be inserted at : ";
    while(final->next!=NULL)
    {
        std::cout<<final->data<<"\n";
        final = final -> next;
    }
    Node* new_end_node = new Node();
    new_end_node->data = end_element;
    new_end_node->next = NULL;
    final -> next = new_end_node;

    Node* transver = head;
    std::cout<<"\nElements in nodes are : ";
    while(transver!=NULL)
    {
        std::cout<<transver->data<<"\n";
        transver = transver -> next;
    }

    std::cout<<"\nEnter the element to be inserted [mid element] : ";
    std::cin>>mid_element;
    Node* tversal = head;
    std::cout<<"tversal and mid element comparison : "<<tversal->data<<"\n"<<mid_element<<"\n";

    while(tversal->next->data < mid_element)
    {
        std::cout<<"\ntversal data is : "<<tversal->data;
        tversal = tversal -> next;
    }
    std::cout<<"\ntversal is at -> "<<tversal->data<<"\n";
    Node* new_mid_node = new Node();
    new_mid_node->data = mid_element;
    new_mid_node->next = tversal -> next;
    tversal -> next = new_mid_node;

    Node* transver_one = head;
    std::cout<<"\nElements in nodes are : ";
    while(transver_one!=NULL)
    {
        std::cout<<transver_one->data<<"\n";
        transver_one = transver_one -> next;
    }
    return 0;
}