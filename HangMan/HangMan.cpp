// HangMan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string word;
string wordGuessed;
int lives;

void StartGame();
void CreateGame();
void CreateHangman();


bool CheckGuess(char guess) {
    cout << "\n\n";
    int index = word.find(guess);
    if (index == std::string::npos) {
        cout << "Wrong!\n";
        return false;
    }
    else {
        std::string strGuess(1, guess);
        wordGuessed.replace(index, 1, strGuess);
        cout << "Correct\n";
        return true;
    }

}

void StartGame() {
    char guess;

    std::cout << "Welcome to Hangman!\n";
    cout << "Your word is " << word.length() << " letters long\n";
    while (word != wordGuessed) {
        cout << "\nGuess a letter:";

        CreateHangman();

        for (int i = 0; i <= wordGuessed.length(); i++) {
            cout << wordGuessed.at(i);
        }

        cin >> guess;
        CheckGuess(guess);

        cout << wordGuessed;
    }




    std::cin.get();
    std::cin.get();

}


void CreateHangman() {
    //6 lives: leg->leg->waist->arm->arm&neck->head
    cout << "\n     _________\n";
    cout << "    |        | \n";
    cout << "    |        | \n";
    for (int i = 1; i <= lives; i++) {
        switch (i) {
        case 1:
            cout << "    |        O \n";
            break;
        case 2: 
            if (lives != 2) break;
            cout << "    |       \\|\n";
            break;
        case 3:
            cout << "    |       \\|/\n";
            break;
        case 4:
            cout << "    |        |\n";
            break;
        case 5:
            if (lives != 5) break;
            cout << "    |       / \n";
            break;
        case 6:
            cout << "    |       / \\\n";
            break;
        }
    }
  
    cout << "    |       \n";
    cout << "____|______  \n";


}
     

void CreateGame() {

    word = "cat";
    wordGuessed = "";
    lives = 6;
    for (int i = 0; i < word.length(); i++) {
        wordGuessed += "_";
    }

    StartGame();
    
    

}



int main()
{
    CreateGame();

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

