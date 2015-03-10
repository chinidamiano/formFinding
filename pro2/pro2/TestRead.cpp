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
	if ( ( model->nodes[33].x - 8.9150000000090E+1 ) < tol && 
		 ( model->nodes[33].y - 1.8000000090E+2 ) < tol && 
		 ( model->nodes[33].z - 7.10000000090E+0 ) < tol ) 
		cout << " ok\n";
	else
		cout << " failed\n";
//		   Node                    33     8.91500000000900E+1      1.80000000000000E+2     -7.10000000000000E+0  


	cout << " Test Nodes";
	if ( ( model->nodes[3371].x - 5.31500000000000E+1 ) < tol && 
		 ( model->nodes[3371].y -  7.87500000000000E+1 ) < tol && 
		 ( model->nodes[3371].z - (-1.00000000000000E-1) ) < tol ) 
		cout << " ok\n";
	else
		cout << " failed\n";
	cout << model->nodes[3371].toString();
//   Node                  3371     5.31500000000000E+1      7.87500000000000E+1     -1.00000000000000E-1  


}





