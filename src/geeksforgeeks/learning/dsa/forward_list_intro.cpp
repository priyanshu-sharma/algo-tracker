#include<bits/stdc++.h>

int main()
{
    std::forward_list<int> fl;
    int n, i, e;
    std::cout<<"Enter the size of the forward list : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        fl.emplace_front(e);
    }

    std::forward_list<int>::iterator it;
    fl.push_front(100);
    auto j = fl.before_begin();
    fl.insert_after(j, 200);
    fl.emplace_after(fl.begin(), 300);
    std::cout<<"\nOutput of the forward list is : ";
    for(it=fl.begin();it!=fl.end();it++)
    {
        std::cout<<*it<<"\t";
    }
    fl.pop_front();
    fl.remove(300);
    std::forward_list<int> f2 = {-2, -1, -3, -4};
    fl.splice_after(fl.begin(), f2);
    std::cout<<"\nOutput of the forward list is : ";
    for(it=fl.begin();it!=fl.end();it++)
    {
        std::cout<<*it<<"\t";
    }
    return 0;
}