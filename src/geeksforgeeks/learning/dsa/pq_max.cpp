#include<bits/stdc++.h>

int main()
{
    std::priority_queue<int> pq;
    int n, i, e;
    std::cout<<"Enter the size of priority queue : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        pq.emplace(e);
    }

    std::cout<<"\nOutput of the priority queue is : ";
    while(!pq.empty())
    {
        std::cout<<pq.top()<<"\t";
        pq.pop();
    }
    return 0;
}