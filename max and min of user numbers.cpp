#include <iostream>
using namespace std;


int main(){

   int max = -2147483648 , min = 2147483647 ;
   int len;
   int num;

      cout << "How many numbers do you have:";
      cin >> len;

   for(int i = 0; i < len; i++){

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
