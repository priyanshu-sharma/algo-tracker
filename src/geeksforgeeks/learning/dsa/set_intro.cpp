#include<bits/stdc++.h>

int main()
{
    std::set<int> s;
    int n, e, i;
    std::cout<<"Enter the size of the array : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        s.emplace(e);
    }

    std::set<int>::iterator it;
    std::cout<<"\nOutput set is : ";
    for(it=s.begin();it!=s.end();it++)
    {
        std::cout<<*it<<"\t";
    }
}