#include<iostream>
using namespace std;
// 10 
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15

int main()
{

  int row, col;

  for(row=1;row<=6;row=row+1){
    for(col=1;col<=row;col=col+1){
      int count = 10 + col-1;
      cout<<count<<" ";
    }
    cout<<endl;
  }
}