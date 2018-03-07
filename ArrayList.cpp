/**
@file:  ArrayList.cpp
@purpose: Function definitions for creating and managing an array list

@author Jeff Williams
@date 3/6/2018
*/
#include "stdafx.h"
#include <iostream>
#include "ArrayList.h"

#define CLEAR(array) memset(&(array), 0, sizeof(array))

using namespace std;

/* Constructor to create list */
template<class T>
ArrayList<T>::ArrayList(int capacity) {
	list = new T[capacity];
	this->capacity = capacity;
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*Destructor to destroy list */
template<class T>
ArrayList<T>::~ArrayList() {
	delete[] this->list;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Add to end of list */
template<class T>
bool ArrayList<T>::add(T entry) {
	int lastIndex = 0;

	/* empty list */
	if (this->size == 0) {
		list[lastIndex] = entry;
		this->size++;
	}

	/* free space to add entry */
	if (this->size < this->capacity) {
		list[size] = entry;
		size++;
	}
	/* full list */
	else {  
		return false;
	}
	return true;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Add to specified index */
template<class T>
bool ArrayList<T>::add(T entry, int index) {

	/* empty or full list */
	if (this->size == 0 || this->size == capacity) {
		return false;
	}

	/* index is within range */
	else if (this->size < index) {
		return false;
	}
	/* add to list */
	else {
		for (int i = this->size; i > index; i--) {
			list[i] = list[i - 1];
		}
		list[i] = entry;
		this->size++;
	}
	return true;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Remove specified index */
template<class T>
bool ArrayList<T>::remove(int index) {
	
	/* empty or index out of range */
	if (this->size == 0 || index > this->size) {
		return false;
	}

	/* index within range */
	else {
		for (int i = index; i < this->size; i++) {
			list[i] = list[i + 1];
		}
		this->size--;
	}
	return true;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Search and remove specified entry from list */
template<class T>
bool ArrayList<T>::remove(T entry) {
	int foundIndex = 0;

	/* empty list */
	if (this->size == 0) {
		return false;
	}

	/* search unsorted array */
	for (int i = 0; i < this->size; i++) {
		if (entry == list[i]) {
			foundIndex = i;
			break;
		}
	}
	return this->remove(foundIndex);
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Removes all entries from list */
template<class T>
bool ArrayList<T>::clear() {
	CLEAR(this->list);
	return true;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Search for specified entry */
template<class T>
bool ArrayList<T>::contains(T entry) {

	/* search unsorted array */
	for (int i = 0; i < this->size; i++) {
		if (entry == list[i]) {
			return true;
			break;
		}
	}	return false;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Set specified entry to index in the list */
template<class T>
bool ArrayList<T>::set(T entry, int index) {

	if (this->size > index  && this->size != 0) {
		list[index] = entry;
		return true;
	}

	return false;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Returns number of entries in the list */
template<class T>
int ArrayList<T>::getSize() {
	return this->size;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Returns the max capacity of the list */
template<class T>
int ArrayList<T>::getCapacity() {
	return this->capacity;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* Returns the entry at the specified index */
template<class T>
T ArrayList<T>::getEntry(int index) {

	if (this->size > index  && this->size != 0) {
		return list[index];
	}

	return NULL;
}