#pragma once
#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "ArrayList.h"

using namespace std;
template<class T>
class ArrayList {
public:
	int size;
	int capacity;
	T *list = NULL;

	ArrayList(int capacity);
	~ArrayList();

	bool addEntry(T entry);
	bool add(T entry, int index);
	bool remove(int index);
	bool remove(T entry);
	/*boolean clear();
	boolean contains(T entry);
	void set(T entry);
	int getSize();
	ing getCapacity();
	T get();*/


};
#endif 
