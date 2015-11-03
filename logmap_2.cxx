#include <iostream>
#include <string.h>
using namespace std;


int main()
{
  const int N = 200;     //  Iteration number
  const double r_grenze = 4;	// Highest prey stock number
  const double x_0 = 0.5;
  double x; 
  int M=50;
  
  for(double r=0.01; r<r_grenze ; r=r+0.01)
  {
    x = x_0;
    for (int i = 0;  i < M;  i++) 
    {
	  x = x *r *(1-x);
    }
    for (int i = M;  i < N;  i++) 
    {
	  x = x *r *(1-x);
	  cout << r << '\t' << x << endl;
    }
  }
return 0;
}