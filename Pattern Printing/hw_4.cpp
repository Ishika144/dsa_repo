#include<iostream>
using namespace std;
// 4 4 4 4 4 
// 4 4 4 4 4
// 4 4 4 4 4
// 4 4 4 4 4
// 4 4 4 4 4

int main()
{

  int row, col;

  for(row=1;row<=5;row=row+1){
    for(col=1;col<=5;col=col+1){
      cout<<4<<" ";
    }
    cout<<endl;
  }
}