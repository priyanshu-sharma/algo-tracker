#include<bits/stdc++.h>

int main()
{
    std::vector<int> v;
    int n, i, e;
    std::cout<<"Enter the size of vector : ";
    std::cin>>n;
    std::cout<<"\nEnter the element of the vector";
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    std::cout<<"\nOutput of v.begin and v.end : \n";
    for(auto j=v.begin();j!=v.end();j++)
    {
        std::cout<<*j;
    }
    std::cout<<"\nOutput of v.rbegin and v.rend : \n";
    for(auto j=v.rbegin();j!=v.rend();j++)
    {
        std::cout<<*j;
    }
    std::cout<<"\nOutput of v.cbegin and v.cend : \n";
    for(auto j=v.cbegin();j!=v.cend();j++)
    {
        std::cout<<*j;
    }
    std::cout<<"\nOutput of v.crbegin and v.crend : \n";
    for(auto j=v.crbegin();j!=v.crend();j++)
    {
        std::cout<<*j;
    }
    std::cout<<"\nOutput of : \n";
    std::cout<<v.size()<<"\t"<<v.max_size()<<"\t"<<v.capacity()<<"\n";
    v.resize(n-1);
    std::cout<<"\nOutput of : \n";
    std::cout<<v.size()<<"\t"<<v.empty();
    v.shrink_to_fit();
    std::cout<<"\nOutput of : \n";
    std::cout<<v.size()<<"\t"<<v.empty();
    std::cout<<"\nOutput of v.begin and v.end : \n";
    for(auto j=v.begin();j!=v.end();j++)
    {
        std::cout<<*j;
    }
    std::cout<<"\nOutput of at reference front back and data operations : \n";
    std::cout<<v[2]<<"\t"<<v.at(2)<<"\t"<<v.front()<<"\t"<<v.back()<<"\t"<<*v.data();
    v.assign(5, 1);
    v.pop_back();
    v.insert(v.begin(),5);
    std::cout<<"\nOutput of v.begin and v.end : \n";
    for(auto j=v.begin();j!=v.end();j++)
    {
        std::cout<<*j;
    }
    v.erase(v.end() - 1 );
    std::cout<<"\nOutput of v.begin and v.end : \n";
    for(auto j=v.begin();j!=v.end();j++)
    {
        std::cout<<*j;
    }
    v.emplace_back(100);
    std::cout<<"\nOutput of v.begin and v.end : \n";
    for(auto j=v.begin();j!=v.end();j++)
    {
        std::cout<<*j;
    }
    std::vector<int> v2;
    v2.assign(4, 2);
    v.swap(v2);
    std::cout<<"\nOutput of v.begin and v.end : \n";
    for(auto j=v.begin();j!=v.end();j++)
    {
        std::cout<<*j;
    }
    std::cout<<"\nOutput of v.begin and v.end : \n";
    for(auto j=v2.begin();j!=v2.end();j++)
    {
        std::cout<<*j;
    }
    return 0;
}