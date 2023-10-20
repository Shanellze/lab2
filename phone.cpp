#include <iostream>
#include <string>
using namespace std;

int main()
{

  string phoneNumber;
  string areaCode;
  string middleDigits;
  string lastDigits;
  
  cout << "Enter the phone number: ";
  cin >> phoneNumber;

  areaCode = phoneNumber.substr(0, 3);
  middleDigits = phoneNumber.substr(3, 4);
  lastDigits = phoneNumber.substr(7, 4);

  cout << "(" << areaCode << ") " << middleDigits << " " 
  << lastDigits << std::endl;
  
  return 0;
}