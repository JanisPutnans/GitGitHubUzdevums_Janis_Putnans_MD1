#include <iostream>
#include <string>
#include "Name.h"
#include "Andrejs.h"
#include "Janis.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	Janis b;
	a.setName("Andrejs");
	b.setName("Janis");
	
	
	Names[0] = &a;
	Names[1] = &b;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}