#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream dataFile;

  cout << "Opening file...\n";
  dataFile.open("demofile.txt", ios::out); // Open newly created file for output.
}