#include <iostream>#include <string>using namespace std;bool isVowel(char ch) {
ch = tolower(ch); return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
ch == 'u');}string removeVowels(const string& input) { string result; for
(char ch : input) { if (!isVowel(ch)) { result += ch; }
} return result;}int main() { string userInput; cout << "Enter a
string: "; getline(cin, userInput); string noVowels =
removeVowels(userInput); cout << "String without vowels: " << noVowels << endl;
return 0;}
