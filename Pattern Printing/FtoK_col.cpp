#include<iostream>
using namespace std;

// f g h i j k 
// f g h i j k
// f g h i j k
// f g h i j k
// f g h i j k

int main()
{

  int row, col;

  for(row=1;row<=5;row=row+1){
    for(col=1;col<=6;col=col+1){
      char name = 'f' + col-1;
      cout<<name<<" ";
    }
    cout<<endl;
  }
}