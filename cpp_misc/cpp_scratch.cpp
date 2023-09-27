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
  // This current program determines a letter grade based on user input.
    const int A_score = 90,
              B_score = 80,
              C_score = 70,
              D_score = 60;

    int test_score;

    cout << "Enter your test score to get letter grade: " << endl;
    cin >> test_score;

    // This demonstrates the if-else statment
    if (test_score >= 90)
        cout << "Grade A\n";
    else if (test_score >= 80)
        cout << "Grade B\n";
    else if (test_score >= 70)
        cout << "Grade C\n";
    else if (test_score >=60)
        cout << "Grade D\n";
    else if (test_score >= 0)
        cout << "Grade F\n";
    else 
        cout << "Invalid test score."; 

return 0;

}