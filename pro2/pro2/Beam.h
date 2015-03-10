#pragma once
class Beam
{
public:

	long ID, IDGroup, ID_beamProperty, node1, node2;

	Beam(void);
	~Beam(void);

	void readFromFileLoader(fileLoader& fL);

	string toString();

};

