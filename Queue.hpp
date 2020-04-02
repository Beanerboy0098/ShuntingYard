#include <iostream>
#include "Node.hpp"




using namespace std;

class Queue

{
    private:
        Node* head;
        Node* tail;
        int elements; 
    

    public:
    
        Queue();

        void Enqueue(string tail);

        string Desqueue();

        void DisplayQueue();
    
    
};
