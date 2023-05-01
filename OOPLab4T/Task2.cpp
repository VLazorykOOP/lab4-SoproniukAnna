#include <iostream>
#include <string>
#include <map>
#include "Task2.h"

using namespace std;

TArchive::TArchive(){}

TArchive::TArchive(int number, string name)
{
	this->book[0].first = number;
	this->book[0].second = name;
}

TArchive::~TArchive(){}

int TArchive::getCodeError()
{
	return this->CodeError;
}

int TArchive::getSize()
{
	return this->size;
}

void TArchive::AddBook(int number, string name)
{
	if (this->size == SIZE)
		CodeError = 1;
	else
	{
		book[this->size].first = number;
		book[this->size].second = name;
		this->size++;
	}
}

pair<int, string>& TArchive::operator[](int& number)
{
	for (int i = 0; i < this->size; i++)
		if (number == this->book[i].first)
			return this->book[i];

	this->CodeError = 2;
	return this->book[0];
}

pair<int, string>& TArchive::operator[](string& name)
{
	for (int i = 0; i < this->size; i++)
		if (name == this->book[i].second)
			return this->book[i];

	this->CodeError = 2;
	return this->book[0];
}

ostream& operator<<(ostream& os, const pair<int, string> book)
{
	os << book.first << "\t" << book.second << endl;
	return os;
}

istream& operator>>(istream& is, pair<int, string> book)
{
	is >> book.first;
	is >> book.second;
	return is;
}

ostream& operator<<(ostream& os, const TArchive arch)
{
	for (int i = 0; i < arch.size; i++)
		os << arch.book[i].first << "\t" << arch.book[i].second << endl;
	os << "Code error: " << arch.CodeError << endl;
	return os;
}
