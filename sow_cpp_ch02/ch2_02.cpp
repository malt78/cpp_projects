/*
  This program calculates 58% of a given
  total predicted revenue.
*/
#include <iostream>
using namespace std;

int main() 
{
  const double PERCENT = 0.58;
  double REVENUE = 8'600'000;
  double TOTAL_REVENUE = (PERCENT * REVENUE);

  cout << "\nPredicted East Coast Division Sales: " << TOTAL_REVENUE << '\n' << endl;
  return 0;

}