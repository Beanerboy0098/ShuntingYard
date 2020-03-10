
#include<iostream>
#include "StringFactory.hpp"
using namespace std;

int main()
{
    char string[] = "200 + 13 - 46 / 6 * 23";

    char delims[] = " ";

    LinkedList* ll = new LinkedList();

    StringFactory::split(ll, string, delims);
  
    ll->display();
}