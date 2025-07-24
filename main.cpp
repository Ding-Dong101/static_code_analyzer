#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // variables
  string file_name;
  string line;
  string logo = "logo.txt";
  // this gets the texts in the file
  ifstream file(file_name);
  ifstream logoFile(logo);

  while (getline(logoFile, line)) {
    cout << line << endl;
  }
  for (int i; i <= 3; ++i) {
    cout << endl;
  }
  cout << "Enter the name of the file (the file should be in the same "
          "directory): \n";
  cout << "[+] ";
  cin >> file_name;

  // this is a check or validation if the file exists
  if (!file) {
    cout << "[+] There was an error getting the file name please check "
            "agian... \n";
  } else {
    for (int i; i <= 2; ++i) {
      cout << endl;
    }

    //   loops through the "file" to generate the text inside
    while (getline(file, line)) {
      cout << line << endl;
    }

    for (int i; i <= 5; ++i) {
      cout << endl;
    }
  }
  cout << "[+] Program terminated..." << endl;
  return 0;
}
