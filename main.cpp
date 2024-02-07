#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");
  string something;
  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough! yeet" << endl;
  
  cout << "please tell me something:" << endl;
  getline(cin,something);

  MyFile << something;
  // Close the file
  MyFile.close();
}