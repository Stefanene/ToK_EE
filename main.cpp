#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

//functions
void toBinary();


//global variables
char message[101];
int binaryTrans[701];
char key[101];
int encrypted[701];
int decrypted[701];
char output[101];

int main() {
  //variables

  //set up time
  clock_t time;
  time = clock();
  //program
  cout << "Input message:  ";
  cin.get(message, 101);
  cin.clear();
  cin.ignore(10000, '\n');
  toBinary();
  //end program and timer
  time = clock() - time;
  cout << "Time to execute: " << (float)time/CLOCKS_PER_SEC << " seconds" << endl;
  return 0;
}

void toBinary() {
  int count, i = 0;
  while ((int)message[count] >= 32 && (int)message[count] <= 127) {
    int add[7];
    int n = (int)message[count];
    for(i = 0; n > 0; i++) {    
      add[i]=n % 2;    
      n = n/2;  
    }
    //add to binary array
    for(int a = 0; a < 7; a++) {
      binaryTrans[7*count+a] = add[a];
    }
    count++;
  }
  //display message in binary
  int d = 0;
  while(d < (7*count)) {
    cout << binaryTrans[d];
    d++;
  }
  cout << endl;
}
