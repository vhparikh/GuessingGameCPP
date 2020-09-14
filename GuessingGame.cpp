#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  char isPlaying = 'y';
  while (isPlaying == 'y' || isPlaying == 'Y') {
    srand (time(NULL));
    int randomNum = rand() % 101;
    int guess = 0;
    int tries = 0;
    cout << "Try to guess the random number between 0  and 100" << endl;
    do {
      
    } while (guess != randomNum);
  }
}
