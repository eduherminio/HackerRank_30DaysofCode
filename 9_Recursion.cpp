#include <iostream>

using namespace std;

unsigned int factorial(unsigned int N);

int main()
{
	unsigned int N;

	cin>>N;

	cout<<factorial(N);


	return 0;
}

unsigned int factorial(unsigned int N)
{
	if(N==1)
		return (1);
	else
		return (N*factorial(N-1));
}