/*
*	A map stores keys and associated values in std::pair<const key, mapped_type>
*
*	std::pair is a structure whose values are named 'first' & 'second'.
*	So mypair.first and mypair.second return those values.
* In this exercise, (*it).second or it->second needs to be used.
*
* std::make_pair(a, b) creates a std::pair
*
* operator[]	-> 	find-or-add: returns a reference to a stored value, or adds it
* insert()		-> 	adds a value if there isn't an existing element
* emplace()		-> 	(C++11) adds a value if there isn't an existing element,
*									but avoids creating a temporary std::pair<const K, V> element	
*
* find(k)			-> 	returns an iterator to the member with a key equivalent to k
*									or to mymap.end() if the container doesn't have such an element
*
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map <string, long int> mymap;
	map <string, long int>::const_iterator it= mymap.begin();

	int n_entries, input_number;
	string input_name;

	cin>> n_entries;

	for(int i=0; i<n_entries; i++)	{
		cin>> input_name;
		cin>> input_number;

	// Not allowing to rewrite numbers
		// mymap.emplace(input_name, input_number);
		// mymap.insert(pair<string, long int>(input_name, input_number));
	// Allowing to rewrite numbers
		mymap[input_name]= input_number;

	// In the exercise it isn't explicited whether numbers could be rewritten or not,
	// so I assume they could.		
	}

	while(cin>>input_name)	{
		it= mymap.find(input_name);

		if(it == mymap.end())	{
			cout<<"Not found"<<endl;
		}

		else	{
			cout << input_name<< "=" << (*it).second<<endl;
			// cout << input_name<< "=" << it->second<<endl;

		}
	}

	return 0;
}