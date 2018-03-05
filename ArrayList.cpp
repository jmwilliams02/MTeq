#include "stdafx.h"
#include <iostream>
#include "ArrayList.h"

using namespace std;

template<class T>
ArrayList<T>::ArrayList(int capacity) {
	list = new T[capacity];
	this->capacity = capacity;
}

template<class T>
ArrayList<T>::~ArrayList() {}

// append to the end
template<class T>
bool ArrayList<T>::addEntry(T entry) {
	int lastIndex = 0;

	// empty list
	if (this->size == 0) {
		list[lastIndex] = entry;
		this->size++;
	}

	if (this->size < this->capacity) {
		list[size] = entry;
		size++;
	}
	else {
		return false;
	}
	return true;
}

// add before
template<class T>
bool ArrayList<T>::add(T entry, int index) {

	if (this->size == 0 || this->size == capacity) {
		return false;
	}
	else if (this->size < index) {
		return false;
	}
	else {
		for (int i = this->size; i > index; i--) {
			list[i] = list[i - 1];
		}
		list[i] = entry;
		this->size++;
	}
	return true;
}

// 
template<class T>
bool ArrayList<T>::remove(int index) {

	if (this->size == 0 || index > this->size) {
		return false;
	}

	else {
		for (int i = index; i < this->size; i++) {
			list[i] = list[i + 1];
		}
		this->size--;
	}
	return true;
}

template<class T>
bool ArrayList<T>::remove(T entry) {
	int foundIndex = 0;
	if (this->size == 0) {
		return false;
	}
// search unsorted array
	for (int i = 0; i < this->size; i++) {
		if (entry == list[i]) {
			foundIndex = i;
			break;
		}
	}
	return this->remove(foundIndex);
}