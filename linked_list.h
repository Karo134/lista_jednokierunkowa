#pragma once
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include "node.h"

class linked_list
{
private:
    Node* head;
public:
    linked_list() : head(nullptr) {}
    ~linked_list() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void print() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << "Imiê: " << current->imie << ", Nazwisko: " << current->nazwisko << ", Wiek: " << current->wiek << std::endl;
            current = current->next;
        }
    }

    void insert(std::string imie, std::string nazwisko, int wiek) {
        Node* newNode = new Node(imie, nazwisko, wiek);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

#endif // !LINKED_LIST_H

