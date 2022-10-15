#include<bits/stdc++.h>

int find_min(int a[], int n)
{
    int min = a[0], i;
    std::cout<<"\nIn Function call\n";
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    std::cout<<min;
    return min;
}

int main()
{
    int n, i;
    std::cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"\nElements in input array are\n";
    for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<"\n";
    }
    int min = find_min(a, n);
    printf("Minimum value in array is %d\n", min);
    return 0;
}