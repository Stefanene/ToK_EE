#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

//functions
void toBinary(char input);


//global variables
char message[101];
int binaryTrans[701];
char key[101];
int encrypted[701];
int decrypted[701];
char output[101];

int main() {
  //variables
  clock_t time;
  time = clock();
  //program
  int i = 1;
  int c = 0;
  while (c < 10000000) {
    c++;
    i*60/79;
  }
  //end program
  time = clock() - time;
  cout << "Time to execute: " << (float)time/CLOCKS_PER_SEC << " seconds" << endl;
  return 0;
}
