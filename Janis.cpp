#include <iostream>
#include "Janis.h"

using namespace std;

Janis::Janis(string n)
{
	name=n;
}

void Janis::setName(string n)
{
	name=n;
}

void Janis::Print() const
{
	cout << name << endl;
}


