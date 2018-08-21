#include <iostream>
#include <string>
using namespace std;

int main(){
     string s;
     cout<<"enter the string :"<<endl;
     cin>>s;

     int len = s.length();

     for (int i=0;i<len;i++){

        if (s[i]>='a' && s[i]<='z'){
           s[i]=char(((int)s[i])-32);

        } else if(s[i]>='A' && s[i]<='z'){
             s[i]=char(((int)s[i])+32);

        }else{

          cout<< "not proper"<<endl;
          break;
        }
      }

     cout<<"modified string is  : "<<s<<endl;
     return 0;
}
