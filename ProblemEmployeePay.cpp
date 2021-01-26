// assignment 1, problem 3
/*
$16.00 / hour for regular hours worked in a week
any hours overtime = paid 1.5x the reg rate ($24)
6% withheld for Social Sec tax
14% withheld for fed income tax
5% withheld for state income tax
$10 per week withheld for medical bills
Input = number of hours worked in a week
Output = gross pay, all withheld amounts, net take-home pay for the week
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv){
  double regHoursRate = 16.00;
  double overtimeRate = 24.00;
  // if greater than 40 hrs in a week, additional hours are overtime
  double socialSecTax;
  double fedIncomeTax;
  double stateIncomeTax;
  double medicalBills = 10.0;
  int numHours;
  double totalPay;
  double grossPay;

  cout << "Enter number of hours worked this week: ";
  cin >> numHours;

  int overtimeHours;
  if (numHours > 40){ // if there are additional overtime hours
    overtimeHours = numHours - 40;
    totalPay = (40 * regHoursRate) + (overtimeHours * overtimeRate);
    grossPay = totalPay; // setting grossPay to totalPay before totalPay is taxed

    // Taxes
    socialSecTax = totalPay * 0.06;
    fedIncomeTax = totalPay * 0.14;
    stateIncomeTax = totalPay * 0.05;

    totalPay = totalPay - (socialSecTax + fedIncomeTax + stateIncomeTax + medicalBills);

  }
  else{ // if there are no overtime hours
    totalPay = (numHours * regHoursRate);
    grossPay = totalPay; // setting grossPay to totalPay before totalPay is taxed

    // Taxes
    socialSecTax = totalPay * 0.06;
    fedIncomeTax = totalPay * 0.14;
    stateIncomeTax = totalPay * 0.05;

    totalPay = totalPay - (socialSecTax + fedIncomeTax + stateIncomeTax + medicalBills);
  }

  // Outputs
  cout << "Gross pay before deductions: $" << grossPay << endl;
  cout << "Social Security Tax (6%): $" << socialSecTax << endl;
  cout << "Federal Income Tax (14%): $" << fedIncomeTax << endl;
  cout << "State Income Tax (5%): $" << stateIncomeTax << endl;
  cout << "Amount taken for Medical Bills: $" << medicalBills << endl;
  cout << "Total net pay for the week: $" << totalPay << endl;

  return 0;
}
