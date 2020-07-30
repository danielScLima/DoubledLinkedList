#ifndef DOUBLED_LINKED_LIST_H
#define DOUBLED_LINKED_LIST_H

#include <iostream>
#include <vector>

/*!
 * \brief The DoubledLinkedNode struct
 */
struct DoubledLinkedNode
{
    /*!
     * \brief DoubledLinkedNode
     */
    DoubledLinkedNode()
    {
        next = nullptr;
        previous = nullptr;
        this->data = "";
    }
    /*!
     * \brief DoubledLinkedNode
     * \param data
     */
    DoubledLinkedNode(const std::string& data)
    {
        this->data = data;
        next = nullptr;
        previous = nullptr;
    }

    std::string data = "";
    struct DoubledLinkedNode* next = nullptr;
    struct DoubledLinkedNode* previous = nullptr;
};

/*!
 * \brief The DoubledLinkedList class
 */
class DoubledLinkedListDataStructure
{
public:
    /*!
     * \brief DoubledLinkedList
     */
    DoubledLinkedListDataStructure();
    
    ~DoubledLinkedListDataStructure();

    /*!
     * \brief insertInHead
     * \param data
     */
    void insertInHead(const std::string& data);
    /*!
     * \brief insertInTail
     * \param data
     */
    void insertInTail(const std::string& data);

    /*!
     * \brief removeInHead
     * \return
     */
    DoubledLinkedNode *removeInHead();
    /*!
     * \brief removeInTail
     * \return
     */
    DoubledLinkedNode *removeInTail();

    /*!
     * \brief getElementsAsVector
     * \return
     */
    std::vector<std::string> getElementsAsVector();

private:
    struct DoubledLinkedNode* head = nullptr;
    struct DoubledLinkedNode* tail = nullptr;
};

#endif // DOUBLED_LINKED_LIST_H
