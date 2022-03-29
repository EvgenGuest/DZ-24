#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s) {
	string w1;
	string w2;
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
		w1 += s[i];
	}
	for (int i = w1.length() - 1; i >= 0; i--)
		w2 += w1[i];
	if (w1 == w2)
		return true;
	return false;
}

int sings(string s) {
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == '!')
			count++;
	}
	return count;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задача 1.
	char sym = 'l';
	string str = "Hello world!";
	string newStr;
	cout << "Задача 1.\n";
	cout << "str = " << str << "\n";		
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == sym)
			newStr += str[i];
	}	
	cout << "sym = " << sym << "\n";
	cout << "newStr = " << newStr << "\n\n";
	
	//Задача 2
	string word;
	cout << "Задача 2.\nВведите слово:";
	getline(cin, word);
	cout << palindrome(word) << "\n\n";

	//Задача 3.
	string str2;
	cout << "Задача 3.\nВведите строку: ";	
	getline(cin, str2);	
	cout << endl;	
	cout << "Знаков препинания в веденной строке: " << sings(str2) << endl;

	return 0;
}
