#include "doubledlinkedlist.h"

DoubledLinkedListDataStructure::DoubledLinkedListDataStructure()
{

}

DoubledLinkedListDataStructure::~DoubledLinkedListDataStructure()
{
    DoubledLinkedNode* initialHead = head;
    if (initialHead != nullptr)
    {
        DoubledLinkedNode* tmp = initialHead->next;
        delete initialHead;
        while (tmp != nullptr)
        {
            head = tmp->next;
            delete tmp;
            tmp = head;
        }
    }
}


void DoubledLinkedListDataStructure::insertInHead(const std::string& data)
{
    struct DoubledLinkedNode* tmp = new DoubledLinkedNode(data);

    if (head == nullptr)
    {
        head = tail = tmp;
    }
    else
    {
        tmp->next = head;
        tmp->previous = nullptr;
        head->previous = tmp;
        head = tmp;
    }
}

void DoubledLinkedListDataStructure::insertInTail(const std::string& data)
{
    struct DoubledLinkedNode* tmp = new DoubledLinkedNode(data);

    if (head == nullptr)
    {
        head = tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tmp->next = nullptr;
        tmp->previous = tail;
        tail = tmp;
    }
}

DoubledLinkedNode *DoubledLinkedListDataStructure::removeInHead()
{
    if (head == nullptr)
        return nullptr;
    else
    {
        if (head == tail)
        {
            DoubledLinkedNode *tmp = head;
            head = tail = nullptr;
            return tmp;
        }
        else
        {
            DoubledLinkedNode *tmp = head;
            head = head->next;
            head->previous = nullptr;
            return tmp;
        }
    }
}

DoubledLinkedNode *DoubledLinkedListDataStructure::removeInTail()
{
    if (head == nullptr)
        return nullptr;
    else
    {
        if (head == tail)
        {
            DoubledLinkedNode *tmp = head;
            head = tail = nullptr;
            return tmp;
        }
        else
        {
            DoubledLinkedNode *t = tail;
            tail = tail->previous;
            tail->next = nullptr;
            return t;
        }
    }
}

std::vector<std::string> DoubledLinkedListDataStructure::getElementsAsVector()
{
    std::vector<std::string> vec;
    DoubledLinkedNode* tmp = head;
    while (tmp != nullptr)
    {
        vec.push_back(tmp->data);
        tmp = tmp->next;
    }

    return vec;
}
