#include<bits/stdc++.h>

int main()
{
    int r, c, i, j, e;
    std::cout<<"Enter the number of rows : ";
    std::cin>>r;
    std::cout<<"\nEnter the number of columns : ";
    std::cin>>c;
    std::vector<std::vector<int>> v(r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            std::cin>>e;
            v[i].push_back(e);
        }
    }

    int column_index;
    std::cout<<"\nEnter the index of the columns which need to be sorted : ";
    std::cin>>column_index;

    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            std::cout<<"Starting - "<<v[i][column_index]<<" - "<<v[j][column_index]<<"\n";
            if(v[i][column_index] > v[j][column_index])
            {
                std::cout<<"\n"<<v[i][column_index]<<" is bigger then "<<v[j][column_index]<<"\n";
                v[i].swap(v[j]);
            }
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            std::cout<<v[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    return 0;
}