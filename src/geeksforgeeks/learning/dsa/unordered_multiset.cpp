#include<bits/stdc++.h>

int main()
{
    std::unordered_multiset<int> ums;
    int n, i, e;
    std::cout<<"Enter the size of Unordered multiset : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        ums.emplace(e);
    }

    std::unordered_multiset<int>::iterator it;
    std::cout<<"\nUnorder Multiset : ";
    for(it=ums.begin();it!=ums.end();it++)
    {
        std::cout<<*it<<"\t";
    }
}