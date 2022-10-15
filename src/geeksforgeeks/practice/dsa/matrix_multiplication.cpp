#include<bits/stdc++.h>

int main()
{
    int r1, r2, c1, c2, i, j, k;
    std::cout<<"Enter the rows for 1st matrics : ";
    std::cin>>r1;
    std::cout<<"\nEnter the columns for 1st matrics : ";
    std::cin>>c1;
    std::cout<<"\nEnter the rows for 2nd matrics : ";
    std::cin>>r2;
    std::cout<<"\nEnter the columns for 2nd matrics : ";
    std::cin>>c2;

    if(c1!=r2)
    {
        std::cout<<"\nNo matrics multiplication operation can be performed";
        return 0;
    }

    int a[r1][c1], b[r2][c2];

    std::cout<<"\nEnter the 1st matrics : ";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            std::cin>>a[i][j];
        }
    }

    std::cout<<"\nEnter the 2nd matrics : ";
    for(j=0;j<r2;j++)
    {
        for(k=0;k<c2;k++)
        {
            std::cin>>b[j][k];
        }
    }

    std::cout<<"\nOutput of the 1st matrics : \n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            std::cout<<a[i][j]<<"\t";
        }
        std::cout<<"\n";
    }

    std::cout<<"\nOutput of the 2nd matrics : \n";
    for(j=0;j<r2;j++)
    {
        for(k=0;k<c2;k++)
        {
            std::cout<<b[j][k]<<"\t";
        }
        std::cout<<"\n";
    }

    int c[r1][c2];
    memset(c, 0, sizeof(c));
    std::cout<<"\nOutput of the matrics multiplication : \n";
    for(i=0;i<r1;i++)
    {
        for(k=0;k<c2;k++)
        {
            std::cout<<c[i][k]<<"\t";
        }
        std::cout<<"\n";
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            for(k=0;k<c2;k++)
            {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }

    std::cout<<"\nOutput of the matrics multiplication : \n";
    for(i=0;i<r1;i++)
    {
        for(k=0;k<c2;k++)
        {
            std::cout<<c[i][k]<<"\t";
        }
        std::cout<<"\n";
    }
    return 0;
}