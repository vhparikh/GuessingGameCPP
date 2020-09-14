//Created by Vatsal Parikh
//Date 9/14/20
//The computer generates a random number the user must guess it

//imports
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  char isPlaying = 'y';
  while (isPlaying == 'y' || isPlaying == 'Y') {
    srand (time(NULL)); //initialize random seed
    int randomNum = rand() % 101; //generates a random number between 0 and 100
    int guess = 0; //the users guess
    int tries = 0; //number of tries the user needed
    cout << "Try to guess the random number between 0  and 100" << endl; //prints intro
    do { //start of do while loop
      cin >> guess; //take the users input and put it into guess
      tries++; //increments tries by one
      if (guess < randomNum) { //if the guess is lower than the random number then:
	cout << "Guess higher!" << endl; //print guess higher
      }
      else if (guess > randomNum) { //else if the guess is higher than the random number then:
	cout << "Guess lower!" << endl; //print guess lower
      }
      else { //else the user guessed the right number
	cout << "Congratulations you guessed the right number!" << endl; //print congrats
	cout << "You took " << tries << " tries" << endl; //print out number of tries
	cout << "Would you like to play again? y/n" << endl; //ask if they want to play again
	cin >> isPlaying; //take in input to see if they are playing again
      }
    } while (guess != randomNum); //while the guess is not the right number
  }
}
