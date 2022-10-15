#include<bits/stdc++.h>

int main()
{
    std::unordered_map<int,int> um;
    int n, k, v, i;
    std::cout<<"Enter the number of key pairs you want to add : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>k>>v;
        um.emplace(k,v);
    }     

    std::unordered_map<int, int>::iterator it;
    for(it=um.begin();it!=um.end();it++)
    {
        std::cout<<it->first<<"\t : \t"<<it->second<<"\n";
    }

}