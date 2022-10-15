// C++ program to illustrate the
// capacity function in vector
#include <iostream>
#include <vector>
#include<algorithm>

// using namespace std;

int main()
{
	std::vector<int> v_one;
    int n, i, e;
    std::cout<<"Enter the number of elements \n";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        v_one.push_back(e);
    }
    reverse(v_one.begin(), v_one.begin()+2);
    for(i=0;i<n;i++)
    {
        std::cout<<v_one[i];
    }

	return 0;
}

