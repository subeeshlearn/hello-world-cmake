#include <iostream>

int add(int a, int b)
{
  return a + b;
}

int main()
{
  std::cout << "Hello world \n"; 
  
  int num1 = 5;
  int num2 = 10;
  int sum = add(num1, num2);
  
  std::cout << "The sum is: " << sum << std::endl;
  
  // Test cases
  if (sum == 15)
  {
    std::cout << "Test case 1 passed" << std::endl;
  }
  else
  {
    std::cout << "Test case 1 failed" << std::endl;
  }
  
  num1 = -5;
  num2 = 10;
  sum = add(num1, num2);
  
  if (sum == 5)
  {
    std::cout << "Test case 2 passed" << std::endl;
  }
  else
  {
    std::cout << "Test case 2 failed" << std::endl;
  }
  
  return 0;
}