#include <iostream>
using namespace std;
/*
void add_one(int *x);

int main(){
  int a=7;
  int &b=a;
  add_one(&b);
  cout<<a<<endl<<b<<endl;
}

void add_one(int *x){
  *x+=1;
}
*/

int main(){
  const int SIZE = 5;
  int array[SIZE] = {1,2,3,4,5};
  for (int *i=array; i<array+SIZE; ++i){
    cout<< i <<endl;
  }
}
