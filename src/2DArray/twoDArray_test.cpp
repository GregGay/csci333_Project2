#include "TwoDArray.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() {
    TwoDArray<int>* twoDInt = new TwoDArray<int>(2, 2, 0);
    
    cout << "Integer insert: ";
    twoDInt->insert(1, 0, 7);
    twoDInt->print();
    
    cout << "Integer access: " << twoDInt->access(1, 0) << endl;
    
    cout << "Integer remove: ";
    twoDInt->remove(1, 0);
    twoDInt->print();
    
    TwoDArray<double>* twoDDouble = new TwoDArray<double>(2, 2, 0);
    
    cout << "Double insert: ";
    twoDDouble->insert(1, 0, 7.777);
    twoDDouble->print();
    
    cout << "Double access: " << twoDDouble->access(1, 0) << endl;

    cout << "Double remove: ";
    twoDDouble->remove(1, 0);
    twoDDouble->print();
    
    TwoDArray<std::string>* twoDString = new TwoDArray<std::string>(2, 2, "0");
    
    cout << "String insert: ";
    twoDString->insert(1, 0, "Greg");
    twoDString->print();
    
    cout << "String insert: ";
    twoDString->insert(0, 1, "Grego");
    twoDString->print();
    
    cout << "String access: " << twoDString->access(1, 0) << endl;
    
    cout << "String remove: ";
    twoDString->remove(1, 0);
    twoDString->print();
}
