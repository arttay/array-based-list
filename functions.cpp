#include <cstdlib>
#include <iostream>
#include "class.h"
//*****************************
//  libraries for c++
//  includes class header file for 
//  class definitions 
//***************************

using namespace std;

CArList::CArList()
{
    size=10;
    li=0;
      list = new int[size];
      makeEmpty();
    
}                                                                               //end constructor
//***********************
//  default constructor
//  sets var size to 10
//  var li to 0
//  and allocates an array(type int)
//  which is var size large
//  calls makeEmpty function
//  which sets all elements in the 
//  array to 0
//****************************


CArList::CArList(CArList& first)
{
    size=first.size;
    li=first.size;
    list=first.list;
    
    makeEmpty();
}                                                                               //end copy
//*************************************
//  copy constructor
//  sets size equal to size of type first
//  li to size of object first
//  and list to list of object first
//  also calls function makeEmpty(see above)
//**********************************

CArList::CArList(int n)
{
   size=n;
   li=0;
   list=new int[size];
    
    makeEmpty();
}                                                                               //end constructor
//*********************************
//  overloaded constructor(takes int n)
//  sets size equal to n
//  li to 0
//  and allocates a new array of size (var) size
//  calls makeEmty after(see above)
//*************************************


void CArList::add(int value)
{
    if(li <= 10)
    {
      list[li] = value;
      li++;
      }
    else 
    
        cout << "list is full..." << endl;
}                                                                               //end functoin add
//*****************************************
//  function add of class CArList(takes int value)
//  This function is to add an element to the array(list)
//  runs through an if statement while li is less than 10
//  the if statement sets element li of array list 
//  to int value(the paramater)
//  it then increments li by one and checks agian
//  if li is greater than 10 it outputs "the list is full"
//  indicating that the awrray has 10 elements
//*********************************************
void CArList::del(int position)
{
     int i;
   if(position > 0 && position <= size)
   {
     for(i = position-1; i < size; i++) 
     {  
        list[i] = list[i+1];
        list[i+1]=0;
    }
    li--;
}
else 
cout << "number is out of range..." << endl;
}                                                                               //end function del
//*************************************
//   Function del  note: delete is a reserved word =/ 
//   local int i
//   if control statement, makes sure 
//   what position was enterd by the user is 
//   within the rage of the array
//   for statement, uses i to go through the array
//   when it gets to the position entered by the user
//   (list[i+1]=0) it sets it to zero, and then 
//   proceeds to set everythign after it to 0
//*****************************************
ostream& operator<<(ostream& osObject, const CArList& o)
{ 
int i;
for (i=0; i<o.size;i++)
{
    osObject << o.list[i] << endl;
}
return osObject;
}                                                                               //end overload operator
//**************************************
//  overloaded operator function
//  overloads insertion operator
//  intent is to output each element
//  of array list of type o
//  local int i
//  for loop goes through each element in 
//  array list, while i is less than size 
//  of object o
//*************************************



