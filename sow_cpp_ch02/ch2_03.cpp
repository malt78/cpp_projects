/*
  This program is designed to calculate the
  sales tax of $95.00 amount.
*/
#include <iostream>
using namespace std;

int main() 
{
  // Starting variables
  double PURCHASE_AMOUNT = 95;
  double STATE_TAX = 0.04;
  double COUNTY_TAX = 0.02;
  double TOTAL_TAX = (STATE_TAX + COUNTY_TAX);

  // Variables holding arithmetic operations
  double TAX_OWED = (PURCHASE_AMOUNT * TOTAL_TAX);

  // test statement to be removed a later date
  cout << "Total sales tax: $" << TAX_OWED << endl;
  return 0;


}