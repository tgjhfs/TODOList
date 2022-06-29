#include <iostream>

using namespace std;

void printThings(string thingsToPrint){
  cout << thingsToPrint << endl;
}

int main(int argc, char *argv[]){
  cout << "Hello world" << endl;
  string str;
  cin >> str;
  printThings(str);
  return 0;
}
