#include<bits/stdc++.h>

int binary_search_recursive(std::vector<int> v, int l , int r, int searched_element)
{
    if(l<=r)
    {
        int mid = l + (r - l)/2;
        if(v[mid]==searched_element)
        {
            return mid;
        }
        else if (v[mid]> searched_element)
        {
            return binary_search_recursive(v, 0, mid-1, searched_element);
        }
        else
        {
            return binary_search_recursive(v, mid+1, r, searched_element);
        }
    }
    return -1;
}

int main()
{
    std::vector<int> v;
    int n, i, e;
    std::cout<<"\nEnter the number of elements to be inserted : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    int searched_element, searched_index;
    std::cout<<"\nEnter the elements to searched : ";
    std::cin>>searched_element;
    searched_index = binary_search_recursive(v, 0, n-1, searched_element);
    std::cout<<"\nSearched Element is at : "<<searched_index;
    return 0;
}