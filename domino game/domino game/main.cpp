#pragma once
#include <iostream>
#include <string>
using namespace std;
class  dominos
{
	int left=0;
	int right=0;
	string domino;
public:
	dominos(int l=0, int r=0)
	{
		left = (0 <= l <= 6) ? l : 0;
		right = (0 <= r <= 6) ? r : 0;
	}
	friend ostream& operator<< (ostream& out, dominos dom);
	void setleft(int l);
	void setright(int r);
	int getleft();
	int getright();
	string getdomino();

};
