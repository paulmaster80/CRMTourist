#include "interface.h"




int outputMenuConsole()
{
	int _stateMenu{};
	cout << "Выберите действие: " << endl
		<< "(0) Выход из программы" << endl
		<< "(1) Создать новый" << endl
		<< "(2) Редактировать" << endl
		<< "(3) Удалить" << endl;
	cin >> _stateMenu;	
	return _stateMenu;
}

void menuOperations()
{
	int stateMenu = outputMenuConsole();
	while (stateMenu !=0)
	{
		switch (stateMenu)
		{
		case 1:
			
			break;
		case 2:

			break;
		case 3:

			break;
		default:
			break;
		}

	}
	cout << "Good by!" << endl;
}
