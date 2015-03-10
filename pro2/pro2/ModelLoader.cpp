#include "StdAfx.h"
#include "ModelLoader.h"
#include "fileLoader.h"


ModelLoader::ModelLoader(void)
{
	
}


ModelLoader::~ModelLoader(void)
{

}




void ModelLoader::loadModel(void)
{
	// var file stream
	ifstream ifs;
	// apre il file
    ifs.open (fileName, ifstream::in);

	//check file open, altrimenti dà errore e esce
	if (!ifs){
		cout << " ERRORE : file non trovato, <" << fileName << ">\n";
		system("PAUSE");
		exit(0);
	}


	fileLoader fL;
	char *s1, *s2;

	fL.fileName=fileName;
	fL.loadFile();

//	fL.getLine(&s1);
	//	fL.getWord(&s2);




	string line;
	string subs;

	int i=0;
	int nNodes=0;
	int jNode=0;

	
	Node n;

	char *line1;
	
	//NOTA legge fino a 10 righe
//	while ( getline(ifs, line) && (i < 5)) 
//	while ( getline(ifs, line) ) 
	while (fL.getLine(&line1))
	{
		// variabile helper di tipo "string stream", serve per splittare le stringhe
		// fa anche l'inizializzazione di ss utilizzando il valore line.
//		stringstream ss ( line );
		stringstream ss ;

		// tira fuori una string, e ss si accorcia.
		subs="";
		fL.getWord(&s2);
		//ss >> subs; 
		subs=s2;

		// legge un NODE
		if (subs=="Node"){
			// file section:	NODE COORDINATES

			n.readFromFileLoader(fL);

			// letto il nodo, lo mette nel container giusto
			model->nodes[n.ID] = n;
				
			i++;
		}

		// TODO: tutti gli altri tipi
		else if (subs=="FreedomCase"){
		}
		else if (subs=="Group"){
		}
		else if (subs=="LoadCase"){
		}
		else if (subs=="NDFreedom"){
		}
		else if (subs=="NdForce"){
		}
		else if (subs=="BeamProp" || subs=="CutoffProp" || subs=="TrussProp" ){
		}
		else if (subs=="Beam"){
			// file section:	BEAM ELEMENTS
			// Beam.cpp
		}


		else if (subs=="Tri3"){
			//		/ PLATE ELEMENTS
		}
		else if (subs=="Quad4"){
			//		/ PLATE ELEMENTS
		}

	}

cout << "finito: letti " << i << " elements \n";
}



void ModelLoader::printNodes(void)
{
	int i;
	cout << " print Nodes \n" ;
	cout << " Nodes count: " << model->nodes.size() <<"\n";

	// TODO mettere un ITERATOR
	for (i=1;i<=10;i++){
		//cout << model->nodes[i].toString(); 
	}

	// show content:
	for (map<long,Node>::iterator it=model->nodes.begin(); it!=model->nodes.end(); ++it)
		std::cout << it->first << " => " << it->second.toString() ;
	


}
