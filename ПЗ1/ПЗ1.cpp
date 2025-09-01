// ПЗ1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("color B0"); // фон і колір шрифту
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Прізвище
    string last_name;
    cout << "Введіть прізвище: ";
    getline(cin, last_name);

    // Ім’я
    string first_name;
    cout << "Введіть ім’я: ";
    getline(cin, first_name);

    // Вік
    int age;
    cout << "Введіть вік: ";
    cin >> age;
    cin.ignore(); // очищення буфера після числа

    // Курс
    int course;
    cout << "Введіть курс: ";
    cin >> course;
    cin.ignore();

    // Спеціальність
    string specialty;
    cout << "Введіть спеціальність: ";
    getline(cin, specialty);

    // Місце проживання
    string city;
    cout << "Введіть місце проживання: ";
    getline(cin, city);

    // Хобі
    string hobby;
    cout << "Введіть ваше хобі: ";
    getline(cin, hobby);

    // Вивід введених даних
    cout << "\nВаші дані:\n";
    cout << "Прізвище: " << last_name << endl;
    cout << "Ім’я: " << first_name << endl;
    cout << "Вік: " << age << endl;
    cout << "Курс: " << course << endl;
    cout << "Спеціальність: " << specialty << endl;
    cout << "Місце проживання: " << city << endl;
    cout << "Хобі: " << hobby << endl;

    return 0;
}
