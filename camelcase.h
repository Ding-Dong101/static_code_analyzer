
#include <fstream>
#include <iostream>
#include <regex>
#include <string>
using namespace std;
extern string file_name;

void detectCamelCaseFunctions(const string& filename) {
  ifstream file(filename);
  if (!file.is_open()) {
    cout << "[-] Error opening file.\n";
    return;
  }

  string line;
  int lineNum = 1;

  // Regex to match function definitions (simplified)
  // This looks for: return-type functionName(...)
  regex funcPattern(R"(\b\w+\s+([a-z][a-zA-Z0-9]*)\s*\([^)]*\)\s*\{?)");

  while (getline(file, line)) {
    smatch match;
    if (regex_search(line, match, funcPattern)) {
      string functionName = match[1];

      // Check if it's camelCase (starts with lowercase, has at least one
      // capital)
      if (isalpha(functionName[0]) && islower(functionName[0]) &&
          functionName.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") !=
              string::npos) {
        cout << "[✔] Line " << lineNum << ": " << functionName
             << " is camelCase.\n";
      } else {
        cout << "[✘] Line " << lineNum << ": " << functionName
             << " is NOT camelCase.\n";
      }
    }

    lineNum++;
  }

  file.close();
}
