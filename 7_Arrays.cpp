#include <iostream>

#include <string>   // string(str, i, length), stoi(str), to_string(num), getline(cin, str)
#include <cstring>  // strcpy, etc.
#include <cmath>    // abs, ceil, floor, (ll)round, trunc, nearbyint, copysign(n, +-1,fmax, fmin)
#include <cctype>   // isupper, islower, toupper, tolower
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm> // (see below) find, min, max, reverse, rotate... 
#include <vector>
#include <list>

using namespace std;

int main()
{
  long long array_size;
  cin>>array_size;

  long long int* my_array= new long long int[array_size];
  
  for (int w=0; w<array_size; w++)
  {
    cin>> my_array[w];
  }

  for(int i=array_size-1; i> -1; i--)
  {
    cout<<my_array[i];

    if(i!= 0)
      cout<<" ";
  }

  return (0);
}