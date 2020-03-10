#include "StringFactory.hpp"
#include <iostream>
#include "string.h"

using namespace std;

string* StringFactory::split(LinkedList* ll, char* string, char* delims)
{
    char* tempString;
    int numSize;

    

    tempString = strtok(string, delims);
    do
    {
        
        ll->addEnd(tempString);
        tempString = strtok(NULL, " ");
        cout << sizeof(string);
        
    } while (tempString);
}