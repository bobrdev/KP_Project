// KP_Project.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "UserInterface.h"

int main()
{
	setlocale(LC_ALL, "");

	UserInterface user_interface;

	user_interface.startUserInterface();

    return 0;
}

