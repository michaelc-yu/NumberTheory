#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int draw();
int round();
int whowon(int);
int initialdraw();
void DisplayResult(int, int&, int);

int main(){

string name;
int money;
string keepplaying;
bool continuee = true;
int bet;
 
srand (time(NULL));
 
cout<<"Hello! Welcome to Blackjack! What is your name?"<<endl;
cin>>name;
cout<<"Welcome "<<name<<", how much money would you like to play with today?"<<endl;
cin>>money;
cout<<"Great! Wish you the best of luck, and enjoy."<<endl;

while (continuee==true){
cout<<"How much would you like to bet?"<<endl;
cin>>bet;
 if (bet>money){
   cout<<"Sorry, you don't have that much money."<<endl;
   break;
 }
 int result = round();
 DisplayResult(result, money, bet);
 if (money < 1){
   cout<<"You have lost everything. Better luck next time "<<name<<"."<<endl;
   continuee=false;
 }
 else{
   cout<<"Would you like to keep playing? Y for yes, N for no."<<endl;
   cin>>keepplaying;
   if (keepplaying=="Y")
     continuee=true;
   else
     continuee=false;
 }
 }
}


int round(){
  int total;
  string hit;
  int a;
  int result;

  total = initialdraw();
  while (total<21 and hit != "N"){
    cout<<"Would you like to hit? Y for yes, N for no."<<endl;
    cin>>hit;
    if (hit=="Y"){
      int a = draw();
      total = total + a;
      cout<<"Your total is "<<total<<endl;
    }
  }
  if (total>21)
    return 0;
  else{
    result = whowon (total);
    return result;

  } 
  
}

void DisplayResult (int result, int &money, int bet)
{
  
  if (result==0){
    cout<<"Sorry you lost this round."<<endl<<"You have lost $"<<bet<<". You have $"<<money-bet<<" left."<<endl;
    money = money-bet;
  }
  else{
    cout<<"Congrats! You won!."<<endl<<"You have won $"<<bet<<". You have $"<<money+bet<<" now."<<endl;
    money = money+bet;
  }
}

int initialdraw(){
  int card1;
  int card2;
  int total;
  card1 = rand() % 14;
  card2 = rand() % 14;
  if (card1==1){
    cout<<"You drew an Ace."<<endl;
  }
  else if (card1==11){
    cout<<"You drew a Jack."<<endl;
    card1=10;
  }
  else if (card1==12){
    cout<<"You drew a Queen."<<endl;
    card1=10;
  }
  else if (card1==13){
    cout<<"You drew a King."<<endl;
    card1=10;
  }
  else
    cout<<"You drew a "<<card1<<endl;
  if (card2==1){
    cout<<"You drew an Ace."<<endl;
  }
  else if (card2==11){
    cout<<"You drew a Jack."<<endl;
    card2=10;
  }
  else if (card2==12){
    cout<<"You drew a Queen."<<endl;
    card2=10;
  }
  else if (card2==13){
    cout<<"You drew a King."<<endl;
    card2=10;
  }
  else
    cout<<"You drew a "<<card2<<endl;
  total = card1+card2;
  return total;
}

 int draw(){
   int card;
   card = rand() % 14;
   if (card==1){
     cout<<"You drew an Ace."<<endl;
   }
   else if (card==11){
     cout<<"You drew a Jack."<<endl;
     card=10;
   }
   else if (card==12){
     cout<<"You drew a Queen."<<endl;
     card=10;
   }
   else if (card==13){
     cout<<"You drew a King."<<endl;
     card=10;
   }
   else
     cout<<"You drew a "<<card<<endl;
   return card;
 }

 int whowon(int total){
   int dealertotal;
   int card1;
   int card2;
   //0 for dealer win, 1 for player win, 2 for tie
   int who;
   card1 = rand() % 14;
   card2 = rand() % 14;
   dealertotal = card1 + card2;
   while (dealertotal < 17){
     dealertotal = dealertotal + (rand() % 14);
   }
   if (dealertotal>21){
     cout<<"The dealer has gone over 21. You have won!"<<endl;
     who = 1;
   }
   else if (dealertotal>total){
     cout<<"The dealer has "<<dealertotal<<", and you have "<<total<<". You have lost."<<endl;
     who = 0;
   }
   else if (total>dealertotal){
     cout<<"The dealer has "<<dealertotal<<", and you have "<<total<<". You have won."<<endl;
     who = 1;
   }
   else{
     cout<<"The dealer has "<<dealertotal<<", and you have "<<total<<". You have tied."<<endl;
     who = 2;
   }
   return who;
 } 
