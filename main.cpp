#include <iostream>
using namespace std;
\\\\\изменения
int main()
{
    const int DAYS = 30;
    double rain[DAYS];
    double sum = 0;

    cout << "Введите количество осадков за каждый день месяца (30 дней):" << endl;
    for (int i = 0; i < DAYS; i++)
    {
        cout << "День " << (i + 1) << ": ";
        cin >> rain[i];
    }

    for (int i = 0; i < DAYS; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            sum += rain[i];
        }
    }

    cout << "Общее количество осадков за чётные дни: " << sum << endl;
    return 0;
}
