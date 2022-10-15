#include<bits/stdc++.h>
int main()
{
    std::cout<<"Enter a number\n";
    int input;
    std::cin>>input;
    switch(input)
    {
        case 1:
        case 2:
            std::cout<<"Entered number is either 1 or 2\n";
            break;
        case 3:
            std::cout<<"Entered number is 3\n";
            break;
        default:
            std::cout<<"Entered number is greater than 3\n";
            break;
    }
    printf("Input number is %d \n", input);
    return 0;
}