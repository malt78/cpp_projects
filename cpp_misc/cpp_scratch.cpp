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
    int DATE = 01;

  if (sales >= QUOTA_AMOUNT && DATE == 01) // Primary parameter 'sales' checked first to avoid short-circuit evaluation.
  {  SALES_QUOTA_MET = 1; 
    cout << "You have met your sales quota on time!" << endl;
  }
  else 
    SALES_QUOTA_MET = 0;

return 0;

}