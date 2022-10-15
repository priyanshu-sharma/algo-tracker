#include<bits/stdc++.h>

int main()
{
    std::list<int> l;
    int n, i, e;
    std::list<int> l1 = {10, 20, 30, 40, 50};
    std::cout<<"Enter the size of the list : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        l.emplace_back(e);
    }
    std::list<int>::iterator it = l.begin();
    advance(it, 3);
    l.emplace(it, 100);
    l.emplace_front(0);

    std::cout<<"\nOutput of the list is : ";
    for(auto i=l.begin();i!=l.end();i++)
    {
        std::cout<<*i<<"\t";
    }

    l.sort();
    l.merge(l1);
    std::cout<<"\nOutput of the list is : ";
    for(auto i=l.begin();i!=l.end();i++)
    {
        std::cout<<*i<<"\t";
    }
    l.unique();
    std::cout<<"\nOutput of the list is : ";
    for(auto i=l.begin();i!=l.end();i++)
    {
        std::cout<<*i<<"\t";
    }
    return 0;
}