#include "header.h"
#include <iostream>

using namespace std;
ostream& operator<< (ostream& out, dominos dom) {

	out << "(" <<	dom.getdomino()<< ")";
	return out;
}
void dominos::setleft(int l)
{
	left = (0 <= l <= 6) ? l : 0;
}
void dominos::setright(int r)
{
	right = (0 <= r <= 6) ? r : 0;
}
int dominos::getleft()
{
	return left;
}
int dominos::getright()
{
	return right;
}
string dominos::getdomino()
{
	if(left>=right)
	{
		domino = to_string(left) + "_" + to_string(right);
    }
	else
	{
		domino = to_string(right) + "_" + to_string(left);

	}
	return domino;
}
