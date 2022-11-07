#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

string GetWord()
{
    srand(time(NULL));
    int numLines = 0;
    int ranNum;
    fstream myFile;
    string line;
    myFile.open("nouns.txt", ios::in);
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
           numLines++;
        }
        
    }
    myFile.clear();
    myFile.seekg(0);
    ranNum = 1+(rand() % numLines); 
    for (int i = 0; i < ranNum; i++) {
        getline(myFile, line);
    }
    myFile.close();
    return line;


    


}