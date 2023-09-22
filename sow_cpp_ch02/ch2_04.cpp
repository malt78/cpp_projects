/*
    This program calculates the tax 
    and tip for $88.67.
*/
#include <iostream>
using namespace std;

int main() 
{
  double BILL_TOTAL = 88.67;
  double TAX = 0.675;
  double TIP = 0.20 * (BILL_TOTAL * TAX); // Tip is 20% after adding the tax.

  // Test statement for correct output
  cout << "$" << TIP << endl;

}