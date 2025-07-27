#include <iostream>
#include <fstream>
#include <regex>
#include <string>

extern string file_name;
int camelcase() {
  // Regex for camelCase function names
    regex camelCaseFunc(R"(\b[a-z]+(?:[A-Z][a-z0-9]*)*\s*\()");
    string line;
    int lineNumber = 0;

    cout << "🔍 CamelCase function names detected in " << filename << ":\n";

    while (getline(file_name, line)) {
        lineNumber++;
        smatch match;
        if (regex_search(line, match, camelCaseFunc)) {
            cout << "Line " << lineNumber << ": " << match.str() << "\n";
        }
    }
  
  return 0; 
}
