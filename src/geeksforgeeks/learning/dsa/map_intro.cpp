#include<bits/stdc++.h>

int main()
{
    std::map<int, int> m;
    int n, k, v, i;
    std::cout<<"Enter the number of key values to be inserted : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>k>>v;
        m.insert({k, v});
    }

    std::map<int, int>::iterator it;
    std::cout<<"\nMap : ";
    for(it=m.begin();it!=m.end();it++)
    {
        std::cout<<it->first<<"\t : \t"<<it->second<<"\n";
    }
}