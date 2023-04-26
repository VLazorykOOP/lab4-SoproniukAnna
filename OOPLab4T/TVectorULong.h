#pragma once

class TVectorULong
{
private:
    unsigned long* array = nullptr;
    int size = 0;
    int state = 0; //1 - несумісність, 2 - ділення на 0, 3 - індекс за межами масиву, 4 - унарний мінус
    static int counter;
public:
    TVectorULong();
    TVectorULong(int size);
    TVectorULong(int size, unsigned long value);
    TVectorULong(const TVectorULong& p);
    //TVectorULong(const TVectorULong&& p);
    ~TVectorULong();
    
    //Unari
    TVectorULong& operator++();
    TVectorULong& operator--();
    TVectorULong operator++(int);
    TVectorULong operator--(int);
    bool operator!();
    TVectorULong& operator~();
    TVectorULong& operator-();
    
    //Appropriation
    TVectorULong& operator=(TVectorULong p);
    //TVectorULong& operator=(TVectorULong&& p);
    TVectorULong& operator+=(TVectorULong& p);
    TVectorULong& operator-=(TVectorULong& p);
    TVectorULong& operator*=(unsigned long value);
    TVectorULong& operator/=(unsigned long value);
    TVectorULong& operator%=(unsigned long value);
    TVectorULong& operator|=(TVectorULong& p);
    TVectorULong& operator^=(TVectorULong& p);
    TVectorULong& operator&=(TVectorULong& p);

    //Arithmetic binary
    TVectorULong operator+(TVectorULong& p);
    TVectorULong operator-(TVectorULong& p);
    TVectorULong operator*(unsigned long value);
    TVectorULong operator/(unsigned long value);
    TVectorULong operator%(unsigned long value);

    //Bitwise binary
    TVectorULong operator|(TVectorULong& p);
    TVectorULong operator^(TVectorULong& p);
    TVectorULong operator&(TVectorULong& p);

    //bitwise shift operations
    friend TVectorULong& operator>>(TVectorULong& p, unsigned long value);
    friend TVectorULong& operator<<(TVectorULong& p, unsigned long value);
    
    //Indexing
    unsigned long& operator[](const int index);

    //New
    void* operator new(size_t size);

    //Delete
    void operator delete(void* pointer);
 
    unsigned long operator()();
     
    //comparison //size
    bool operator==(TVectorULong& p);
    bool operator!=(TVectorULong& p);
    bool operator>(TVectorULong& p);
    bool operator>=(TVectorULong& p);
    bool operator<(TVectorULong& p);
    bool operator<=(TVectorULong& p);

    void Print();
};


