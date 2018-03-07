/**
@file:  ArrayList.h
@purpose: Create and manages an array list

@author Jeff Williams
@date 3/6/2018
*/

#pragma once
#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "ArrayList.h"

using namespace std;


template<class T>
class ArrayList {
public:
	int size;  /* entries in list */
	int capacity; /* max number of entries list can hold */
	T *list = NULL;  /* created in constuctor */

	/* 
	@Name: Constructor 
	@Summary: Creates list.

	@param: capacity - max number of elements the list can hold.
	*/	
	ArrayList(int capacity); 

	/* ~Destructor
	@Summary: Destroys list.
	*/
	~ArrayList();

	/*
	@Name: add
	@Summary: Add entry to the end of list.

	@param: Entry to be added.
	@return:  true => successful, otherwise false
	*/
	bool add(T entry);

	/*
	@Name: add
	@Summary: Add entry to specified index.

	@param: entry - to be added.
	@param: index - to add entry
	@return:  true => successful, otherwise false
	*/
	bool add(T entry, int index);

	/*
	@Name: getEntry
	@Summary: Retrieve entry from specified index.

	@param: index - to be retrieved
	@ret Entry => successful, otherwise Null
	*/
	T getEntry(int index);

	/*
	@Name: remove
	@Summary: Remove entry from specified index.

	@param: index - to be removed
	@return:  true => successful, otherwise false
	*/
	bool remove(int index);

	/*
	@Name: remove
	@Summary: Remove specified entry.

	@param: entry - to be removed
	@ret true => successful, otherwise false
	*/
	bool remove(T entry);

	/*
	@Name: clear
	@Summary: Clears all the elements from list.

	@ret true => successful, otherwise false
	*/
	bool clear();

	/*
	@Name: contains
	@Summary: Searches for a specified entry.

	@param: entry - to search list for
	@ret true => successful, otherwise false
	*/
	bool contains(T entry);

	/*
	@Name: set
	@Summary: Set a specified index to the entry.

	@param: entry - data to be set
	@param: index - to set entry
	@ret true => successful, otherwise false
	*/
	bool set(T entry, int index);

	/*
	@Name: getize
	@Summary: Returns number of entries in list.

	@ret number of entries
	*/
	int getSize();

	/*
	@Name: getCapacity
	@Summary: Returns max number of entries list can hold.

	@ret max capacity
	*/
	int getCapacity();
};
#endif 
