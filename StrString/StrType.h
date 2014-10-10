#ifndef STR_TYPE
#define STR_TYPE

#include <fstream>
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

const int MAX_CHARS = 100;

enum InType { ALPHA_NUM, ALPHA, NON_WHITE, NOT_NEW };

class StrType
{
public:

	void MakeEmpty();
	//void GetString(bool skip, InType charsAllowed); Nie uzywana
	void GetStringFile(bool skip, InType charsAllowed, std::ifstream& inFile);
	void PrintToScreen(bool newLine);
	void PrintToFile(bool newLine, std::ofstream& outFile);
	int LengthIs();
	void CopyString(StrType& newString);
private:
	char letters[MAX_CHARS + 1];
};
#endif