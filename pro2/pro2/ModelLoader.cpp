#include "StdAfx.h"
#include "ModelLoader.h"


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
		cout << " ERRORE : file non trovato, <" << fileName << ">";
		system("PAUSE");
		exit(0);
	}

	string line;
	string subs;

	int i=0;
	int nNodes=0;
	int jNode=0;

	
	Node n;
	
	// getline legge una riga 
	//NOTA legge fino a 10 righe
	while ( getline(ifs, line) && (i < 10)) 
	{
		// variabile helper di tipo "string stream", serve per splittare le stringhe
		// fa anche l'inizializzazione di ss utilizzando il valore line.
		stringstream ss ( line );

		// finchè ss non è vuoto
		while (ss) {
			
			// tira fuori una string, e ss si accorcia.
			ss >> subs; 

//			cout << "Substring: " << subs << endl; 


			// legge un NODE
			if (subs=="Node"){
				// legge i numeri successivi e li mette nella variabile Node n
				// todo.. error checking?
				ss >> subs;
				n.ID=stoi(subs);
				ss >> subs; 
				n.x= stod(subs);
				ss >> subs; 
				n.y = stod(subs);
				ss >> subs; 
				n.z = stod(subs);

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
			}
			else if (subs=="Beam"){
			}

		}
	}

cout << "finito: letti " << i << " elements \n";
}



void ModelLoader::printNodes(void)
{
	int i;
	cout << " print Nodes \n" ;

	// TODO mettere un ITERATOR
	for (i=0;i<10;i++){
		cout << model->nodes[i].toString(); 
}

}
