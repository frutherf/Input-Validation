#include <ctype.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

char get_char_from_user();
string get_word_from_user();
string get_sentence_from_user();
int get_int_from_user();
double get_float_from_user();

// Written by Lisa Dion,
    // Senior Lecturer in the department of Computer Science at the University of Vermont
int main() {
    // Character Input
    char letter = get_char_from_user();;
    cout << "You entered the character: " << letter << endl;

    // Word Input
    string word = get_word_from_user();
    cout << "You entered the word: " << word << endl;

    // Sentence Input
    string sentence = get_sentence_from_user();
    cout << "You entered the sentence: " << sentence << endl;

    // Int Input
    int num = get_int_from_user();
    cout << "You entered the number: " << num << endl;

    // Double Input
    double flo = get_float_from_user();
    cout << "You entered the floating-point number: " << flo << endl;

    return 0;
}

// Written by Francesca Rutherford
char get_char_from_user() {
    // NOTE: a char is not restricted to an alphabet letter
    // Function to validate the user's input of a character of length 1
    string letterInput;

    while (true) {
        cout << "Enter a single character: ";
        getline(cin, letterInput);

        // If the input is valid
            // I decided not to accept white space as a valid input
        if (letterInput.length() == 1 && !isspace(letterInput[0])) {
            return letterInput[0];
        }
        // If the user inputs whitespace or only hits enter/return
        else if (isspace(letterInput[0]) || letterInput.empty()) {
            cout << "No input. ";
        }
        else {
            cout << "Invalid input. ";
        }
    }
}

string get_word_from_user() {
    // Function to validate the user's input of a word/string with no whitespace
    string wordInput;

    while (true) {
        cout << "Enter a single word: ";
        getline(cin, wordInput);

        // Assume all input is valid unless proving otherwise
        bool hasWhiteSpace = false;

        // Determine if any of the characters in the inputted string are a space --
            // meaning there is more than 1 word
        for (char c : wordInput) {
            // If so, change the boolean to true -- this means the input is invalid
            if (isspace(c)) {
                hasWhiteSpace = true;
            }
        }

        if (wordInput.empty()) {
            cout << "No input. ";
        }
        else if (hasWhiteSpace) {
            cout << "Invalid input. ";
        }
        else {
            return wordInput;
        }
    }
}

string get_sentence_from_user() {
    // NOTE: a sentence does NOT need punctuation or syntax validation
    // Function to validate the user's input of a sentence until the user hits enter/newline
    string sentenceInput;

    while (true) {
        cout << "Enter a sentence: ";
        getline(cin, sentenceInput);

        if (sentenceInput.empty()) {
            cout << "No input. ";
        }
        // As long as the input is not empty, it is valid
        else {
            return sentenceInput;
        }
    }
}

int get_int_from_user() {
    // Function to validate the user's input of a int with nothing else on the same line of input
    string numberInput;
    int number;

    while (true) {
        cout << "Enter a number: ";
        getline(cin, numberInput);

        stringstream ss;
        ss << numberInput;
        ss >> number;

        if (numberInput.empty()) {
            cout << "No input. ";
        }
        // eof: if it begins with an integer but contains non-integers after
        else if (!(ss) || (!(ss.eof()))) {
            cout << "Invalid input. ";
        }
        else {
            return number;
        }
    }
}

double get_float_from_user() {
    // NOTE: a float does not need to have a decimal part (meaning an integer is a valid float)
    // Function to validate the user's input of a float with nothing else on the same line of input
    string floatInput;
    double number;

    while (true) {
        cout << "Enter a floating-point number: ";
        getline(cin, floatInput);

        stringstream ss;
        ss << floatInput;
        ss >> number;

        if (floatInput.empty()) {
            cout << "No input. ";
        }
        // eof: if it begins with an integer but contains non-integers after
        else if (!(ss) || (!(ss.eof()))) {
            cout << "Invalid input. ";
        }
        else {
            return number;
        }
    }
}