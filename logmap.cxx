#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char *argv[])
{
  if(argc <2)
    return 0;
  const int N = 100;     //  Iteration number
  const double r = stof (argv[1]);	// Prey stock number
  const double x_0 = 0.5;
  double x_last = x_0;
  for (int i = 1;  i <= N;  i++) 
    {
      double x = x_last *r *(1-x_last);
      cout << x <<  endl;
      x_last = x;
    }
  return 0;
}