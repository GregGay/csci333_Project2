#include "gtest/gtest.h"
#include "../src/TwoDArray/TwoDArray.h"
#include "../src/Vector/VectorTwoDArray.h"
#include "../src/SparseArray/SparseArray.h"
#include "../src/SparseArray/Node.h"
#include <string>

using std::string;

TEST(TwoDArrayTest, InsertInt) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(3, 3, 0);
    tDInt->insert(1, 1, 3);

    EXPECT_EQ(3, tDInt->access(1, 1));
    delete tDInt;
}

TEST(VectorTwoDArrayTest, InsertInt) {
    VectorTwoDArray<int>* tDInt = new VectorTwoDArray<int>(3, 3, 0);
    tDInt->insert(1, 1, 3);

    EXPECT_EQ(3, tDInt->access(1, 1));
    delete tDInt;
}

TEST(SparseArrayTest, InsertInt) {
    SparseArray<int>* tDInt = new SparseArray<int>(3, 3, 0);
    tDInt->insert(1, 1, 3);

    EXPECT_EQ(3, tDInt->access(1, 1));
    delete tDInt;
}

TEST(TwoDArrayTest, InsertDoulbe) {
    TwoDArray<double>* tDDouble = new TwoDArray<double>(3, 3, 0.0);
    tDDouble->insert(1, 1, 3.3);

    EXPECT_EQ(3.3, tDDouble->access(1, 1));
    delete tDDouble;
}

TEST(VectorTwoDArrayTest, InsertDoulbe) {
    VectorTwoDArray<double>* tDDouble = new VectorTwoDArray<double>(3, 3, 0.0);
    tDDouble->insert(1, 1, 3.3);

    EXPECT_EQ(3.3, tDDouble->access(1, 1));
    delete tDDouble;
}

TEST(SparseArrayTest, InsertDouble) {
    SparseArray<double>* tDDouble = new SparseArray<double>(3, 3, 0.0);
    tDDouble->insert(1, 1, 3);

    EXPECT_EQ(3, tDDouble->access(1, 1));
    delete tDDouble;
}

TEST(TwoDArrayTest, InsertStirng) {
    TwoDArray<string>* tDString = new TwoDArray<string>(3, 3, "default");
    tDString->insert(1, 1, "Integer");

    EXPECT_EQ("Integer", tDString->access(1, 1));
    delete tDString;
}

TEST(VectorTwoDArrayTest, InsertString) {
    VectorTwoDArray<string>* tDString = new VectorTwoDArray<string>(3, 3, "default");
    tDString->insert(1, 1, "Vector");

    EXPECT_EQ("Vector", tDString->access(1, 1));
    delete tDString;
}
/*
TEST(SparseArrayTest, InsertString) {
    SparseArray<string>* tDString = new SparseArray<string>(3, 3, "default");
    tDString->insert(1, 1, "Sparse");

    EXPECT_EQ("Sparse", tDString->access(1, 1));
    delete tDString;
}
*/
TEST(TwoDArrayRow, NumRow) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<int>* tDDouble = new TwoDArray<int>(11, 11, 0);
    TwoDArray<int>* tDString = new TwoDArray<int>(12, 12, 0);

    EXPECT_EQ(10, tDInt->getNumRows());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumRows());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumRows());
    delete tDString;
}

TEST(TwoDArrayCol, NumCol) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<int>* tDDouble = new TwoDArray<int>(11, 11, 0);
    TwoDArray<int>* tDString = new TwoDArray<int>(12, 12, 0);

    EXPECT_EQ(10, tDInt->getNumCols());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumCols());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumCols());
    delete tDString;
}

TEST(VectorRow, NumRow) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<int>* tDDouble = new TwoDArray<int>(11, 11, 0);
    TwoDArray<int>* tDString = new TwoDArray<int>(12, 12, 0);

    EXPECT_EQ(10, tDInt->getNumRows());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumRows());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumRows());
    delete tDString;
}

TEST(VectorCol, NumCol) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<int>* tDDouble = new TwoDArray<int>(11, 11, 0);
    TwoDArray<int>* tDString = new TwoDArray<int>(12, 12, 0);

    EXPECT_EQ(10, tDInt->getNumCols());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumCols());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumCols());
    delete tDString;
}

TEST(SparseArrayRow, NumRow) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<int>* tDDouble = new TwoDArray<int>(11, 11, 0);
    TwoDArray<int>* tDString = new TwoDArray<int>(12, 12, 0);

    EXPECT_EQ(10, tDInt->getNumRows());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumRows());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumRows());
    delete tDString;
}

TEST(SparseArrayCol, NumCol) {
    TwoDArray<int>* tDInt = new TwoDArray<int>(10, 10, 0);
    TwoDArray<int>* tDDouble = new TwoDArray<int>(11, 11, 0);
    TwoDArray<int>* tDString = new TwoDArray<int>(12, 12, 0);

    EXPECT_EQ(10, tDInt->getNumCols());
    delete tDInt;
    EXPECT_EQ(11, tDDouble->getNumCols());
    delete tDDouble;
    EXPECT_EQ(12, tDString->getNumCols());
    delete tDString;
}

