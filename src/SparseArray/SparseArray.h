#ifndef __SPARSEARRAY_H__
#define __SPARSEARRAY_H__

#include "Node.h"

template <typename T>
class SparseArray {
    private:
	  Node<T>** rows;
	  Node<T>** cols;
	  int row;
	  int col;
	  T Def;

    public:
	  SparseArray<T>(int r, int c, T def);
	  ~SparseArray<T>();
	  void insert(int r, int c, T value);
	  T access(int r, int c);
	  void remove(int r, int c);
	  void print();
	  int getNumRows();
	  int getNumCols();
};

#endif
