#include <iostream>
using namespace std;

int main(){

int printprimes(int num);

int num;

cout << "please enter number:";

cin >> num;

cout << printprimes(num);

return 0;

}

  bool isPrime(int number){

      for (int i = 2; i <= number; i++){
          if(number % i == 0 && number!= i){

             return false;
          }
       }

      return true;
  }

int printprimes(int num) {

  if (num == 1){
    return 1;
  }

  if(isPrime(num) == true){

    cout << num ;
    cout << "\n";
  }

  printprimes(num - 1);
}
