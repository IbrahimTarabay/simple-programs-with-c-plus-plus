#include <iostream>
using namespace std;

int main(){

int x[100],i=0,j=0,sum=0;

while(cin>>x[i] && x[i++]);

   int n = i-1;


        for (i=0; i<n-1; i++){

          for (int j=0; j<n-1; j++){

                if(x[j] > x[j+1]){

                 sum=x[j];
                 x[j]=x[j+1];
                 x[j+1]=sum;

                   }
             }
 }

 sum = 0;

while(cout<<x[j] && x[++j]){

    sum +=x[j-1];
}

cout<<endl;
cout<< sum + x[j-1] <<endl;
}

//arrange numbers you enter from small to big then add them together.
