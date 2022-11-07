#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void GetWord()
{
    srand(time(NULL));
    int numLines = 0;
    fstream myFile;
    string line;
    myFile.open("nouns.txt", ios::in);
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            //cout << line << endl;
            numLines++;
            cout << endl;
        }
        getline(myFile, line);
        myFile.close();
    }

    for (int i = 0; i < numLines; i++) {
        cout << line << endl;
    }
    


}