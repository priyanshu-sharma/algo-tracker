#include<bits/stdc++.h>

int linear_search(std::vector<int> v, int l, int r, int search_element)
{
    int i;
    for(i=l;i<r+1;i++)
    {
        if(v[i]==search_element)
        {
            return i;
        }
    }
    return -1;
}

int jump_search(std::vector<int> v, int n, int block_size, int search_element)
{
    int i;
    for(i=0;i<=n;i+=block_size)
    {
        std::cout<<"\n We are at outer i : "<<i;
        if(v[i]<=search_element && v[i+block_size]>= search_element)
        {
            std::cout<<"\n We are at i : "<<i;
            return linear_search(v, i, i+block_size, search_element);
        }
    }
    return -1;
}

int main()
{
    std::vector<int> v;
    int n, i, e;
    std::cout<<"Enter the size of array : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    int search_element, searched_index, block_size;
    std::cout<<"\nEnter the element to be searched : ";
    std::cin>>search_element;
    block_size = sqrt(n);
    std::cout<<"\n Block Size : "<<block_size;
    searched_index = jump_search(v, n, block_size, search_element);
    std::cout<<"\n Index of the searched element is : "<<searched_index;
    return 0;
}