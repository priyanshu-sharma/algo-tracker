#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int> v_two;
    int n, i, e;
    std::cout<<"\nEnter the number of elements to be inserted\n";
    std::cin>>n;
    std::cout<<"\nEnter the elements of input array\n";
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v_two.push_back(e);
    }
    int rotation_number, arn;
    std::cout<<"\nEnter the number of times array to be rotated \n";
    std::cin>>rotation_number;
    arn = rotation_number % n;
    reverse(v_two.begin(), v_two.begin()+arn);
    reverse(v_two.begin()+arn, v_two.end());
    reverse(v_two.begin(), v_two.end());
    for(i=0;i<n;i++)
    {
        std::cout<<v_two[i]<<"\n";
    }
    return 0;
}   