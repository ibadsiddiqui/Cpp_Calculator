#include"input.h"
#include<stdlib.h>
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
			system("cls");
			a.input();
			a.Basic();
			break;
		case 2:
			system("cls");
			a.squaring();
			break;
		case 3:
			system("cls");
			a.trignometry();
			break;
		case 4:
			system("cls");
			a.Base_N();
			break;
		case 5:
			system("cls");
			a.Matrix();
			break;
		case 6:
			system("cls");
			a.Equations();
			break;
	}
	main();
}
