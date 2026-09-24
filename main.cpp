// Лабораторная работа № 1, вариант 30. Выполнил: Теплов М. Д., группа ПИ-52.

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

const double g = 9.81;

// Скорость падения
double fallSpeed(double t) {
    return g * t;
}


// ===== Главная функция: меню =====

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int choice;
    double t, h;

    do {
        cout << "\n=== Рассчет падения. Вариант 30: ===\n";
        cout << "1. Найти скорость падения\n";
        cout << "2. Найти высоту падения\n";
        cout << "3. Найти время падения\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";

        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите время t: ";
            cin >> t;
            cout << "Скорость v = " << fallSpeed(t) << "\n";
            break;

        case 2:

            break;

        case 3:

            break;

        case 0:
            cout << "Работа завершена.\n";
            break;

        default:
            cout << "Такого пункта нет.\n";
        }

    } while (choice != 0);

    return 0;
}
