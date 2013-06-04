#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   for (int i = 1; i <= 5; i++)
      cout << i << "\t" << i * 10 << "\t" << i * 100 << " \t" << i * 1000 << endl;
   getch(); 
   return 0;
}
