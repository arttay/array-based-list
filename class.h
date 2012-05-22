#ifndef CARLIST_H
#define CARLIST_H

#include <cstdlib>
#include <iostream>
#include <cctype>
#include <locale>

using namespace std;


class CArList
{
//**************
// start class CArlist
//************
    public:
        CArList();
//***************
// default constructor
//****************
        ~CArList();
//*******************
// destructor
//*****************
        CArList(CArList& first);
//*******************
// copy constructor
//*****************
        CArList(int);
//*****************
// random constructor
//****************

        void add(int);
        void del(int);
//**************************
// member functions, adds numbers 
// and deletes numbers from 
// array based list
//****************************
        
        
        friend ostream& operator<<(ostream&, const CArList&);
//******************************
//  friend function(overloaded operator)
//******************************

        
       
        void makeEmpty();
//*******************************
// member functions 
// 
// makeEmpty sets all elements in array to 0
//********************************
        
        
    private:
         int *list;
         int size;
         int li;   
//***************************
//  private var's
//  list is a pointer <_<
//
//****************************
  
};
inline CArList::~CArList()
{
 delete list;   
}
//************************
// inline function, descructor
// deallocates list
//*************************



inline void CArList::makeEmpty()
{
 int i;
 for(i=0; i<size;i++)
    list[i]=0;
    
    li=0;   
    
}
//*************************
// inline function makeEmpty
// local int i
// for loop, while size is greater than i
// sets all list elements to 0
//****************************

#endif












