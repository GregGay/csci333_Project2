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
	  cols[j] = 0;
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

    Node<T>* temp = new Node<T>(r, c, value);
    Node<T>** curRow = &rows[r];
    Node<T>** curCol = &cols[c];
    
    while(*curCol != 0 && (*curCol)->getNumCol() < c) {
	  curCol = &((*curCol)->getNextCol());
    }
    
    while(*curRow != 0 && (*curRow)->getNumRow() < r) {
	  curRow = &((*curRow)->getNextRow());
    }

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

template <typename T>
void SparseArray<T>::remove(int r, int c) {
    assert(r >= 0 && r < row);
    assert(c >= 0 && c < col);

    insert(r, c, Def);
/*    
    if (rows != 0 && cols != 0) {
	  Node<T>** curRow = &rows[r];
	  Node<T>** curCol = &cols[c];
	  Node<T>** preRow = &rows[r];
	  Node<T>** preCol = &cols[c];

	  while(*curRow != 0 && (*curRow)->getNumRow() < r) {
		curRow = &((*curRow)->getNextRow());
	  }
    
	  while(*curCol != 0 && (*curCol)->getNumCol() < c) {
		curCol = &((*curCol)->getNextCol());
	  }
	  
	  while (*curRow != 0 && curRow->getNumRow() != r) {
		preRow = curRow;
		curRow = &((*curRow)->getNextRow());
	  }

	  while (*curCol != 0 && curCol->getNumCol() != r) {
		preCol = curCol;
		curCol = &((*curCol)->getNextCol());
	  }

	  Node<T>* temp = new Node<T>(r, c);
	  temp->setNextRow(**curRow);
	  //temp->setNextCol(**curCol);
	  curRow = &((*cur)->getNextRow());
	  (*preRow)->setNextRow(**curr);
	  *curRow = temp;
	  delete[] (*curRow);
    }*/
}

template <typename T>
void SparseArray<T>::print() {
    for (int i = 0; i < row; i++) {
	  cout << "[ ";
	  for (int j = 0; j < col; j++) { 
		cout << access(i, j) << " ";
	  }
	  cout << "]" << endl;
    }
}

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
