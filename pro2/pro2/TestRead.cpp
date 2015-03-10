#include "StdAfx.h"
#include "TestRead.h"


TestRead::TestRead(void)
{
}


TestRead::~TestRead(void)
{
}



void TestRead::testNodes()
{
	double tol = 0.000001;
	cout << "\n Test Nodes";
	Node *n;

	n = model->nodes[33];
	if (n)
		if ( abs( n->x - 8.9150000000090E+1 ) < tol && 
			 abs( n->y - 1.8000000090E+2    ) < tol && 
			 abs( n->z - 7.10000000090E+0   ) < tol ) 
			cout << " ok\n";
		else
			cout << " failed\n";
	else
		cout << " failed\n";
//		   Node                    33     8.91500000000900E+1      1.80000000000000E+2     -7.10000000000000E+0  


}





