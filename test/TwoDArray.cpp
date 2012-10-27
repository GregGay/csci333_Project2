#include "gtest/gtest.h"
#include "../src/TwoDArray/TwoDArray.h"
#include "../src/Vector/VectorTwoDArray.h"
#include "../src/SparseArray/SparseArray.h"
#include "../src/SparseArray/Node.h"
#include <iostream>
#include <string>

using std::string;

TEST(TwoDArrayTest, InsertInt) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(3, 3, 0);
    for (int i=0; i < 3; i++) {
	  tDInt->insert(i, i, 3);
    }
    EXPECT_EQ(3, tDInt->access(1, 1));
    delete tDInt;
}

TEST(VectorTwoDArrayTest, InsertInt) {
    VectorTwoDArray<int>* tDInt = new VectorTwoDArray<int>(3, 3, 0);
    
    for (int i=0; i < 3; i++) {
	  tDInt->insert(i, i, 3);
    }
    EXPECT_EQ(3, tDInt->access(1, 1));
    delete tDInt;
}

TEST(SparseArrayTest, InsertInt) {
    SparseArray<int>* tDInt = new SparseArray<int>(3, 3, 0);
    
    for (int i=0; i < 3; i++) {
	  tDInt->insert(i, i, 3);
    }
    EXPECT_EQ(3, tDInt->access(1, 1));
    delete tDInt;
}

TEST(TwoDArrayTest, InsertDoulbe) {
    TwoDArray<double>* tDDouble = new TwoDArray<double>(3, 3, 0.0);

    for (int i=0; i < 3; i++) {
	  tDDouble->insert(i, i, 3.3);
    }
    EXPECT_EQ(3.3, tDDouble->access(1, 1));
    delete tDDouble;
}

TEST(VectorTwoDArrayTest, InsertDoulbe) {
    VectorTwoDArray<double>* tDDouble = new VectorTwoDArray<double>(3, 3, 0.0);

    for (int i=0; i < 3; i++) {
	  tDDouble->insert(i, i, 3.3);
    }
    EXPECT_EQ(3.3, tDDouble->access(1, 1));
    delete tDDouble;
}

TEST(SparseArrayTest, InsertDouble) {
    SparseArray<double>* tDDouble = new SparseArray<double>(3, 3, 0.0);

    for (int i=0; i < 3; i++) {
	  tDDouble->insert(i, i, 3.3);
    }
    EXPECT_EQ(3.3, tDDouble->access(1, 1));
    delete tDDouble;
}

TEST(TwoDArrayTest, InsertStirng) {
    TwoDArray<string>* tDString = new TwoDArray<string>(3, 3, "default");

    for (int i=0; i < 3; i++) {
	  tDString->insert(i, i, "Integer");
    }
    EXPECT_EQ("Integer", tDString->access(1, 1));
    delete tDString;
}

TEST(VectorTwoDArrayTest, InsertString) {
    VectorTwoDArray<string>* tDString = new VectorTwoDArray<string>(3, 3, "default");

    for (int i=0; i < 3; i++) {
	  tDString->insert(i, i, "Vector");
    }
    EXPECT_EQ("Vector", tDString->access(1, 1));
    delete tDString;
}

TEST(SparseArrayTest, InsertString) {
    SparseArray<string>* tDString = new SparseArray<string>(3, 3, "default");
    tDString->insert(1, 2, "Sparse");

    EXPECT_EQ("Sparse", tDString->access(1, 2));
    delete tDString;
}

TEST(TwoDArrayRow, NumRow) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<double>* tDDouble = new TwoDArray<double>(11, 11, 0.0);
    TwoDArray<string>* tDString = new TwoDArray<string>(12, 12, "0");

    EXPECT_EQ(10, tDInt->getNumRows());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumRows());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumRows());
    delete tDString;
}

TEST(TwoDArrayCol, NumCol) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<double>* tDDouble = new TwoDArray<double>(11, 11, 0.0);
    TwoDArray<string>* tDString = new TwoDArray<string>(12, 12, "0");

    EXPECT_EQ(10, tDInt->getNumCols());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumCols());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumCols());
    delete tDString;
}

TEST(VectorRow, NumRow) {
    VectorTwoDArray<int>* tDInt = new VectorTwoDArray<int>(10, 10, 0);
    VectorTwoDArray<double>* tDDouble = new VectorTwoDArray<double>(11, 11, 0.0);
    VectorTwoDArray<string>* tDString = new VectorTwoDArray<string>(12, 12, "0");

    EXPECT_EQ(10, tDInt->getNumRows());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumRows());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumRows());
    delete tDString;
}

TEST(VectorCol, NumCol) {
    VectorTwoDArray<int>* tDInt = new VectorTwoDArray<int>(10, 10, 0);
    VectorTwoDArray<double>* tDDouble = new VectorTwoDArray<double>(11, 11, 0.0);
    VectorTwoDArray<string>* tDString = new VectorTwoDArray<string>(12, 12, "0");

    EXPECT_EQ(10, tDInt->getNumCols());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumCols());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumCols());
    delete tDString;
}

TEST(SparseArrayRow, NumRow) {
    SparseArray<int>* tDInt = new SparseArray<int>(10, 10, 0);
    SparseArray<double>* tDDouble = new SparseArray<double>(11, 11, 0.0);
    SparseArray<string>* tDString = new SparseArray<string>(12, 12, "0");

    EXPECT_EQ(10, tDInt->getNumRows());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumRows());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumRows());
    delete tDString;
}

TEST(SparseArrayCol, NumCol) {
    SparseArray<int>* tDInt = new SparseArray<int>(10, 10, 0);
    SparseArray<double>* tDDouble = new SparseArray<double>(11, 11, 0.0);
    SparseArray<string>* tDString = new SparseArray<string>(12, 12, "0");

    EXPECT_EQ(10, tDInt->getNumCols());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumCols());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumCols());
    delete tDString;
}

TEST(TwoDArrayAccess, AccessInt) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 7);
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDInt->access(i, j);
	  }
    }
    EXPECT_EQ(7, tDInt->access(7, 7));
    delete tDInt;
}

TEST(TwoDArrayAccess, AccessDouble) {
    TwoDArray<double>* tDDouble = new TwoDArray<double>(11, 11, 8.8);
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDDouble->access(i, j);
	  }
    }
    EXPECT_EQ(8.8, tDDouble->access(7, 7));
    delete tDDouble;
}

TEST(TwoDArrayAccess, AccessString) {
    TwoDArray<string>* tDString = new TwoDArray<string>(12, 12, "9");
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDString->access(i, j);
	  }
    }
    EXPECT_EQ("9", tDString->access(7, 7));
    delete tDString;
}

TEST(VectorTwoDArrayAccess, AccessInt) {
    VectorTwoDArray<int>* tDInt = new VectorTwoDArray<int>(10, 10, 7);
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDInt->access(i, j);
	  }
    }
    EXPECT_EQ(7, tDInt->access(7, 7));
    delete tDInt;
}

TEST(VectorTwoDArrayAccess, AccessDouble) {
    VectorTwoDArray<double>* tDDouble = new VectorTwoDArray<double>(11, 11, 8.8);
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDDouble->access(i, j);
	  }
    }
    EXPECT_EQ(8.8, tDDouble->access(7, 7));
    delete tDDouble;
}

TEST(VectorTwoDArrayAccess, AccessString) {
    VectorTwoDArray<string>* tDString = new VectorTwoDArray<string>(12, 12, "9");
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDString->access(i, j);
	  }
    }
    EXPECT_EQ("9", tDString->access(7, 7));
    delete tDString;
}

TEST(SparseArrayAccess, AccessInt) {
    SparseArray<int>* tDInt = new SparseArray<int>(10, 10, 7);
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDInt->access(i, j);
	  }
    }
    EXPECT_EQ(7, tDInt->access(7, 7));
    delete tDInt;
}

TEST(SparseArrayAccess, AccessDouble) {
    SparseArray<double>* tDDouble = new SparseArray<double>(11, 11, 8.8);
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDDouble->access(i, j);
	  }
    }
    EXPECT_EQ(8.8, tDDouble->access(7, 7));
    delete tDDouble;
}

TEST(SparseArrayAccess, AccessString) {
    SparseArray<string>* tDString = new SparseArray<string>(12, 12, "9");
    
    for (int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		tDString->access(i, j);
	  }
    }
    EXPECT_EQ("9", tDString->access(7, 7));
    delete tDString;
}

TEST(TwoDArrayRemove, RemoveInt) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    
    for (int i=0; i<10; i++) {
	  tDInt->insert(i, i, 7);
    }
    tDInt->remove(7, 5);
    EXPECT_EQ(0, tDInt->access(7, 5));
    delete tDInt;
}

TEST(TwoDArrayRemove, RemoveDouble) {
    TwoDArray<double>* tDDouble = new TwoDArray<double>(10, 10, 0.0);
    
    for (int i=0; i<10; i++) {
	  tDDouble->insert(i, i, 7);
    }
    tDDouble->remove(7, 5);
    EXPECT_EQ(0.0, tDDouble->access(7, 5));
    delete tDDouble;
}

TEST(VectorTwoDArrayRemove, RemoveInt) {
    VectorTwoDArray<int>* tDInt = new VectorTwoDArray<int>(10, 10, 5);
    
    for (int i=0; i<10; i++) {
	  tDInt->insert(i, i, 7);
    }
    tDInt->remove(7, 5);
    EXPECT_EQ(5, tDInt->access(7, 5));
    delete tDInt;
}

TEST(VectorTwoDArrayRemove, RemoveDouble) {
    VectorTwoDArray<double>* tDDouble = new VectorTwoDArray<double>(10, 10, 5.5);
    
    for (int i=0; i<10; i++) {
	  tDDouble->insert(i, i, 7.7);
    }
    tDDouble->remove(7, 5);
    EXPECT_EQ(5.5, tDDouble->access(7, 5));
    delete tDDouble;
}

TEST(VectorTwoDArrayRemove, RemoveString) {
    VectorTwoDArray<string>* tDString = new VectorTwoDArray<string>(10, 10, "default");
    
    for (int i=0; i<10; i++) {
	  tDString->insert(i, i, "HELLO");
    }
    tDString->remove(7, 5);
    EXPECT_EQ("default", tDString->access(7, 5));
    delete tDString;
}

TEST(SparseArrayRemove, RemoveInt) {
    SparseArray<int>* tDInt = new SparseArray<int>(10, 10, 5);
    
    for (int i=0; i<10; i++) {
	  tDInt->insert(i, i, 7);
    }
    tDInt->remove(7, 5);
    EXPECT_EQ(5, tDInt->access(7, 5));
    delete tDInt;
}

TEST(SparseArrayRemove, RemoveDouble) {
    SparseArray<double>* tDDouble = new SparseArray<double>(10, 10, 5.5);
    
    for (int i=0; i<10; i++) {
	  tDDouble->insert(i, i, 7.7);
    }
    tDDouble->remove(7, 5);
    EXPECT_EQ(5.5, tDDouble->access(7, 5));
    delete tDDouble;
}

TEST(SparseArrayRemove, RemoveString) {
    SparseArray<string>* tDString = new SparseArray<string>(10, 10, "default");
    for (int i=0; i<10; i++) {
	  tDString->insert(i, i, "HELLO");
    }
    tDString->remove(7, 5);
    EXPECT_EQ("default", tDString->access(7, 5));
    delete tDString;
}

TEST(TwoDArray, PrintInt) {
    TwoDArray<int>* tdInt = new TwoDArray<int>(5, 5, 0);
    for (int i = 0; i < 5; i++) {
	  tdInt->insert(i, i, 7);
    }
    std::cout << "TDArray Integer print" << std::endl;
    tdInt->print();
    delete tdInt;
}

TEST(TwoDArray, PrintDouble) {
    TwoDArray<double>* tdD = new TwoDArray<double>(5, 5, 0.00);
    for (int i = 0; i < 5; i++) {
	  tdD->insert(i, i, 7.77);
    }
    std::cout << "TDArray Double print" << std::endl;
    tdD->print();
    delete tdD;
}

TEST(TwoDArray, PrintString) {
    TwoDArray<string>* tdS = new TwoDArray<string>(5, 5, "default");
    for (int i = 0; i < 5; i++) {
	  tdS->insert(i, i, "hello");
    }
    std::cout << "TDArray String print" << std::endl;
    tdS->print();
    delete tdS;
}

TEST(VectorTwoDArray, PrintInt) {
    VectorTwoDArray<int>* tdI = new VectorTwoDArray<int>(5, 5, 0);
    for (int i = 0; i < 5; i++) {
	  tdI->insert(i, i, 2);
    }
    std::cout << "Vector Integer print" << std::endl;
    tdI->print();
    delete tdI;
}

TEST(VectorTwoDArray, PrintDouble) {
    VectorTwoDArray<double>* tdD = new VectorTwoDArray<double>(5, 5, 0.0);
    for (int i = 0; i < 5; i++) {
	  tdD->insert(i, i, 6.8);
    }
    std::cout << "Vector Double print" << std::endl;
    tdD->print();
    delete tdD;
}

TEST(VectorTwoDArray, PrintString) {
    VectorTwoDArray<string>* tdS = new VectorTwoDArray<string>(5, 5, "default");
    for (int i = 0; i < 5; i++) {
	  tdS->insert(i, i, "world");
    }
    std::cout << "Vector String print" << std::endl;
    tdS->print();
    delete tdS;
}

TEST(SparseArray, PrintInt) {
    SparseArray<int>* tdI = new SparseArray<int>(5, 5, 0);
    for (int i = 0; i < 5; i++) {
	  tdI->insert(i, i, 4);
    }
    std::cout << "SparseArray Integer print" << std::endl;
    tdI->print();
    delete tdI;
}

TEST(SparseArray, PrintDouble) {
    SparseArray<double>* tdD = new SparseArray<double>(5, 5, 0.0);
    for (int i = 0; i < 5; i++) {
	  tdD->insert(i, i, 2.9);
    }
    std::cout << "SparseArray Double print" << std::endl;
    tdD->print();
    delete tdD;
}

TEST(SparseArray, PrintString) {
    SparseArray<string>* tdS = new SparseArray<string>(5, 5, "default");
    for (int i = 0; i < 5; i++) {
	  tdS->insert(i, i, "Greg");
    }
    std::cout << "SparseArray String print" << std::endl;
    tdS->print();
    delete tdS;
}

