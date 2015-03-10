#include "StdAfx.h"
#include "fileLoader.h"


fileLoader::fileLoader(void)
{
}


fileLoader::~fileLoader(void)
{
}

void fileLoader::loadFile(void)
{
	ifstream file( fileName , ios::binary);
	file.seekg(0, ios::end);
	bufferSize = (long) file.tellg();
	file.seekg(0, std::ios::beg);

	buffer = new char[bufferSize];

	if (file.read(buffer , bufferSize)) {
		cout << "Begin Read, file size: " << bufferSize << "\n";
	}
	else {
		cout << " error reading file ?! ";
	}

	iC=0;
}


// getLine legge una line (la legge in-place) dal buffer
// a fine buffer, restisuisce 0
// out: s: la linea letta
int fileLoader::getLine(char** s){
	if(iC>=bufferSize)
		return 0;

	iniLine = iC;

	long i2 = iC;
	while ( ( buffer[i2]!=10 ) && ( buffer[i2]!=13 ) && ( i2 < bufferSize ) )
		i2++;

	endLine = i2;

	buffer[i2]=0;
//	cout << " readLine: " << &(buffer[iC]) <<"\n" ;
//	cout << "length: " << (endLine-iniLine+1) <<  " \n";

	*s = &(buffer[iC]) ;
	//iC = i2 + 1;
	iC = i2 + 2;

	iD = iniLine;

	return 1;
}


// getWord legge una parola (in-place) dal buffer
// nota: getLine legge una linea intera (fino a ritorno a capo), getWord "consuma" parole da quella linea.
// quando ha esaurito la linea, getWord restituisce 0.
// out: s: la parola letta
//TODO: usare nomi di variabili piu significative..
int fileLoader::getWord(char** s){

	while ( ( buffer[iD]==' ' ) && ( buffer[iD]!=10 ) && ( buffer[iD]!=13 ) && ( iD < endLine ) )
		iD++;

	iniWord=iD;
	long i3 = iD;

	if (i3>=endLine) {
		iniWord = endLine;
		*s = &(buffer[endLine]) ;
//		printf("getWord: <%s>\n", &(buffer[iniWord] ) ) ;
		return 0;
	}

	while ( ( buffer[i3]!=' ' ) && ( buffer[i3]!=10 ) && ( buffer[i3]!=13 ) && ( i3 < endLine ) )
		i3++;

	endWord = i3;
	buffer[i3] = 0;

	iD= i3 + 1;
	*s = &(buffer[iniWord]) ;

//	cout << " getWord: <" << &(buffer[iniWord] ) << ">\n" ;
//		printf("getWord: <%s>\n", &(buffer[iniWord] ) ) ;

	return 1;

}









