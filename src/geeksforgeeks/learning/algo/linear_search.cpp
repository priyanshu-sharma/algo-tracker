#include<bits/stdc++.h>

int linear_search(std::vector<int> v, int n, int searched_element)
{
    int i;
    if(n<1)
    {
        return -1;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(v[i]==searched_element){
                return i;
            }
        }
        return -1;
    }
}

int main()
{
    std::vector<int> v;
    int i, n , e, searched_element;
    std::cout<<"\nEnter the number of elements to be inserted\n";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    std::cout<<"\nEnter the element to be linearly searched\n";
    std::cin>>searched_element;
    int searched_index = linear_search(v, n, searched_element);
    std::cout<<"\nElement is at the this index : "<<searched_index;
    return 0;
}