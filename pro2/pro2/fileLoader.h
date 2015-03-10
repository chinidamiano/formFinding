#pragma once
using namespace std;

class fileLoader
{
public:
	string fileName;
	char* buffer;
	long iC, iD;
	long bufferSize, iniLine, endLine, iniWord, endWord;

	fileLoader(void);
	~fileLoader(void);

	void loadFile();
	int getLine(char** s);
	int getWord(char** s);
};

