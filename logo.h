#include <fstream>
#include <iostream>

using namespace std;

void logo() {
  string line;

  ifstream logoFile("logo.txt");
  if (logoFile) {
    while (getline(logoFile, line)) {
      cout << line << endl;
    }
  } else {
    cout << "[!] Couldn't load logo.txt" << endl;
  }

  for (int i = 0; i <= 3; ++i) cout << endl;
}
