#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;
    myFile.open("words.txt", ios::out); //name of the file & if it's read or write
    if (myFile.is_open()) {
        myFile << "Hello\n";
        myFile << "Second\n";
        myFile.close();
    }
    myFile.open("words.txt", ios::app); //name of the file & if it's read or write
    if (myFile.is_open()) {
        myFile << "Hello2\n";
        myFile.close();
    }

    std::cout << "Hello World!\n";
}
