#include "stdafx.h"
#include <iostream>



using namespace std;



int main()

{


   const int size = 20;

   int array[size], var;

   bool label = true;

   

 

   cout << "Enter 20 numbers in an interval from 10 up to 100" << endl << endl;

   


   for(int i = 0; i < size; i++)

   {

      //запрашиваем число, запоминаем его в переменную var

      cout << "Enter: ";

      cin >> var;

      

   

      if(var >= 10 && var <= 100)

      {

   
         array[i] = var;

         

    
         for(int j = 0; j < i; j++)

         {


            if(array[j] == array[i])

               label = false;

         }

         

         if(label == true)

            cout << array[i] << endl;

      }

   

      else

      {

         cout << "Error! Incorrect interval" << endl;

         i--;

      }

      


      label = true;

   }

   

   return 0;

}
