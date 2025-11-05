#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void checkNumeric() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isNumeric = true;
    for (char c : input) {
        if (!isdigit(c)) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "It is a Numeric Constant." << endl;
    else
        cout << "It is NOT a Numeric Constant." << endl;
}

void checkOperator() {
    string input;
    cout << "Enter a character: ";
    cin >> input;

    if (input == "+" || input == "-" || input == "*" || input == "/" || input == "%" || input == "=")
        cout << "It is an Operator." << endl;
    else
        cout << "It is NOT an Operator." << endl;
}

void checkComment() {
    string line;
    cout << "Enter a line: ";
    cin.ignore();
    getline(cin, line);

    if (line.substr(0, 2) == "//")
        cout << "It is a Single-line Comment." << endl;
    else if (line.substr(0, 2) == "/*" && line.substr(line.size() - 2) == "*/")
        cout << "It is a Multi-line Comment." << endl;
    else
        cout << "It is NOT a Comment." << endl;
}

void checkIdentifier() {
    string input;
    cout << "Enter an identifier: ";
    cin >> input;

    if (!(isalpha(input[0]) || input[0] == '_')) {
        cout << "Invalid Identifier (must start with letter or underscore)." << endl;
        return;
    }

    for (int i = 1; i < input.size(); i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            cout << "Invalid Identifier (contains illegal characters)." << endl;
            return;
        }
    }

    cout << "Valid Identifier." << endl;
}

void findAverage() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    int sum = 0;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average value = " << (float)sum / n << endl;
}

void findMinMax() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Minimum value = " << minVal << endl;
    cout << "Maximum value = " << maxVal << endl;
}

void concatNames() {
    string firstName, lastName;
    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Last Name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl;
}

int main() {
    int choice;
    do {
        cout << "\n===== Simple C++ Multi-Program Project =====\n";
        cout << "1. Check Numeric Constant\n";
        cout << "2. Check Operator\n";
        cout << "3. Check Comment Line\n";
        cout << "4. Check Identifier\n";
        cout << "5. Find Average of Array\n";
        cout << "6. Find Min and Max of Array\n";
        cout << "7. Concatenate Names\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: checkNumeric(); break;
        case 2: checkOperator(); break;
        case 3: checkComment(); break;
        case 4: checkIdentifier(); break;
        case 5: findAverage(); break;
        case 6: findMinMax(); break;
        case 7: concatNames(); break;
        case 0: cout << "Exiting program..." << endl; break;
        default: cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
