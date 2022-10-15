#include<bits/stdc++.h>

bool prime(const int& value)
{
    int i;
    for(i=2;i<value;i++)
    {
        if(value%i==0)
        {
            return false;
        }
    }
    if(value==i)
    {
        return true;
    }
}

int main()
{
    std::list<int> l;
    int n, i, e;
    std::cout<<"Enter the size of the list : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        l.emplace_back(e);
    }
    l.remove_if(prime);
    std::cout<<"\n Here is the output list : ";
    std::list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        std::cout<<*it<<"\t";
    }
    return 0;
}