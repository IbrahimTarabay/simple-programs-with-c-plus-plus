#include <iostream>
using namespace std;

int main(){

int num;
int len;

cout << "How many numbers do you have:";
cin >> len;

int arr1[len];

for(int i = 0; i < len; i++){

    cout << "Enter a number:";
    cin >> num;

    arr1[i] = num;

}

for(int j = 1; j < len+1; j++){

    cout << arr1[len - j];
    cout << "\t";
    cout << arr1[j-1] << endl;

}

return 0;
}
