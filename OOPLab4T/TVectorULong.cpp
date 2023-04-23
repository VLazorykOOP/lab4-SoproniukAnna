#include "TVectorULong.h"
#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES 
using namespace std;

TVectorULong::TVectorULong()
{
	this->array = new unsigned long[1] {} ;
}

TVectorULong::TVectorULong(int size)
{
	this->array = new unsigned long[size] {};
}

TVectorULong::TVectorULong(int size, unsigned long value)
{
	this->array = new unsigned long[size];
	for (int i = 0; i < size; i++)
		this->array[i] = value;
}

TVectorULong::TVectorULong(const TVectorULong& p)
{
	this->size = p.size;
	this->state = p.state;
	this->array = new unsigned long[p.size];
	if (this->array == nullptr)
		this->state = 1;
	else
		for (int i = 0; i < this->size; i++)
			this->array[i] = p.array[i];
}

TVectorULong::~TVectorULong()
{
	delete[] this->array;
}




//----------------Unari----------------
TVectorULong& TVectorULong::operator++()
{
	for (int i = 0; i < size; i++) {
		this->array[i]++;
	}
	return *this;
}

TVectorULong& TVectorULong::operator--()
{
	for (int i = 0; i < size; i++) {
		this->array[i]--;
	}
	return *this;
}

bool TVectorULong::operator!()
{
	return size != 0;
}

TVectorULong& TVectorULong::operator~()
{
	for (int i = 0; i < size; i++) 
		this->array[i] = ~array[i];
	return *this;
}

TVectorULong& TVectorULong::operator-()
{
	this->state = 4;
	/*for (int i = 0; i < size; i++)
		this->array[i] = -this->array[i];*/
	return *this;
}




//----------------Appropriation----------------
TVectorULong& TVectorULong::operator=(TVectorULong& p)
{
	this->size = p.size;
	delete[] array;
	unsigned long* vector{ new unsigned long[p.size] };
	for (int i = 0; i < p.size; i++)
		this->array[i] = p.array[i];
	return *this;
}

 
TVectorULong& TVectorULong::operator+=(TVectorULong& p)
{
	if (this->size != p.size)
	{
		this->state = 1;
		return *this;
	}
	for (int i = 0; i < this->size; i++)
		this->array[i] += p.array[i];
	return *this;
}

TVectorULong& TVectorULong::operator-=(TVectorULong& p)
{
	if (this->size != p.size)
	{
		this->state = 1;
		return *this;
	}
	for (int i = 0; i < this->size; i++)
		this->array[i] -= p.array[i];
	return *this;
}

TVectorULong& TVectorULong::operator*=(unsigned long value)
{
	for (int i = 0; i < this->size; i++)
		this->array[i] *= value;
	return *this;
}

TVectorULong& TVectorULong::operator/=(unsigned long value)
{
	if (value == 0)
	{
		this->state = 2;
		return *this;
	}
	for (int i = 0; i < this->size; i++)
		this->array[i] /= value;
	return *this;
}

TVectorULong& TVectorULong::operator%=(unsigned long value)
{
	if (value == 0)
	{
		this->state = 2;
		return *this;
	}
	for (int i = 0; i < this->size; i++)
		this->array[i] %= value;
	return *this;
}

TVectorULong& TVectorULong::operator|=(TVectorULong& p)
{
	if (this->size != p.size)
	{
		this->state = 1;
		return *this;
	}
	for (int i = 0; i < this->size; i++)
		this->array[i] |= p.array[i];
	return *this;
}

TVectorULong& TVectorULong::operator^=(TVectorULong& p)
{
	if (this->size != p.size)
	{
		this->state = 1;
		return *this;
	}
	for (int i = 0; i < this->size; i++)
		this->array[i] ^= p.array[i];
	return *this;
}

TVectorULong& TVectorULong::operator&=(TVectorULong& p)
{
	if (this->size != p.size)
	{
		this->state = 1;
		return *this;
	}
	for (int i = 0; i < this->size; i++)
		this->array[i] &= p.array[i];
	return *this;
}



//----------------Arithmetic binary----------------
TVectorULong& TVectorULong::operator+(TVectorULong& p)
{
	TVectorULong tmp(this->size);
	if (this->size!=p.size)
	{
		tmp.state = 1;
		return tmp;
	}
	for (int i = 0; i < this->size; i++)
		tmp.array[i] = this->array[i] + p.array[i];
	return tmp;
}

TVectorULong& TVectorULong::operator-(TVectorULong& p)
{
	TVectorULong tmp(this->size);
	if (this->size != p.size)
	{
		tmp.state = 1;
		return tmp;
	}
	for (int i = 0; i < this->size; i++)
		tmp.array[i] = this->array[i] - p.array[i];
	return tmp;
}

TVectorULong& TVectorULong::operator*(unsigned long value)
{
	TVectorULong tmp(this->size);
	for (int i = 0; i < this->size; i++)
		tmp.array[i] = this->array[i] * value;
	return tmp;
}

TVectorULong& TVectorULong::operator/(unsigned long value)
{
	TVectorULong tmp(this->size);
	if (value == 0)
	{
		tmp.state = 2;
		return tmp;
	}
	for (int i = 0; i < this->size; i++)
		tmp.array[i] = this->array[i] / value;
	return tmp;
}

TVectorULong& TVectorULong::operator%(unsigned long value)
{
	TVectorULong tmp(this->size);
	if (value == 0)
	{
		tmp.state = 2;
		return tmp;
	}
	for (int i = 0; i < size; i++)
		tmp.array[i] = this->array[i] % value;
	return tmp;
}



//----------------Bitwise binary----------------
TVectorULong& TVectorULong::operator|(TVectorULong& p)
{
	TVectorULong tmp(this->size);
	if (this->size != p.size)
	{
		tmp.state = 1;
		return tmp;
	}
	for (int i = 0; i < this->size; i++)
		tmp.array[i] = this->array[i] | p.array[i];
	return tmp;
}

TVectorULong& TVectorULong::operator^(TVectorULong& p)
{
	TVectorULong tmp(this->size);
	if (this->size != p.size)
	{
		tmp.state = 1;
		return tmp;
	}
	for (int i = 0; i < this->size; i++)
		tmp.array[i] = this->array[i] ^ p.array[i];
	return tmp;
}

TVectorULong& TVectorULong::operator&(TVectorULong& p)
{
	TVectorULong tmp(this->size);
	if (this->size != p.size)
	{
		tmp.state = 1;
		return tmp;
	}
	for (int i = 0; i < this->size; i++)
		tmp.array[i] = this->array[i] & p.array[i];
	return tmp;
}


//----------------Indexing----------------
unsigned long TVectorULong::operator[](const int index)
{
	if (index < 0 || index > this->size)
	{
		this->state = 3;
		return this->array[this->size - 1];
	}
	return this->array[index];
}

//----------------New----------------
void* TVectorULong::operator new(size_t size)
{
		return new unsigned long[size] {};
}

//----------------Delete----------------
void TVectorULong::operator delete(void* pointer)
{
	delete[] pointer;
}



//----------------Comparison size----------------
bool TVectorULong::operator==(TVectorULong& p)
{
	if (this->size == p.size && this->array == p.array)
		return true;
	else
		return false;
}

bool TVectorULong::operator!=(TVectorULong& p)
{
	if (this->size != p.size || this->array != p.array)
		return true;
	else
		return false;
}

bool TVectorULong::operator>(TVectorULong& p)
{
	if (this->size > p.size)
		return true;
	else
		return false;
}

bool TVectorULong::operator>=(TVectorULong& p)
{
	if (this->size >= p.size)
		return true;
	else
		return false;
}

bool TVectorULong::operator<(TVectorULong& p)
{
	if (this->size < p.size)
		return true;
	else
		return false;
}

bool TVectorULong::operator<=(TVectorULong& p)
{
	if (this->size <= p.size)
		return true;
	else
		return false;
}





//----------------Bitwise shift operations----------------
TVectorULong& operator>>(TVectorULong& p, unsigned long value)
{
	TVectorULong tmp(p.size);
	for (int i = 0; i < p.size; i++) 
		tmp.array[i] = p.array[i] >> value;
	return tmp;
}

TVectorULong& operator<<(TVectorULong& p, unsigned long value)
{
	TVectorULong tmp(p.size);
	for (int i = 0; i < p.size; i++)
		tmp.array[i] = p.array[i] << value;
	return tmp;
}

