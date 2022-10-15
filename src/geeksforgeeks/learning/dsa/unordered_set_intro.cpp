#include<bits/stdc++.h>

int main()
{
    std::unordered_set<int> us;
    int n, i, e;
    std::cout<<"Enter the size of the unordered set : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        us.emplace(e);
    }

    std::unordered_set<int>:: iterator it;
    std::cout<<"\nUnorder set : ";
    for(it=us.begin();it!=us.end();it++)
    {
        std::cout<<*it<<"\t";
    }
}