#include <iostream>
#include <Math.h>
using namespace std;

int main(){

int row,column;

cout << "Enter row:";
cin >> row;

cout << "Enter column:";
cin >> column;

int matrix[row][column];
int i,j;
int temp = 0;


for( i=0;i<row;i++){
for( j=0;j<column;j++){
    cout << "row-column:" << (i+1) << "-" << (j+1) << ":";
    cin>>matrix[i][j];
}
}

int checklen = round(row/2) * (column);

for( i=0; i < round(row/2) ; i++){
for(j = 0; j < column; j++){
if(matrix[i][j] == matrix[row-(i+1)][j]){
    temp = temp + 1;
}
}
}

if(temp == checklen){
    cout << "symmetric";
}
else{
    cout << "not symmetric";
}

return 0;
}

//if the 2D array is symmetic print symmetric else print not symmetric.
