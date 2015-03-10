
#include "stdafx.h"

#include "node.h"






Node::Node(void)
{
//	cout << " create node ";
}


Node::~Node(void)
{
//	cout << " destroy node ";
}


// legge i dati usando il fileLoader che gli viene passato
void Node::readFromFileLoader(fileLoader& fL){
	string subs;
	char *s;

	try{
		fL.getWord(&s);
		subs=s;

		//string to 
		this->ID=stol(subs);
		fL.getWord(&s);
		subs=s;
		this->x= stod(subs);
		fL.getWord(&s);
		subs=s;
		this->y = stod(subs);
		fL.getWord(&s);
		subs=s;
		this->z = stod(subs);
	}
	catch(exception& e)
	{ cout << " error Node::readFromFileLoader  " << subs;}

}


void Node::readFromSs(stringstream& ss)
{
	string subs;
	ss >> subs;
	try{
		this->ID=stoi(subs);
		ss >> subs; 
		this->x= stod(subs);
		ss >> subs; 
		this->y = stod(subs);
		ss >> subs; 
		this->z = stod(subs);
	}
	catch(exception& e)
	{ cout << " error ?! " << subs;}
}




// restituisce 
string Node::toString()
{
	string s;
	char c[1000];
	sprintf_s(c,"Node ID: %d x: %g y: %g z: %g \n", ID, x, y, z);
	s = c;
	return s;
}




