#include<bits/stdc++.h>

int main()
{
    std::queue<int> q;
    int n, i, e;
    std::cout<<"Enter the size of the queue : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        q.emplace(e);
    }

    std::cout<<q.size()<<"\t"<<q.back();
    std::cout<<"\nOutput of the queue is : ";
    while(!q.empty())
    {
        std::cout<<q.front()<<"\t";
        q.pop();
    }
    return 0;
}