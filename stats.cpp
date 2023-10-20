#include <iostream>
using namespace std;

int main()
{

  int x = 0;
  int y = 0;
  
  cout << "Please enter the first number:";
  cin >> x;
  cout << "Please enter the second number:";
  cin >> y;
  cout << "The sum of " << x << " and " << y
  << " is: "<< x + y << std::endl;
  
  cout << "The difference of " << x << " and " << y
  << " is: "<< y - x << std::endl;
  
  cout << "The product of " << x << " and " << y
  << " is: "<< x * y << std::endl;
  
  cout << "The distance of " << x << " and " << y
  << " is: "<< abs(y-x) << std::endl;
  
  cout << "The mean average of " << x << " and " << y
  << " is: "<< (x + y)/2 << std::endl;
  
  return 0;
}