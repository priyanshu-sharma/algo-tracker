#include<bits/stdc++.h>

int main()
{
    std::stack<int> s;
    int n, i , e;
    std::cout<<"Enter the size of the stack : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        s.emplace(e);
    }

    std::stack<int> s1 = {10, 20, 30};
    s1.swap(s);
    std::cout<<"\nOutput of the stack is : ";
    while(!s.empty())
    {
        std::cout<<s.top()<<"\t";
        s.pop();
    }
    return 0;
}