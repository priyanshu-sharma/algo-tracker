#include<bits/stdc++.h>
int main()
{
    std::cout<<"Enter a number: ";
    int n;
    std::cin>>n;
    int& refer = n;
    std::cout<<"Input number is: "<<refer<<"\n";
    int input_array[n];
    int i;
    for(i=0;i<refer;i++)
    {
        std::cin>>input_array[i];
    }
    int (&refer_to_ia)[n] = input_array;
    std::cout<<"Output of the referenced array";
    for(int elements:refer_to_ia)
    {
        std::cout<<elements;
    }
    return 0;
}