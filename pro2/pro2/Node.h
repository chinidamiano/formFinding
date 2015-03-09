#pragma once
#include <string>
using namespace std;

class Node
{
public:
	Node(void);
	~Node(void);

	double x,y,z;
	long ID;

	string toString();
};

