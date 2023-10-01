/*
  This file serves as a test/exploration file for
  various c++ features. Items tested here may or
  may not be used in future projects. Changes to
  this file will vary greatly and may not resemble 
  the original.
*/
#include <iostream> 
using namespace std;              
                  
int main() 
{
    int sales = 5;
    int QUOTA_AMOUNT = 2;
    bool SALES_QUOTA_MET;

  if (sales >= QUOTA_AMOUNT) // Brackets create a block statement.
  {  SALES_QUOTA_MET = 1; // In C++, 1 represents the bool value 'true'.
    cout << "You have met your sales quota!" << endl;
  }
  else // No brackets are needed because else has a single line statment.
    SALES_QUOTA_MET = 0; // In C++, 0 represents the bool value 'false'.

return 0;

}