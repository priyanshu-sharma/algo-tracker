#include<bits/stdc++.h>

int main()
{
    int n, i;
    std::cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
    int element;
    std::cin>>element;
    for(i=0;i<n;i++)
    {
        if(array[i]==element)
        {
            printf("Element found on index - %d ", i);
        }
    }
    return 0;
}