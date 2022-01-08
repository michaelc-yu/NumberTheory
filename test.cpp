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

int main(int argc, char * argv[]){
  cout << "% ";
  char cmd;
  cin >> cmd;
  if (cmd == 'k') {
    string category;
    cin >> category;
    cout << category << endl;
  }
}
