#include <iostream>
using namespace std;



class CD
{
public:
    
   
    string pack()
    {
        return "CD";
    }
};

class packing : public CD
{
public:
    string pack()
    {
        return "Packing";
    }
    int price()
    {
        return 5100;
    }
};


class CDType : public CD
{
public:
    CD arr[20];
    string pack()
    {
        return "CDType";
    }
    int price()
    {
        return 4200;
    }
};



class company : public CD
{
public:
    virtual int price() = 0;
};



class Sony : public company
{
public:
    int price()
    {
        return 5300;
    }
    string pack()
    {
        return "Packing price of Sony: ";
    }
};



class Samsung : public company
{
public:
    int price()
    {
        return 4500;
    }
    string pack()
    {
        return "Packing price of Samsung: ";
    }
};




class CDBuilder
{
public:
    void buildSonyCD()
    {
        Sony s1;
        cout << s1.pack() ;
        cout << s1.price() <<endl;
        cout << endl;
    }
    void buildSamsungCD()
    {
        Samsung s2;
        cout << s2.pack() ;
        cout << s2.price();
        cout << endl;
    }
};
class BuilderDemo {
public:
    void main() {
        CDBuilder c1;
        c1.buildSonyCD();
        c1.buildSamsungCD();
    }

};
int main() {
    BuilderDemo d1;
    d1.main();
    
    return 0;
}