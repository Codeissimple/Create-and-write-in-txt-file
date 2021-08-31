#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream dataFile; //Create a file

  cout << "Opening file...\n";
  dataFile.open("demofile.txt", ios::out); // Open newly created file for output.
  cout << "Now writing data to the file...\n";
  dataFile << "Jones\n";  //Write line 1
  dataFile << "Smith\n";  //Write line 2
  dataFile << "Willis\n"; //Write line 3
  dataFile <<  "Davis\n"; //Write line 4
  dataFile.close();
  cout << "Done.";
  
  return 0;

}