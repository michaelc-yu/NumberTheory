#include <iostream>
using namespace std;

int unionn(int set1[], int size1, int set2[], int size2){
  int u[100];
  for (int x = 0; x < size1; ++x){
    if (set1[x] != u){
      u = u + set1[x];
    }
  }
  for (int y = 0; y < size2; ++y){
    if (set2[y] != u){
      u = u + set2[y];
    }
  }
return u;
}

int main(){
  int a[3] = {1, 2, 3};
  int b[3] = {3, 4, 5};
  int c = unionn(a, 3, b, 3);
  cout<< c<<endl;
}
