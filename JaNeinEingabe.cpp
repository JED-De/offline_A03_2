#include <iostream>
using namespace std;

int main()
{
	char eingabe;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> eingabe;
	if (eingabe == 'J' || eingabe == 'j' )
	{
		cout << "Es handelt sich um eine Ja Eingabe." << endl;
	}

	else if (eingabe == 'N' || eingabe == 'n')
	{
		cout << "Es handelt sich um eine Nein Eingabe." << endl;
	}

	else
	{
		cout << "Es handelt sich um eine sonstige Eingabe." << endl;
	}
	system("PAUSE");
	return 0;
}
