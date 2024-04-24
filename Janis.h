#include <iostream>
#include "Name.h"
using namespace std;

class Janis: public Name
{
	public:
		Janis(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};

