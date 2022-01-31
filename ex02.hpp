#include <iostream>
#include <string>  
#include <sstream>
using namespace std;

// Exercise 2
string ex2();

struct mydata
{
   char const* name_;
   bool hero_;
};
mydata heroes[]
{
   { "Spider Man", true },
{ "The Joker", false },
{ "Doctor Octopus", false },
{ "Thor", true },
{ "Batman", true },
{ "Loki", false }
};

string printdata(mydata* p)
{
   stringstream buffer;
   string name = p.name_;// TODO: assign the const name_ in p to the variable name;
   
   buffer << "Hello. I am " << name << ". ";
   if (p.name_ == "hero")// TODO: if p is a hero
      buffer << "I am a hero." << endl;
   else
      buffer << "I am a villain." << endl;
   return buffer.str();
}

string ex2(){
   stringstream buffer;
   buffer << sizeof(mydata) << " " << sizeof(mydata*) << endl;

  //  // Use a For Loop to call our printdata(mydata*) function
  //  // over all our heroes[]  
  //  for (; ;) // TODO: fix as descripted in the comment right above
  //  {
  //     buffer << printdata(p);
  //  }

  //  return buffer.str();
  return "";
}