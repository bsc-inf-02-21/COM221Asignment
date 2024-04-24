#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int CountVowels(const string& text) {
    int num_vowels = 0 ;
    string vowel = " AEIOUaeiou";
    for (char chr : text) {
        if (vowel.find (chr) != string :: npos ) {
            num_vowels++;
        }
    }
    return num_vowels;
}

int countword (const string& text) {
    stringstream ss (text);
    string words;
    int counting = 0;
    while (ss >> words) {
        counting++;
    }
    return counting;
}

string reverse(const string& text) {
    string reverse_txt = text;
    reverse(reverse_txt.begin(), reverse_txt.end());
    return reverse_txt;
}

string capitalizedsecondletter(const string& text) {
    stringstream ss(text);
    string words;
    string result;
    while (ss >> words) {
        if ( words.length() >= 2) {
            words[1] = toupper(words[1]);
        }
        result = result+ words + " ";
    }
    return result;
}

int main() {
    ifstream file("sample.txt");
    string fileData;
    if (!file.is_open()) {
        cout << "Failed to open the file." <<"\n";
        return 1;
    }
    string lines;
    while (getline(file, lines)) {
        fileData += lines;
    }
    file.close();

    cout << "Number of vowels in the sample.text file statement is " << CountVowels(fileData) << endl;
    cout << "Number of words in the sample.text file statement is " << countword(fileData) << endl;
    cout << "Reversed statement " << reverse(fileData) <<"\n";
    cout << "Statement with second letter of each word being capitalized " << capitalizedsecondletter(fileData) << endl;

    return 0;
}
