#include<bits/stdc++.h>

int main()
{
    int r, c, i, j, e;
    std::cout<<"Enter the number of rows : ";
    std::cin>>r;
    std::cout<<"\nEnter the number of columns : ";
    std::cin>>c;
    std::vector<std::vector<int>> m(r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            std::cin>>e;
            m[i].push_back(e);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            std::cout<<m[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    return 0;
}