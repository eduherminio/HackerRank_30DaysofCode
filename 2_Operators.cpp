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

#define CHL 100   // Char length
#define PI  3.1415926

#define FORi(a,b) for(int i=(a);i<(b);i++)
#define FORj(a,b) for(int j=(a);j<(b);j++)
#define FORk(a,b) for(int k=(a);k<(b);k++)
#define FORz(a,b) for(int z=(a);z<(b);z++)
#define ARRAY_SIZE(a)           (sizeof((a))/sizeof((a[0])))
#define ORDENAR(a)              qsort((a),ARRAY_SIZE((a)),sizeof((a[0])),compare)
#define BUSQUEDA_BINARIA(a,b)   (int*) bsearch(&(b),(a),ARRAY_SIZE(a),sizeof((a[0])), compare)
#define STR_TO_CHAR(ch,str)     strcpy(ch, str.c_str());
#define GETLINE(str)            getline(std::cin, str);
#define GETLINE_AFTER_CIN(str)  std::cin.ignore(); getline(std::cin, str);

class clase
{
  public:
    void operator() (int i) {std::cout << ' ' << i;}
} myclass;

long long n_inputs;
long long input, output;
//string input, output;
string  str;
char    ch[CHL]; // También: char * ch= 0; ch= new char[CHL];


int main()
{
  double mealCost, d_finalCost;
  int tipPercent, taxPercent, i_finalCost;

  cin>> mealCost;
  cin>> tipPercent;
  cin>> taxPercent;

  d_finalCost= mealCost + 0.01*tipPercent*mealCost + 0.01*taxPercent*mealCost;
  i_finalCost= round(d_finalCost);


  cout<< "The total meal cost is "<< i_finalCost<<" dollars.";


  return (0);
}

// Algorithms:
/*
  min, max, minmax,
  find, count
  reverse (beg, end)
  rotate(beg, new_first, end)
  remove  (beg, end, value)
  sort    (beg, end)
  swap(cont1, cont2), swap(x,y)
  binary_search( beg, end, value)

// for_each(v.begin(), v.end(), myfunction);
//    void myfunction(int i){...}
// for_each(v.begin(), v.end(), myclass);
//    void operator() (int i) {...} // Operator (). Inside class with alias 'myclass'

*/
