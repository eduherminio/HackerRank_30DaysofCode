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
  int n_inputs;
  cin>>n_inputs;

  for(int i=0; i<n_inputs; i++)
  {
    string input, even, odd;
    cin>> input;

    for(int j=0; j< input.size(); j++)
    {
      string letter (input, j, 1);
      if(j%2)
        odd+= letter;
      else
        even+=letter;
    }

    cout<< even <<" "<< odd;
    
    if(i!= n_inputs-1)
      cout<<endl;
  }

  return (0);
}
