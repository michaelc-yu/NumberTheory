#include <vector>
#include <iostream>
using namespace std;

int kth_highest(std::vector<int> v, int k) {
  int min = v[0];
  for (int j = 0; j < v.size(); j++){
    if (v[j] < min) min = v[j];
  }
  for (int i = 0; i  < (k+1); i++){
    int highest = v[0];
    int high_i = 0;
    for (int j = 0; j < v.size(); j++){
      if (v[j] > highest) {
        highest = v[j];
        high_i = j;
    }
    if(i < k) v[high_i] = (min-1);
    else if (i == k) return v[high_i];     
    }
  }

int main(){
 vector<int> v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 int a = kth_highest(v, 3);
 assert(a == 1);
}