#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    if (input.substr(0, 2) == "//")
        cout << "Single line comment" << endl;
    else if (input.substr(0, 2) == "/*" && input.size() >= 4 && input.substr(input.size() - 2) == "*/")
        cout << "Multi-line comment" << endl;
    else
        cout << "Not a comment" << endl;

    return 0;
}
