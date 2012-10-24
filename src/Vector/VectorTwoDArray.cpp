#include "VectorTwoDArray.h"
#include "assert.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;

template <typename T>
VectorTwoDArray<T>::VectorTwoDArray(int r, int c, T def) {
    row = r;
    col = c;
    Def = def;

    for (int i = 0; i < r; i++) {
	  std::vector<T> rows;
	  for (int j = 0; j < c; j++) {
		rows.push_back(i * j);
	  }
	  theArray.push_back(rows);
    }
}

template <typename T>
VectorTwoDArray<T>::~VectorTwoDArray() {

}

template <typename T>
void VectorTwoDArray<T>::insert(int r, int c, T value) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);

    theArray[r][c] = value;
}

template <typename T>
T VectorTwoDArray<T>::access(int r, int c) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);
    
    return theArray[r][c];
}

template <typename T>
void VectorTwoDArray<T>::remove(int r, int c) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);
    
    theArray[r][c] = Def;
}

template <typename T>
void VectorTwoDArray<T>::print() {
    cout << "[ ";
    for(int i = 0; i < row; i++) {
	  for(int j = 0; j < col; j++) {
		cout << theArray[i][j] << " ";
	  }
    }
    cout << "]" << endl;
}

template <typename T>
int VectorTwoDArray<T>::getNumRows() {
    return row;
}

template <typename T>
int VectorTwoDArray<T>::getNumCols() {
    return col;
}

template class VectorTwoDArray<int>;
template class VectorTwoDArray<double>;
//template class VectorTwoDArray<std::string>;
