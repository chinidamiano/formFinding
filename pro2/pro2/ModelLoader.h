#pragma once
#include "stdafx.h"
using namespace std;


class ModelLoader
{
public:

	string fileName;
	Model *model;

	ModelLoader(void);
	~ModelLoader(void);

	void loadModel();

	void printNodes();


};

