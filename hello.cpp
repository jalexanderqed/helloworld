#include <iostream>
#include <fstream>
#include <string>

int main(int argv, char* argc[]){
  using namespace std;

  cout << "Attemptint to access \"hello.dat\" . . ." << endl;
  ifstream helloIn;
  helloIn.open("hello.dat");

  if(helloIn.fail()){
    cout << "Error opening hello.dat. Exiting program." << endl;
    exit(1);
  }
  cout << "Access successful!\n\n";

  cout << "First line:" << endl;
  string helloFirstData;
  getline(helloIn, helloFirstData);
  cout << "\\*" << helloFirstData << "\n\n";

  cout << "Everything else:" << endl;
  char buf[1000];
  while(!helloIn.eof()){
    helloIn.getline(buf, 1000);
    cout << "\\*" << buf << endl;
  }
}
