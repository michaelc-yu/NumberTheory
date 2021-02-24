#include <iostream>
#include <json/json.h>
#include <vector>
using namespace std;

//function that reads in spotify user data originally in .json format

int main(){
  int score;
  //read in set of files of listener 1
  //read in set of files of listener 2

  score = compatabilityscore(file1, file2);
  summary(score);
}


//function that calculates compatability score from 2 files, possibly using ML concepts such as collaborative filtering

int compatabilityscore(vector array1[], vector array2[]){
  int len1 = sizeof(array1);
  for (i=0; i<len; i++){
    for (j=0; 


/*
iterates through each object {}, in the array [], identifying any commonality in artist name or track name
if similar track name, calculate quantity of msPlayed (1000 ms = 1 second), comparing the 2 people's liking for that track
add a certain value to the compatability score

if similar artist, see if anyone listened to the artist in another track
add a certain value to the compatability score

need to normalize data, no repeats, the total number of seconds of similar song choice/artist divided by total number of seconds listened in .json file

repeat for every StreamingHistory.json file
*/
}

void summary(score){
/*  
function that returns a summary of the compatability between 2 user's music preferences

prints out compatability score
prints out what each range of compatability score means, and how similar you're music taste is to each other
*/
