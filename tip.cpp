#include <iostream>
using namespace std;

int main()
{

  int price;
  int tipPercentage;
  double tip;
  
  cout << "Enter the price (pounds): ";
  cin >> price;
  cout << "Enter the tip percentage: ";
  cin >> tipPercentage;
  tip = price*(tipPercentage/100);
  cout << "The tip is " << tip << std::endl;
  cout << "The total amount to pay is " << price + tip <<  std::endl;
  
  return 0;
}