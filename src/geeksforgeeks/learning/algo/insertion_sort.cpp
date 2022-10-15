#include<bits/stdc++.h>

std::vector<int> insertion_sort(std::vector<int> v)
{
    int i, j, n = v.size();
    for(i=1;i<n;i++)
    {
        int key = v[i];
        j = i-1;
        while(j>=0 and key<v[j])
        {
            v[j+1] = v[j]; 
            j--;
        }
        v[j+1] = key;
    }
    return v;
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
    std::vector<int> sorted_vector = insertion_sort(v);
    std::cout<<"\nSorted array with insertion sort : ";
    for(i=0;i<sorted_vector.size();i++)
    {
        std::cout<<sorted_vector[i];
    }
    return 0;
}