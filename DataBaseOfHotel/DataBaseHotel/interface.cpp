#include "interface.h"




int outputMenuConsole()
{
	int _stateMenu{};
	cout << "�������� ��������: " << endl
		<< "(0) ����� �� ���������" << endl
		<< "(1) ������� �����" << endl
		<< "(2) �������������" << endl
		<< "(3) �������" << endl;
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
