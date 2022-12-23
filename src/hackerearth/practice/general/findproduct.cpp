#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int a[num], i, mul = 1;
	for(i=0;i<num;i++)
	{
		cin>>a[i];
	}

    int

	long long int modulo = 1000000007;   
	for(i=0;i<num;i++)
	{
		mul = (mul * a[i]) % modulo;
	}
	cout<<mul;
	return 0;
}