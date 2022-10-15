#include<bits/stdc++.h>

std::vector<int> selection_sort(std::vector<int> unsorted_vector)
{
    int i , j, n = unsorted_vector.size();
    for(i=0;i<n-1;i++)
    {
        int min_index, min = INT_MAX;
        for(j=i;j<n;j++)
        {
            if(unsorted_vector[j]<min)
            {
                min = unsorted_vector[j];
                min_index = j;
            }
        }
        std::cout<<"\nSwapping : "<<unsorted_vector[i]<<" with min : "<<min;
        int temp = unsorted_vector[i];
        unsorted_vector[i] = min;
        unsorted_vector[min_index] = temp;
    }
    return unsorted_vector;
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
    std::vector<int> sorted_vector = selection_sort(v);
    std::cout<<"\n Sorted Vector : ";
    for(i=0;i<sorted_vector.size();i++)
    {
        std::cout<<sorted_vector[i];
    }
    return 0;
}