/*
* File Name: OLList.cpp
* Assignment: Lab 4 Exercise F
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: June 8, 2022
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

#include "OLList.h"

OLList::OLList()
    : headM(0) {
}

OLList::OLList(const OLList& source) {
    copy(source);
}

OLList& OLList::operator=(const OLList& rhs) {
    if (this != &rhs) {
        destroy();
        copy(rhs);
    }
    return *this;
}

OLList::~OLList() {
    destroy();
}

void OLList::print() const {
    cout << '[';
    if (headM != 0) {
        cout << ' ' << headM->item;
        for (const Node* p = headM->next; p != 0; p = p->next)
            cout << ", " << p->item;
    }
    cout << " ]\n";
}

void OLList::insert(const ListItem& itemA) {
    Node* new_node = new Node;
    new_node->item = itemA;

    if (headM == 0 || itemA <= headM->item) {
        new_node->next = headM;
        headM = new_node;

    }
    else {
        Node* before = headM;
        Node* after = headM->next;
        while (after != 0 && itemA > after->item) {
            before = after;
            after = after->next;
        }
        new_node->next = after;
        before->next = new_node;

    }
}

void OLList::remove(const ListItem& itemA) {

    if (headM == 0 || itemA < headM->item)
        return;

    Node* doomed_node = 0;


    if (itemA == headM->item) {

        doomed_node = headM;

        headM = headM->next;

        delete doomed_node;
    }
    else {

        Node* before = headM;
        Node* maybe_doomed = headM->next;
        while (maybe_doomed != 0 && itemA > maybe_doomed->item) {
            before = maybe_doomed;
            maybe_doomed = maybe_doomed->next;
        }

        if (maybe_doomed != nullptr) {

            before->next = maybe_doomed->next;

            delete maybe_doomed;
        }

    }

}

void OLList::destroy() {


    Node* currentNode = headM;
    while (currentNode != nullptr) {

        Node* nextNode = currentNode->next;

        delete currentNode;

        currentNode = nextNode;
    }

    headM = nullptr;
}

void OLList::copy(const OLList& source) {


    if (source.headM != nullptr) {

        Node* newNode = new Node;
        newNode->item = source.headM->item;
        newNode->next = nullptr;
        headM = newNode;

        Node* sourceTempNode = source.headM->next;
        Node* currentTempNode = headM;

        while (sourceTempNode != nullptr) {

            Node* newTempNode = new Node;

            newTempNode->item = sourceTempNode->item;

            newTempNode->next = nullptr;


            currentTempNode->next = newTempNode;

            currentTempNode = newTempNode;

            sourceTempNode = sourceTempNode->next;
        }
    }
    else {

        headM = nullptr;
    }
}




