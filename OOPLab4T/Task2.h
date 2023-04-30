#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;
const int SIZE = 100;
class TArchive 
{ 
private:
	pair<int, string>book[SIZE];
	int size = 0;
	int CodeError = 0; // 1 - Overflow 2 - Wrong index
public:
	TArchive();

	void AddBook(int size, int number, string name);
	
	pair<int, string>& operator[](int& number);
	pair<int, string>& operator[](string& name);

	friend ostream& operator<<(ostream& os, const pair<int, string>book);
	friend istream& operator>>(istream& is, pair<int, string>book);
	
	//PrintAll
	friend ostream& operator<<(ostream& os, const TArchive);
};