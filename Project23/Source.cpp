#include <iostream>
#include <conio.h>
#include<Windows.h>

using namespace std;

class worker
{
private:
    char name[80];
    int w_exp;
    int salary_p_h;
    int worked_h;
public:
    void enter()
    {
        cout << "������� ��� ���������: ";
        cin >> name;
        cout << "������� ���� ���������: ";
        cin >> w_exp;
        cout << "������� �������� �� ���: ";
        cin >> salary_p_h;
        cout << "������� ���-�� ������������ �����: ";
        cin >> worked_h;
        cout << endl;
    }
    void print()
    {
        double prem = 0.0;
        if (w_exp < 1)
            prem = ((salary_p_h * worked_h) / 100) * 0;
        if (w_exp > 1 && w_exp < 3)
            prem = ((salary_p_h * worked_h) / 100) * 5;
        if (w_exp > 3 && w_exp < 5)
            prem = ((salary_p_h * worked_h) / 100) * 8;
        if (w_exp > 5)
            prem = ((salary_p_h * worked_h) / 100) * 15;

        cout << name << endl;
        cout << "���� ������: " << w_exp << endl;
        cout << "�/� � ���: " << salary_p_h << endl;
        cout << "����������� �����: " << worked_h << endl;
        cout << "��������: " << (salary_p_h * worked_h) << endl;
        cout << "������: " << prem << endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    worker w;

    w.enter();
    w.print();

    _getch();

    return 0;
}