#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool isPrime = true;

  cout << "Enter integer number: ";
  cin >> n;

  for(i = 2; i <= n / 2; i++)
  {

      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}

//enter a number and i will tell you prime or not.
