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

class Person
{
  public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge)
{
  if(initialAge<0)
  {
    cout<< "Age is not valid, setting age to 0."<<endl;
    age= 0;
  }
  else
  {
    age= initialAge;
  }
}

void Person::yearPasses()
{
  age++;
}

void Person::amIOld()
{
  if(age < 13)
    cout<< "You are young."<< endl;
  else if (age < 18)        // if(age>=13 && age<18)
    cout<< "You are a teenager."<< endl;
  else
    cout<< "You are old."<< endl;
}

int main()
{
  int t;
  int age;

  cin>> t;
  for(int i=0; i<t; i++)
  {
    cin>> age;
    Person p(age);
    
    p.amIOld();

    for(int j=0; j<3; j++)
    {
      p.yearPasses();
    }

    p.amIOld();
    
    cout<< '\n';

  }
  
  
  return (0);

}