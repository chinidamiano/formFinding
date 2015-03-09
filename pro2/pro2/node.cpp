
#include "stdafx.h"

#include "node.h"






Node::Node(void)
{
}


Node::~Node(void)
{
}



string Node::toString()
{
	string s;
	char c[1000];
	sprintf_s(c,"Node  x: %g y: %g z: %g \n",x,y,z);
	s = c;

	return s;
}




