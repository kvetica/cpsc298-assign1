// Assignment 1, problem 2

// determine if room exceeds max cap
// read max room cap and num of people attending meeting
// if <= max cap, announce it's legal and how many more can attend
// if > max cap, announce not legal and how many people need to be removed

#include <iostream>
using namespace std;

int main(int argc, char ** argv){
  int maxRoomCap;
  int numPeople;
  int numPeopleDiff;

// Inputs
  cout << "Enter maximum room capacity: ";
  cin >> maxRoomCap;
  cout << "Enter number of people in attendance to meeting: ";
  cin >> numPeople;

  if (maxRoomCap < numPeople){ // if numPeople exceeds maxRoomCap
    cout << "Illegal! Number of people exceeds max room capacity." << endl;
    numPeopleDiff = numPeople - maxRoomCap;

    // to make it look nicer in output, 1 person or multiple people
    if (numPeopleDiff == 1){
      cout << "Need to remove " << numPeopleDiff << " person to be legal." << endl;
    }
    else{
      cout << "Need to remove " << numPeopleDiff << " people to be legal." << endl;
    }
  }

  else if (maxRoomCap == numPeople){ // if numPeople is exactly the maxRoomCap
    cout << "Legal. Maximum room capacity reached." << endl;
    cout << "No more people can be added to room." << endl;
  }

  else{ // if numPeople does not exceed nor meet maxRoomCap
    cout << "Legal." << endl;
    numPeopleDiff = maxRoomCap - numPeople;

    if (numPeopleDiff == 1){ // just for grammar purposes
      cout << numPeopleDiff << " person can be added to fill to max room capacity." << endl;
    }
    else{
      cout << numPeopleDiff << " people can be added to fill to max room capacity." << endl;
    }
  }

  return 0;
}
