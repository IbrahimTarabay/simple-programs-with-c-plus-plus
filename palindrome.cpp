#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

  int main(){

    string str;
    cout<< "enter your palindrome please:";
    cin>>str;

  transform(str.begin(), str.end(), str.begin(), ::tolower);

    int i = 0;
    int j = str.length() - 1;


    for (i = 0; i < j;i++,j--)
    {
        if (str[i] != str[j])
        {
            cout<< "not palindrome"<<endl;
            break;

        }else{
        cout<< "palindrome"<<endl;
        break;
     }

    }
  }
