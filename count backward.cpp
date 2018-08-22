#include <iostream>
using namespace std;

int main() {

int count(int n);

  int num;

  cout << "please enter the number:";

  cin >> num;

  cout << count(num);

  return 0;

}

void count(int x)
{
        if (x == 1)
        {
                return;
        }
        cout<<x<<endl;
        count(x-1);
}


/*#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "please enter the number:";

  cin >> num;

   for(int i = 0; i < num; i++){

        cout << (num - i);
        cout << "\n";

   }

  return 0;
}*/

//when user enter a number count that number till 1 (with for loop and recursion).
