#include "Time.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Time<double> t;
	Time<double> t1;

	t.Set_time(18.2, 2.9, 4.7);

	cin >> t1;

	t.Output();

	t1.Output();

	if (t1.Until_noon() == true)
		cout << "Полдень ещё не наступил" << endl;
	else
		cout << "Полдень уже наступил" << endl;

	system("Pause");
}