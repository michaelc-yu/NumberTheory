#include <iostream>
using namespace std;

//function that takes in an array and size, prints array back
void returnarray(int array[], int size){
  int x = 0;
  while (x<size){
    cout<< array[x]<< endl;
       x += 1;
  }
}
//function that takes in an array and size, returns average of values in array
int returnaverage(int array[], int size){
  int x = 0;
  int sum = 0;
  while(x<size){
    sum = sum + array[x];
      x += 1;
  }
  int avg = sum/size;
  return avg;
}
//'' ,and reverses the array
void reversearray(int array[], int size){
  for (int i=0; i < size/2; ++i)
    swap(array[i], array[size-(1+i)]);
}


//''returns largest int in array
int returnlargest(int array[], int size){
  int x = 0;
  int largest = array[0];
  while(x<size){
    if (array[x]>largest){
      largest = array[x];
    }
    x += 1;
  }
  return largest;
}
//''checks to see if there is a duplicate value in array
bool checkdup(int array[], int size){
  for(int x=0; x < size; ++x){
    for (int i=(x+1); i < size; ++i)
      if (array[x] == array[i]){
        return true;
      }
  }
  return false;
}

bool inarray(int array[], int size, int array2[], int size2){
  for(int x=0; x < size; ++x){
    if (array[x] == array2[0]){
	for(int z=0; z < size2; ++z){
	  if (array[x+z] != array2[z]){
	    break;
	  }
	}

	//two possibilites to come this point: break or you finish checking 
     return true;
    }
  }
  return false;
}

int main(){
  int a[7] = {1, 2, 3, 4, 5, 6, 7};
  returnarray(a, 7);

  int x = returnaverage(a, 7);
  cout<< x<< endl;
  
  //  reversearray(a, 7);
  returnarray(a, 7);
  int l = returnlargest(a, 7);
  cout<< l<< endl;

  if (checkdup(a, 7)){
     cout << "There is duplicate"<<endl;
  }
  else{
     cout << "No duplicate"<<endl;
  }
  int b[5] = {1, 8, 9, 10, 11};
  if (inarray(a, 7, b, 5)){
    cout <<"array 2 is in array 1"<<endl;
  }
  else{
    cout <<"not in array"<<endl;
  }
}
