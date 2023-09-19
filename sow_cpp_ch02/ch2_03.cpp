/*
  This program is designed to calculate the
  sales tax on a predetermined amount.
*/
#include <iostream>
using namespace std;

int main() 
{
  // Starting variables
  double PURCHASE_AMOUNT = 95;
  double STATE_TAX = 0.04;
  double COUNTY_TAX = 0.02;

  // Variables holding arithmetic operations
  double TOTAL_STATE_TAX = (PURCHASE_AMOUNT * STATE_TAX);

  // test statement to be removed a later date
  cout << "$" << TOTAL_STATE_TAX << endl;
  return 0;


}