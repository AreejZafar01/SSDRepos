#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
	string name ;
	string model ;
	int year ;
	string colour ;

public:
	Vehicle()
	{
	string name = " ";
	string model = " " ;
	int year =0 ;
	string colour  = " ";
	
	}
	Vehicle(string n, string m, int y, string colour)
	{
	string name = n;
	string model = m ;
	int year =y ;
	string colour  = c;
	
	}
	string manufacture()
	{
		return "vehicle class produced";
	}
};

class Bus : public Vehicle
{
	string name;
	string model;
	string colour;

public:
	string manufacture()
	{
		return  "Bus class produced";;
	}
};
class Bike : public Vehicle
{
	string name ;
	string model ;
	string colour;

public:
	string manufacture()
	{
		return "Bike class produced";
	}
};

class Workshop

{
public:
	string apply()
	{
		Vehicle v;
		cout << "\nVehicle : " << v.manufacture();
	}
	string name()
	{
		return "Workshop Formed";
	}
};
class Produce :public Workshop
{
public:
	string name()
	{
		return "Workshop Class produced";
	}
};
class Assemble :public Workshop
{
public:
	string name()
	{
		return " Workshop Class Assembled";
	}
};

int main()
{
	Vehicle v;
	Bus b;
	Bike k;

	cout<<"Vehicle: "<<v.manufacture();
	cout<<endl;
	cout << " Bus: " << b.manufacture();
	cout<<endl;
	cout << " Bike: " << k.manufacture();
	cout<<endl;
	Workshop w;
	Produce p;
	Assemble a;
		cout<<endl;
	cout << " Workshop: " << w.name();
		cout<<endl;
	cout << " Workshop: " << p.name();
		cout<<endl;
	cout << " Workshop: " << a.name();
		cout<<endl;
	return 0;

}

