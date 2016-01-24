#include"input.h"
using namespace std;
main()
{
	complex a;
	int no;
	cout<<"Select Mode:\n1)Simple Operations\n"
		<<"2)Squaring \n3)Trignometry \n4)Base_N \n5)Matrix \n6)Equation\n";
	cin>>no;
	switch(no)
	{
		case 1:
			a.input();
			a.Basic();
			break;
		case 2:
			a.squaring();
			break;
		case 3:
			a.trignometry();
			break;
		case 4:
			a.Base_N();
			break;
		case 5:
			a.Matrix();
			break;
		case 6:
			a.Equations();
			break;
	}
}
