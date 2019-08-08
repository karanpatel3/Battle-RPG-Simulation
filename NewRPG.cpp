#include <iostream>
#include "BattleSys.h"

//TODO Implement status system

int main()
{ 
	char play;

	std::cout << "Do you wanna fight?\n" << "Press y for yes or n for no.\n" << std::endl;
	std::cin >> play;
	if (play == 'y')
	{
		std::cout << "Enemy Approaches!!!\n" << std::endl;
		Battle();
	}
	else
	{
		std::cout << "ok then....bye" << std::endl;
		return 0;
	}

}