#include "interface.h"




int outputMenuConsole()
{
	int _stateMenu{};
	cout << "Выберите действие: " << endl
		<< "(0) Выход из программы" << endl
		<< "(1) Вввод данных" << endl
		<< "(2) Редактировать данные" << endl
		<< "(3) Добавление данных" << endl
		<< "(4) Удалить данные" << endl
		<< "(5) Поиск" << endl
		<< "(6) Сортировка" << endl
		<< "(7) Сохранить данные" << endl;
	cin >> _stateMenu;	
	return _stateMenu;
}

void menuOperations()
{
	int stateMenu = outputMenuConsole();
	while (stateMenu !=0)
	{


	}
}
