#include <iostream>
using namespace std;

int computeDifference(int, int, bool, int, int, bool);
int main(){
  int start_hours;
  int start_minutes;
  string start_AMorPM;
  bool start_isAm;
  int future_hours;
  int future_minutes;
  string future_AMorPM;
  bool future_isAm;
  cout << "Please enter a start time."<<endl << "Enter hour: ";
  cin >> start_hours;
  cout <<"Enter minute: ";
  cin >> start_minutes;
  cout <<"AM or PM?";
  cin >> start_AMorPM;
  if (start_AMorPM == "AM")
    start_isAm = true;
  else
    start_isAm = false;
  cout <<"Please enter a future time."<<endl << "Enter hour: ";
  cin >> future_hours;
  cout <<"Enter minute: ";
  cin >> future_minutes;
  cout <<"AM or PM?";
  cin >> future_AMorPM;
  if (future_AMorPM == "AM")
    future_isAm = true;
  else
    future_isAm = false;
  int ans = computeDifference(start_hours, start_minutes, start_isAm, future_hours, future_minutes, future_isAm);
  cout <<"Time difference is "<<ans<< " minutes."<<endl;


  //testcase 1
  ans = computeDifference (5, 10, true, 6, 0, true);
  if (ans!=50)
    cout <<"Failed testcase 1\n";
  else
    cout <<"Pass testcase 1\n";

  
}

int computeDifference(int start_hours, int start_minutes, bool start_isAm, int future_hours, int future_minutes, bool future_isAm){
  int firstadd = 60-(start_minutes);
  int lastadd = future_minutes;
  int middleminutes = ((future_hours - (start_hours-1)) * 60);
  int timedifference = (firstadd + lastadd + middleminutes)-120;

  if (start_isAm == future_isAm){
    return timedifference;
  }
    timedifference = timedifference + 720;
    return timedifference;		       
}