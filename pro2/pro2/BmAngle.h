#pragma once
class BmAngle
{
public:

	long ID;
	double rotation;

	BmAngle(void);
	~BmAngle(void);

	void readFromFileLoader(fileLoader& fL);

	string toString();
};

