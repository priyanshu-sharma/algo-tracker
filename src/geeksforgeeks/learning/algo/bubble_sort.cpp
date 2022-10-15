#include<bits/stdc++.h>

void bubble_sort(int unsorted_array[], int size_of_array)
{
    int i, j, swap;
    for(i=0;i<size_of_array;i++)
    {
        for(j=i;j<size_of_array;j++)
        {
            if(unsorted_array[i]>unsorted_array[j])
            {
                swap = unsorted_array[i];
                unsorted_array[i] = unsorted_array[j];
                unsorted_array[j] = swap;
            }
        }
    }
    for(i=0;i<size_of_array;i++)
    {
        std::cout<<unsorted_array[i]<<" ";
    }
    return;
}

int main()
{
    int number_of_elements, i;
    std::cin>>number_of_elements;
    int unsorted_array[number_of_elements];
    for(i=0;i<number_of_elements;i++)
    {
        std::cin>>unsorted_array[i];
    }
    bubble_sort(unsorted_array, number_of_elements);
    return 0;
}