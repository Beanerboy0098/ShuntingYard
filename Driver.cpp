#include<string.h>
#include<iostream>

using namespace std;

char str[] = "158 + 267 - 156";
string arr[50];
int a = 0;

void stringspilter()
{
    char delims[] = "+-*/ ";
    char* tempString;
    tempString = strtok(str, delims);
    do
    {
        arr[a] = tempString;
        a++;
        tempString = strtok(NULL, " ");


    } while (tempString);


    
}


int main()

{
    stringspilter();

    for(int i = 0; i<a; i++)
    {
        cout<<arr[i]<<"\n";
    }
}