#pragma once
#include <string>
#include "fileLoader.h"
using namespace std;

class Node
{
public:
	Node(void);
	~Node(void);

	double x,y,z;
	long ID;

	void readFromSs(stringstream& ss);
	void readFromFileLoader(fileLoader& fL);

	string toString();
};

