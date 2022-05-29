#include "circle.h"
#include "parallelogram.h"
#include "triangle.h"
#include "square.h"
#include "paralelepiped.h"
#include "line.h"
#include "point.h"
#include "figures.h"
#include "container.h"
#include <iostream>
using namespace std;

int main()
{
	Point<int>t1;
	Point<int>t2(2, 3, 4);
	Point<int>t3(0, 3, 8);
	Point<int>t4(t3);
	Line<int>l1(t1, t3);
	Circle<int>c1(l1);
	Container<int>F;
	F.Edit(t1);
	F.Edit(t2);
	F.Edit(l1);
	F.Edit(c1);
	cout << F << endl;
	F.Delete(l1);
	return 0;
}