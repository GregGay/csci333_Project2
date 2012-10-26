#include "SparseArray.h"
#include "assert.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

template <typename T>
SparseArray<T>::SparseArray(int r, int c, T def) {
    row = r;
    col = c;
    Def = def;

    rows = new Node<T>*[r];
    cols = new Node<T>*[c];

    for (int i = 0; i < r; i++) {
	  rows[i] = 0;
    }
    
    for (int j = 0; j < c; j++) {
	  rows[j] = 0;
    }
}

template <typename T>
SparseArray<T>::~SparseArray() {
    for (int i = 0; i < row; i++) {
	  delete[] rows[i];
    }
    
    for (int j = 0; j < col; j++) {
	  delete[] cols[j];
    }

    delete[] rows;
    delete[] cols;
}

template <typename T>
void SparseArray<T>::insert(int r, int c, T value) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);

    Node<T>** curRow = &rows[r];
    Node<T>** curCol = &cols[r];
    
    while(*curRow != 0 && (*curRow)->getNumRow() < r) {
	  curRow = &((*curRow)->getNextRow());
    }
    
    while(*curCol != 0 && (*curCol)->getNumCol() < c) {
	  curCol = &((*curCol)->getNextCol());
    }

    Node<T>* temp = new Node<T>(r, c, value);
    temp->setNextRow(**curRow);
    *curRow = temp;

}

template <typename T>
T SparseArray<T>::access(int r, int c) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);
    
    Node<T>** cur = &rows[r];

    while (*cur != 0) {
	  if ((*cur)->getNumRow() == r && (*cur)->getNumCol() == c) {
		return (*cur)->getValue();
	  }
	  cur = &((*cur)->getNextRow());
    }
    return Def;
}
/*
template <typename T>
void SparseArray<T>::remove(int r, int c) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);
    
    theArray[r][c] = Def;
}

template <typename T>
void SparseArray<T>::print() {
    Node<T>* curRow = row;
    Node<T>* curCol = col;
    
    std::cout << "[";
    while(curRow != 0 && curCol !=0) {
	  std::cout << curRow->getValue();
	  if(curRow->getNextRow() != 0 && curCol->getNextCol() != 0) {
		std::cout << ", ";
	  }
	  curRow = curRow->getNextRow();
	  curCol = curCol->getNextCol();
    }
    std::cout << "]" << std::endl;
}
*/
template <typename T>
int SparseArray<T>::getNumRows() {
    return row;
}

template <typename T>
int SparseArray<T>::getNumCols() {
    return col;
}

template class SparseArray<int>;
template class SparseArray<double>;
template class SparseArray<std::string>;
