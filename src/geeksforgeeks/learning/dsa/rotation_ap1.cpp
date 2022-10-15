#include<bits/stdc++.h>

void rotate_array(int input_array[], int n, int rotation_number)
{
    int temp[n], j=0, i;
    int actual_rotation_number = rotation_number % n;
    std::cout<<"\nActual Rotation Number : "<<actual_rotation_number<<"\n";
    for(i=actual_rotation_number;i<n;i++)
    {
        temp[j] = input_array[i];
        j++;
    }
    for(i=0;i<actual_rotation_number;i++)
    {
        temp[j] = input_array[i];
        j++;
    }
    std::cout<<"\nRotated Array : \n";
    for(j=0;j<n;j++)
    {
        std::cout<<temp[j]<<"\n";
    }
}

int main()
{
    int n, i;
    std::cout<<"Enter the size of array";
    std::cin>>n;
    int input_array[n];
    std::cout<<"\nEnter the input array\n";
    for(i=0;i<n;i++)
    {
        std::cin>>input_array[i];
    }
    std::cout<<"\nEnter the number of times you want to rotate the input array\n";
    int rotation_number;
    std::cin>>rotation_number;
    rotate_array(input_array, n, rotation_number);
    return 0;
}