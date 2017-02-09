#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dec_to_bin(int dec, vector<int> & binary);
int number_ones(const vector<int> & binary);
void print_bin(vector<int> & binary);

int main()
{
	int decimal;
	vector<int> binary;

	cin>> decimal;
	
	dec_to_bin(decimal, binary);

	// print_bin(binary);

	cout<<number_ones(binary);
}

void dec_to_bin(int dec, vector<int> & binary)	{
	int dividendo= dec, divisor=2, cociente, resto;

	if(dec==0)	{
		binary.push_back(0);
		return;
	}
	else if(dec==1)	{
		binary.push_back(1);
		return;
	}
	while(true)
	{
		cociente= dividendo / divisor;
		resto= 		dividendo % divisor;
		// cout<<dividendo<<" / "<<divisor<<" = "<<cociente<<" con resto "<<resto<<endl;
		binary.push_back(resto);
		if(cociente==1)	{
			binary.push_back(cociente);
			break;
		}
		dividendo=cociente;
	}
}

int number_ones(const vector<int> & binary)	{
	int n_ones= 0, max_n_ones= 0;

	if(binary.size()==1)	{
		return binary.at(0);
	}

	for(int i=0; i<binary.size(); i++)
	{

		if(binary[i]==1)	{
			n_ones++;
			if(n_ones > max_n_ones)	{
				// cout<<n_ones<<" "<<max_n_ones<<endl;
				max_n_ones= n_ones;
			}
		}
		else	{
			n_ones= 0;
		}
	}
	return max_n_ones;
}

void print_bin(vector<int> & binary)	{
	reverse(binary.begin(), binary.end());
	for(auto x:binary)
		cout<<x<<" ";
	cout<<endl;
}