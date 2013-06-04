#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{  
   cout<<"N"<<"\n";
	for (int i = 1; i <= 5; i++)
	{


		cout << i<<"\n" ;
	}
	cout<<"10*N"<<"\n";
	for (int i = 10; i <= 50; i+=10)
	{


		cout << i <<"\n" ;
	}
	cout<<"100*N"<<"\n";
	for (int i = 100; i <= 500; i+=100)
	{


		cout << i <<"\n" ;
	}
	cout<<"1000*N"<<"\n";
	for (int i = 1000; i <= 5000; i+=1000)
	{


		cout << i << endl;
	}
	getch(); 
	return 0;
}
