#include<bits/stdc++.h>

int search_pivot_element(std::vector<int> v, int l, int r)
{
    if(l>r)
    {
        std::cout<<"\n l>r"<<l<<r;
        return -1;
    }

    if(l==r)
    {
        std::cout<<"\n l==r"<<l<<r;
        return l;
    }
    int mid = (l+r)/2;
    std::cout<<"\n Mid Element index :: "<<mid;
    if(mid > l && v[mid] < v[mid-1])
    {
        std::cout<<"\n v[mid] < v[mid-1]";
        return mid-1;
    }

    if(mid < r && v[mid] > v[mid+1])
    {
        std::cout<<"\n v[mid] > v[mid+1]";
        return mid;
    }

    if(v[l] >= v[mid])
    {
        std::cout<<"\n v[l] >= v[mid]";
        return search_pivot_element(v, l, mid-1);
    }
    std::cout<<"\n v[r] > v[mid]";
    return search_pivot_element(v, mid+1, r);
}

int main()
{
    std::vector<int> v;
    int n, i , e;
    std::cout<<"\n Enter the size of array : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    int pivot_index = search_pivot_element(v, 0, n-1);
    std::cout<<"\nPivot index is at : "<<pivot_index;
    return 0;
}