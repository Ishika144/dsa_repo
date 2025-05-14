#include<iostream>
using namespace std;
// a 
// a b
// a b c
// a b c d
// a b c d e

int main()
{

  int row, col;

  for(row=1;row<=5;row=row+1){
    for(col=1;col<=row;col=col+1){
      char name = 'a' + col-1;
      cout<<name<<" ";
    }
    cout<<endl;
  }
}