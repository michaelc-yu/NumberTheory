#include <iostream>
using namespace std;

//void computeCoins(int coinValue, int& num, int& amountLeft){
void computeCoins(){
  int amount;
  int quarters = 0;
  int dimes = 0;
  int pennies = 0;
  char cont;
  bool continuee = true;
  while(continuee==true){
    quarters = dimes = pennies = 0;
    cout<<"Please enter your change: "<<endl;
    cin>>amount;
    if (amount>100){
      cout<<"Please enter a value between 0 and 100."<<endl;
      return;
    }
    while (amount>=25){
      amount = amount-25;
      quarters = quarters + 1;
    }
    while (amount>=10){
      amount = amount-10;
      dimes = dimes + 1;
    }
    while (amount>0){
      amount = amount-1;
      pennies = pennies + 1;
    }
    cout<<quarters<<" quarter(s) "<<dimes<<" dime(s) "<<pennies<<" penny(pennies)"<<endl;
    cout<<"Would you like to continue? Y for yes, N for no."<<endl;
    cin>>cont;
    if (cont=='Y'){
      continuee = true;
    }
    else{
      continuee = false;
      return;
    }
  }
}
int main(){
  computeCoins();
  return 0;
}
