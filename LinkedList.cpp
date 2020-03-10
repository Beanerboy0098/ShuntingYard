#include "LinkedList.hpp"

LinkedList::LinkedList()
{
    this->head = 0;
    this->count = 0;
}

void LinkedList::addEnd(string payload)
{
    Node* n = new Node(payload);
    if (!this->head)
    {
        this->head = n;
    }
    else
    {   
        Node* currNode = this->head;
        while (currNode-> getNextNode())
        {
            currNode = currNode->getNextNode();
        }
        currNode->setNextNode(n);   
    }
    this->count++;
    
}

string LinkedList::get(int index)
{
    Node* currNode = this->head;
    for(int i = 0; i <index; i++)
    {
        currNode = currNode->getNextNode();
    }
    return currNode->getPayload();
}

string* LinkedList::toStringArray()
{

}

void LinkedList::display()
{
    for(int i = 0; i < this->count; i++)
    {
        cout << this->get(i) << "\n";
    }
}