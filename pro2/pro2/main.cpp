// main.cpp : definisce il punto di ingresso dell'applicazione console.
//

// librerie
#include "stdafx.h"
#include <iostream>
#include <set>

// include le funzioni di std:: nel namespace attuale
// :: si chiama scope operator, (come context in mathematica)


using namespace std;

//FUFFA, funzione di prova
int xxx(){
	set<int> myset;
	set<int>::iterator it;

	// set some initial values:
	for (int i=1; i<=5; i++) myset.insert(i*10);    // set: 10 20 30 40 50


//	if (it!=set<int>::end)
	try{
		it=myset.find(99);
		if (it != myset.end())
			cout <<" found, it is <"<< *it <<">\n";
		else
			cout << " it is NULL";


	}catch(exception& e) {cout <<" error: " << e.what() << "\n";}
	//else
	//	cout << " it is NULL";
	//	
	system("PAUSE");
	exit(0);
}


int main(int argc, char* argv[])
{

//	string fileName="c:\\bin\\dev\\txt\\SCE-002-IP01-FM112_02.txt";
	string fileName="c:\\bin\\dev\\txt\\SCE_002_ridotto.txt";
	

	Model model;

	
	ModelLoader modelLoader;
	TestRead testRead;

	modelLoader.model= &model;
	modelLoader.fileName = fileName;

	model.clearModel();

	modelLoader.loadModel();

	testRead.model=&model;
	testRead.testNodes();

	model.printModelSummary();
	modelLoader.printNodes();
	
	model.clearModel();
	model.printModelSummary();
	system("PAUSE");
	
	return 0;
}


