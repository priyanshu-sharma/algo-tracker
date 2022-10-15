#include<bits/stdc++.h>

int main()
{
    std::vector<int> v;
    int n, i, e;
    std::cout<<"Enter the size of vector : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    std::cout<<"\nDifference between first and last element is - "<<abs(v.front() - v.back());
    std::cout<<"\n"<<v.empty()<<"\n";
    return 0;
}