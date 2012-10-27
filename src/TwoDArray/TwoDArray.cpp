#include "TwoDArray.h"
#include "assert.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
    row = r;
    col = c;
    Def = def;

    theArray = new T*[r];

    for(int i = 0; i < r; ++i) {
	  theArray[i] = new T[c];
    }

    for(int i = 0; i < row; i++) {
	  for (int j = 0; j < col; j++) {
		theArray[i][j] = Def;
	  }
    }
}

template <typename T>
TwoDArray<T>::~TwoDArray() {
    for(int i = 0; i < row; i++) {
	  delete[] theArray[i];
    }

    delete[] theArray;
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);

    theArray[r][c] = value;
}

template <typename T>
T TwoDArray<T>::access(int r, int c) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);
    
    return theArray[r][c];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);
    
    theArray[r][c] = Def;
}

template <typename T>
void TwoDArray<T>::print() {
    for(int i = 0; i < row; i++) { 
	  cout << "[ ";
	  for(int j = 0; j < col; j++) {
		cout << theArray[i][j] << " ";
	  }
	  cout << "]" << endl;
    }
}

template <typename T>
int TwoDArray<T>::getNumRows() {
    return row;
}

template <typename T>
int TwoDArray<T>::getNumCols() {
    return col;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
