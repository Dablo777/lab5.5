#include <iostream>
using namespace std;
int S(int n, int& depth, int level = 1) 
{
    setlocale(LC_ALL, "Ukrainian_Ukraine.1251");

    if (level > depth)
        depth = level;           // оновлюємо загальну глибину, якщо поточна глибина більша

    cout<< "Рівень рекурсії: " << level << ", n = " << n << endl;

    if (n == 0) 
    {
        return 0; // базовий випадок
    }

    

    return (n % 10) + S(n / 10, depth, level + 1);
}

int main() 
{
    setlocale(LC_ALL, "Ukrainian_Ukraine.1251");
    int n;
    cout << "Введіть натуральне число: ";
    cin >> n;

    int depth = 0;
    int sum = S(n, depth);

    cout << "Сума цифр числа " << n << " = " << sum << endl;
    cout << "Загальна глибина рекурсії = " << depth << endl;

    return 0;
}
