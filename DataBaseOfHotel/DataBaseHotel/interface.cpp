#include "interface.h"




int outputMenuConsole()
{
	int _stateMenu{};
	cout << "�������� ��������: " << endl
		<< "(0) ����� �� ���������" << endl
		<< "(1) ����� ������" << endl
		<< "(2) ������������� ������" << endl
		<< "(3) ���������� ������" << endl
		<< "(4) ������� ������" << endl
		<< "(5) �����" << endl
		<< "(6) ����������" << endl
		<< "(7) ��������� ������" << endl;
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
