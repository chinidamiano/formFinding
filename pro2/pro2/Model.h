#pragma once
#include "stdafx.h"
using namespace std;


class Model
{
public:

	map<long, FreedomCase> freedomCases;
	map<long, Node> nodes;
	map<long, Beam> beams;

	//TODO aggiungere tutte le map per contenere i dati

	Model(void);
	~Model(void);

	void clearModel();
	void printModelSummary();
};

