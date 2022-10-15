#include<bits/stdc++.h>

int main()
{
    int n_m, n_i, i, j;
    std::cin>>n_m>>n_i;
    int a[n_m][n_i];
    for(i=0;i<n_m;i++)
    {
        for(j=0;j<n_i;j++)
        {
            std::cin>>a[i][j];
        }
    }

    int b[n_m], c[n_m];
    memset(b,0, sizeof(b));
    memset(c,0, sizeof(c));
    

    for(i=0;i<n_i;i++)
    {
        int max = INT_MIN;
        for(j=0;j<n_m;j++)
        {
            if(a[j][i]>max)
            {
                max = a[j][i];
            }
        }
        for(j=0;j<n_m;j++)
        {
            if(a[j][i]==max)
            {
                b[j]++;
            }
        }
    }

    int m = INT_MIN, count = 0;
    std::set<int> updated_menu;
    for(i=0;i<n_m;i++)
    {
        if(b[i]>m)
        {
            m = b[i];
        }
    }

    for(i=0;i<n_m;i++)
    {
        if(b[i]==m)
        {
            count++;
            updated_menu.insert(i);
        }
    }

    if(count==1)
    {
        std::vector<int>update_menu_vector = std::vector<int>(updated_menu.begin(), updated_menu.end());
        std::cout<<update_menu_vector[0]+1;
    }

    std::set<int>::iterator it;
    int v = INT_MIN, v_index;
    for(it=updated_menu.begin();it!=updated_menu.end();it++)
    {
        int menu = *it, sum = 0;
        for(i=0;i<n_i;i++)
        {
            sum += a[menu][i];
        }
        c[menu] = sum/n_i;
        if (c[menu] > v)
        {
            v_index = menu;
        }
    }

    if(count>1)
    {
        std::cout<<v_index;
    }

    return 0;
}