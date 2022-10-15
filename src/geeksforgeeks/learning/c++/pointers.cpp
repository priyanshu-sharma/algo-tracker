#include<bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;
    int *pointer_to_n;
    pointer_to_n = &n;
    std::cout<<&n;
    std::cout<<"\n"<<pointer_to_n;
    std::cout<<"\n"<<*pointer_to_n;
    std::cout<<"\n"<<*pointer_to_n++;
    std::cout<<"\n"<<*pointer_to_n--;
    std::cout<<"\n"<<++*pointer_to_n;
    std::cout<<"\n"<<--*pointer_to_n;
    return 0;
}