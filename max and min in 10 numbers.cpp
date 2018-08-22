#include <iostream>
using namespace std;


int main(){

   int max = -2147483648 , min = 2147483647 ;
   int num;

   for(int i = 0; i < 10; i++){

      cout << "Enter a number: ";
      cin >> num;

       if ( max < num )
      {
         max = num;
      }
       if ( num < min )
      {
         min = num;
      }
   }

      cout << "The maximum is " << max << endl;
      cout << "The minimum  is " << min  << endl;



   return 0;

}

//enter ten numbers and i will tell you who is the max and min.
