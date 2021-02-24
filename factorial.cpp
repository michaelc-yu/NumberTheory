#include <iostream>
using namespace std;

int factorial(int integer){
  int result = 1;
  while (integer > 1){
    result = result * integer;
    integer = integer - 1;
  }
  return result;
}

int factorialll(int integer){
  int result;
  result = integer;
  integer = integer -1;
  if (integer==1){
    return result;
  }
  else{
    int b = factorialll(integer);
    result=result*b;
    return result;
  }
}
int main(){
  int integer;
  cout<<"Please enter an integer: "<<endl;
  cin>>integer;
  if (integer<0){
    cout<<"cannot be negative"<<endl;
    return 0;
  }
  int ans = factorialll(integer);
  cout <<"The factorial is "<<ans<<endl;
}
