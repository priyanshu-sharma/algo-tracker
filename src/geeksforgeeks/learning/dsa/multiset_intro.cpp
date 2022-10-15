#include<bits/stdc++.h>

int main()
{
    std::multiset<int> ms;
    int n, i, e;
    std::cout<<"Enter the size of the multiset : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        ms.emplace(e);
    }

    std::multiset<int>::iterator it;
    std::cout<<"\nMultiset Output : ";
    for(it=ms.begin();it!=ms.end();it++)
    {
        std::cout<<*it<<"\t";
    }
}