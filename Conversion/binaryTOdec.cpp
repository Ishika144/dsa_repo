#include<iostream>
using namespace std;

int main(){
  int num;
  cout<<"enter the number: ";
  cin>>num;
  int rem, ans=0, mul=1;

  while(num>0)
  {
    //remainder
    rem = num%10;
    //quotient
    num /= 10;
    //ans
    ans = rem*mul+ans;
    //mul
    mul*=2;

  }
  cout<<ans<<endl;
}