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
    int row_index;
    std::cout<<"\nEnter the row index which need to be sorted : ";
    std::cin>>row_index;
    sort(v[row_index].begin(), v[row_index].end());

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