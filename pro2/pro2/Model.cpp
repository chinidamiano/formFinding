#include "StdAfx.h"
#include "Model.h"


Model::Model(void)
{
}


Model::~Model(void)
{
}


// clear all the containers
void Model::clearModel(){
	
	// clear maps

	//TODO!!
	// loop and delete pointed objects
	freedomCases.clear();
	nodes.clear();

}



// TODO: stampare quanti elementi ci sono in ogni container (num. nodi, num. Beam, etc)
void Model::printModelSummary(){
	
	cout << "\n MODEL SUMMARY       ******************";
	cout << "\nnodes count: " << nodes.size();
	cout << "\nfreedomCases count: " << freedomCases.size();
	cout << "\n END MODEL SUMMARY       ******************\n";



}



