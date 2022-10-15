#include<bits/stdc++.h>

int linear_recursive_search(std::vector<int> v, int n, int searched_element)
{
    if(n<1)
    {
        return -1;
    }
    else if(v[n-1]==searched_element)
    {
        return n-1;
    }
    else
    {
        int searched_index = linear_recursive_search(v, n-1, searched_element);
        return searched_index; 
    }
}

int main()
{
    std::vector<int> v;
    int n, i, e;
    std::cout<<"\nEnter the number of elements to be inserted\n";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    int searched_element, searched_index;
    std::cout<<"\nEnter the element to be searched : \n";
    std::cin>> searched_element;
    searched_index = linear_recursive_search(v, n, searched_element);
    std::cout<<"\nSearched index is : "<<searched_index;
    return 0;
}