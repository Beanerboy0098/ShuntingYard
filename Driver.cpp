#include <string.h>
#include <iostream>
#include "Queue.hpp"

using namespace std;

int main()
{
    Queue* inputQ = new Queue();
    char s[] = "210 + 25 - 13 / 7 - 168 * 45";
   

    char* delims = (char*)" ";
    char* tempString;

    tempString = strtok(s, delims);

    do 
    {
        inputQ->Enqueue(tempString);
        tempString = strtok(NULL, " ");

    }while (tempString);

    inputQ->DisplayQueue();
    
}
