#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "please enter the number:";

  cin >> num;

   for(int i = 0; i < num; i++){

        cout << (i+1);
        cout << "\n";

   }

  return 0;
}

//when the user enters the number count from 1 to that number.
