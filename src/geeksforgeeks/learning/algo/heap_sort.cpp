#include<bits/stdc++.h>

void heapify(std::vector<int> unsorted_array, int size, int index)
{
    int temp, largest_index = index, left_index = (2*index)+1, right_index = (2*index) + 2;
    if(left_index<size && unsorted_array[left_index] > unsorted_array[largest_index])
    {
        largest_index = left_index;
    }

    if(right_index<size && unsorted_array[right_index] > unsorted_array[largest_index])
    {
        largest_index = right_index;
    }

    if(largest_index!=index)
    {
        std::cout<<"\nHeapify :: Swapping this : "<<unsorted_array[largest_index]<<" with : "<<unsorted_array[index];
        temp = unsorted_array[largest_index];
        unsorted_array[largest_index] = unsorted_array[index];
        unsorted_array[index] = temp;
        heapify(unsorted_array, size, largest_index);
    }

}

std::vector<int> heap_sort(std::vector<int> unsorted_array)
{
    int i, temp, n = unsorted_array.size();
    for(i=n/2-1;i>=0;i--)
    {
        heapify(unsorted_array, n, i);
    }
    std::cout<<"\nUnsorted Array after heapify : ";
    for(i=0;i<unsorted_array.size();i++)
    {
        std::cout<<unsorted_array[i];
    }
    for(i=n-1;i>=0;i--)
    {
        std::cout<<"\nHeapSort :: Swapping this : "<<unsorted_array[0]<<" with : "<<unsorted_array[i];
        temp = unsorted_array[0];
        unsorted_array[0] = unsorted_array[i];
        unsorted_array[i] = temp;
        heapify(unsorted_array, i, 0);
    }
    return unsorted_array;
}


int main()
{
    std::vector<int> v;
    int n , i , e;
    std::cout<<"Enter the size of array : ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v.push_back(e);
    }
    std::cout<<"\nSorted array : ";
    std::vector<int> sorted_array = heap_sort(v);
    for(i=0;i<sorted_array.size();i++)
    {
        std::cout<<sorted_array[i];
    }
    return 0;
}