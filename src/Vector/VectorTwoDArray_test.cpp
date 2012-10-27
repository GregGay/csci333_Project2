#include "VectorTwoDArray.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() {
    VectorTwoDArray<int>* twoDInt = new VectorTwoDArray<int>(2, 2, 0);
    
    cout << "Integer insert: " << endl;
    twoDInt->insert(1, 0, 7);
    twoDInt->print();
   
    cout << "Integer access: " << twoDInt->access(1, 0) << endl;
    
    cout << "Integer remove: " << endl;
    twoDInt->remove(1, 0);
    twoDInt->print();
    
    VectorTwoDArray<double>* twoDDouble = new VectorTwoDArray<double>(2, 2, 0.01);
    
    cout << "Double insert: " << endl;
    twoDDouble->insert(1, 0, 7.77);
    twoDDouble->print();
    
    cout << "Double access: " << twoDDouble->access(1, 0) << endl;

    cout << "Double remove: " << endl;
    twoDDouble->remove(1, 0);
    twoDDouble->print();
   
    VectorTwoDArray<std::string>* twoDString = new VectorTwoDArray<std::string>(2, 2, "default");
    
    cout << "String insert: " << endl;
    twoDString->insert(1, 0, "Greg");
    twoDString->print();
    
    cout << "String insert: " << endl;
    twoDString->insert(0, 1, "Grego");
    twoDString->print();
    
    cout << "String access: " << twoDString->access(1, 0) << endl;
    
    cout << "String remove: " << endl;
    twoDString->remove(1, 0);
    twoDString->print();

    return 0;
}
