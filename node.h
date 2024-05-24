#pragma once
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>

class Node
{
public:
	std::string imie;
	std::string nazwisko;
	int wiek;
	Node* next;

	Node(std::string im, std::string naz, int w) : imie(im), nazwisko(naz), wiek(w), next(nullptr) {};

};

#endif // !NODE_H