#include<bits/stdc++.h>

int main()
{
    std::deque<int> d;
    int n, i, e;
    std::cout<<"Enter the size of deque : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        d.emplace_back(e);
    }

    d.emplace_front(0);
    std::cout<<d.empty()<<"\t"<<d.size()<<"\n";
    std::cout<<d.front()<<"\t"<<d.back()<<"\n";
    std::cout<<"\nOutput of the deque is : ";
    std::deque<int>::iterator it;
    std::cout<<*d.begin()<<"\n";
    d.erase(d.begin()+3, d.end());
    for(it=d.begin();it!=d.end();it++)
    {
        std::cout<<*it;
    }
    return 0;
}