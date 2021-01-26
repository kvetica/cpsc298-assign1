// Assignment 1, Problem 1: Cereal

// metric ton = 35273.92 ounces
// read the weight of package of cereal in OUNCES, output weight
// in metric tons as well as number of boxes to yield one metric ton of cereal

#include <iostream>
using namespace std;

int main (int argc, char ** argv){
  double cerealWeight;
  double convertedWeight; // metric ton weight after conversion
  int numBoxes; // counter for while loop
  double totalWeight;

  cout << "Enter weight of package of cereal in ounces: ";
  cin >> cerealWeight;

  convertedWeight = cerealWeight / 35273.92; // math conversion from ounces to metric tons

  while (totalWeight <= 35273.92){
    totalWeight += convertedWeight;
    // adding up to one metric ton until while loop exits
    // adding to counter every time while loop executes to keep track of number of
    // cereal boxes adding up to one metric ton 
    numBoxes += 1;
  }

  cout << "Weight of package in tons: " << convertedWeight << " metric tons" << endl;
  cout << "Number of Packs to yield on metric ton of cereal: " << numBoxes << "boxes"<< endl;
  return 0;
}
