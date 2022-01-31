#pragma once // prevents multiple definitions

#include <iostream>
#include <string>  
#include <sstream>
using namespace std;

/*
Exercise 1: implements function that help us to practice
pointers and references in a simple way.
*/
string ex1();

string ex1()
{
   stringstream buffer;

   // Define x; an integer variable x=5;
   int x=5; // TODO: fix

   // Pointer is used to store address of variable
   // Define y; a pointer to an integer, then initialize it with the address of x;
   int *y = &x; // TODO: fix

   buffer << "x = " << x << ", *y = " << *y << endl;
   // TODO: Apply following operation: x = x + 2;
   // What do you think the output is going to be?
   x = x + 2; // TODO: fix

   buffer << "x = " << x << ", *y = " << *y << endl;


   
   // Apply following operations:
   // *y = *y + 7;  x = *y - 2;
   // What do you think the output is going to be?
   x = *y - 2; // TODO: fix
   *y = *y + 7; // TODO: fix

   buffer << "x = " << x << ", *y = " << *y << endl;
   
   cout << buffer.str() << endl;
   return buffer.str();
}

