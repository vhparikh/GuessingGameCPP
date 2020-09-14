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
      cin >> guess;
      tries++;
      if (guess < randomNum) {
	cout << "Guess higher!" << endl;
      }
      else if (guess > randomNum) {
	cout << "Guess lower!" << endl;
      }
      else {
	cout << "Congratulations you guessed the right number!" << endl;
	cout << "You took " << tries << " tries" << endl;
	cout << "Would you like to play again? y/n" << endl;
	cin >> isPlaying;
      }
    } while (guess != randomNum);
  }
}
