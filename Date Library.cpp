#include <iostream>
#include "clsDate.h"

using namespace std;

int main() {

	clsDate Date;
	Date.Print();

	clsDate Date1("9/03/2025");
	Date1.Print();

	clsDate Date2(10, 3, 2025);
	Date2.Print();

	Date2.PrintMonthCalendar();

	// Hi i Am Mohamed 
	// for use this Program you Have to methode for this 
	// Creat A objct from Class Date And Called The Method form The Class Like This ( clsDate Date ; Date.NameOfMethod )
	// The Second Method if you doesnt want use obj you can use static Methode dierctly from class like this ( clsDate::NameOfMethod)

	// Enjoy it :)
	
}