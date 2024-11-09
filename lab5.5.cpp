#include <iostream>
using namespace std;
int S(int n, int& depth, int level = 1) 
{
    setlocale(LC_ALL, "Ukrainian_Ukraine.1251");

    if (level > depth)
        depth = level;           // ��������� �������� �������, ���� ������� ������� �����

    cout<< "г���� ������: " << level << ", n = " << n << endl;

    if (n == 0) 
    {
        return 0; // ������� �������
    }

    

    return (n % 10) + S(n / 10, depth, level + 1);
}

int main() 
{
    setlocale(LC_ALL, "Ukrainian_Ukraine.1251");
    int n;
    cout << "������ ���������� �����: ";
    cin >> n;

    int depth = 0;
    int sum = S(n, depth);

    cout << "���� ���� ����� " << n << " = " << sum << endl;
    cout << "�������� ������� ������ = " << depth << endl;

    return 0;
}
