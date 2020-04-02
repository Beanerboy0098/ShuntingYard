#include "Queue.hpp"
#include <iostream>

using namespace std;


Queue::Queue()
{
    this->head = 0;
    this->elements = 0;
    this->tail = 0;
}


void Queue::Enqueue(string lastelement)

{
    Node* newnode = new Node(lastelement);

    if(!this->head)
    {
        this->head = newNode;
        this->elements++;
    }

    else
    {
        tail->setNextNode(newNode);

    }

    this->tail = newNode;
    this->elements++;
}


string Queue::Dequeue()
{
    Node* nodeToReturn = this->head;
    this->head = this->head->getNextNode();
    string val = nodeToReturn->getPayload();
    delete nodeToReturn;
    this->element--;
    return val;
}

void Queue::DisplayQueue()
{
    node currNode = this->head;
    for(int i = 0; i<this->elements-1; i++)
    {
        std::cout<<currNode->getPayload()<<"\n";
        currNode = currNode->getNextNode();

    }
}