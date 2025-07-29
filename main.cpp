#include <fstream>
#include <iostream>

#include "camelcase.h"
#include "logo.h"
string file_name;
using namespace std;

int main() {
  logo();
  cout << "Enter file name: ";
  cin >> file_name;

  if (file_name == "") {
    cout << "[+] file name required.\n";
  } else {
    detectCamelCaseFunctions(file_name);
  }

  return 0;
}
