#include <iostream>

#include <string>   // string(str, i, length), stoi(str), to_string(num), getline(cin, str)
#include <cstring>  //strcpy, etc.
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
  int n;

  cin>>n;

  for(int i=1; i<11; i++)
  {
    cout<< n << " x " << i << " = " << n*i;
    if(i!= 10)
      cout<<endl;
  }

  return (0);
}
