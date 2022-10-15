#include<bits/stdc++.h>

int main()
{
    std::multimap<int, int> mm;
    int n, k, v, i;
    std::cout<<"Enter the number of Key Values to be inserted : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>k>>v;
        mm.insert(std::pair<int,int>(k, v));
    }

    std::multimap<int,int>::iterator it;

    int element_to_be_deleted;
    std::cout<<"\nEnter the element to be erased : ";
    std::cin>>element_to_be_deleted;

    for(it=mm.find(element_to_be_deleted);it!=mm.end();it++)
    {
        if(it->first==element_to_be_deleted)
        {
            mm.erase(it);
        }
    }

    
    std::cout<<"\nMultimap : ";
    for(it=mm.begin();it!=mm.end();it++)
    {
        std::cout<<it->first<<"\t : \t"<<it->second<<"\n";
    }
    return 0;
}