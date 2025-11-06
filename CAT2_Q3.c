/*
NAME:CLARENCE NJUGUNA
REG NO:CT101/G/26491/25
DESCRIPTION:INTEGER FILES
*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Function 1: Prompt user to input 10 integers and store in "input.txt"
void writeInputFile() {
    ofstream outFile("input.txt");
    if (!outFile) {
        cerr << "Error opening input.txt for writing!" << endl;
        return;
    }

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        outFile << num << " ";
    }

    outFile.close();
    cout << "Numbers saved to input.txt\n";
}

// Function 2: Read integers, calculate sum & average, write to "output.txt"
void processNumbers() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (!inFile) {
        cerr << "Error opening input.txt!" << endl;
        return;
    }
    if (!outFile) {
        cerr << "Error opening output.txt!" << endl;
        return;
    }

    vector<int> numbers;
    int num, sum = 0;
    while (inFile >> num) {
        numbers.push_back(num);
        sum += num;
    }

    double average = (numbers.empty()) ? 0 : (double)sum / numbers.size();

    outFile << "Sum = " << sum << endl;
    outFile << "Average = " << average << endl;

    inFile.close();
    outFile.close();

    cout << "Processed results saved to output.txt\n";
}

// Function 3: Display contents of both files
void displayFiles() {
    ifstream input("input.txt"), output("output.txt");

    if (!input || !output) {
        cerr << "Error opening one of the files for reading!" << endl;
        return;
    }

    cout << "\nContents of input.txt:\n";
    string line;
    while (getline(input, line))
        cout << line << endl;

    cout << "\nContents of output.txt:\n";
    while (getline(output, line))
        cout << line << endl;

    input.close();
    output.close();
}

int main() {
    writeInputFile();
    processNumbers();
    displayFiles();
    return 0;
}