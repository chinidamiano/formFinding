// main.cpp : definisce il punto di ingresso dell'applicazione console.
//

// librerie
#include "stdafx.h"



// include le funzioni di std:: nel namespace attuale
// :: si chiama scope operator, (come context in mathematica)


using namespace std;



int main(int argc, char* argv[])
{
	
	string fileName="c:\\bin\\dev\\txt\\SCE-002-IP01-FM112_02.txt";


	Model model;
	ModelLoader modelLoader;
	TestRead testRead;

	modelLoader.model= &model;
	modelLoader.fileName = fileName;

	model.clearModel();

	modelLoader.loadModel();

//	modelLoader.printNodes();

	testRead.model=&model;
	testRead.testNodes();

	model.printModelSummary();
	system("PAUSE");
	
	model.clearModel();
	model.printModelSummary();
	system("PAUSE");
	
	return 0;
}


