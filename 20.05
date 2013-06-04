#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
bool flip();

using namespace std;

int main()
{
   int orel = 0, reshka = 0;
   
   srand(time(NULL));
   
   for (int i = 1; i <= 100; i++)
   {
      if (flip() == false)
      {
         cout << "Orel" << endl;
         orel++;
      }
      else
      {
         cout << "Reshka" << endl;
         reshka++;
      }
   }
   
   cout << endl << "Orel vipal " << orel << " raz" << endl
        << "Reshka vipala " << reshka << " raz" << endl;
     getch();
   return 0;
}

bool flip()
{
   int var = rand();
   
   if (var % 2 == 0)
      return false;
   else
      return true;
}
