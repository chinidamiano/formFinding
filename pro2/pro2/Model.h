#pragma once
#include "stdafx.h"
using namespace std;


class Model
{
public:

	map<int, FreedomCase> freedomCases;
	map<int, Node> nodes;
	map<int, Beam> beams;

	//TODO aggiungere tutte le map per contenere i dati

	Model(void);
	~Model(void);

	void clearModel();
};

