// Sort surname.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h> //бібліотека для сортування строк
using namespace std;

void sortSurname(string* S, const int n);
void printSurname(string* S, const int n);
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 5;
    string Surname[n] = {};
    for (int i = 0; i < 5; i++) {
        cout << "Введіть " << i + 1 <<" прізвище ";
        cin >> Surname[i];
    }
    cout << endl;
    sortSurname(Surname, n);  
    cout << "Відсортований список прізвищ:" << endl;
    printSurname(Surname, n);
}
void printSurname(string* S, const int n){
    for (int i = 0; i < n; i++) {
        cout << S[i] << endl;
    }
    cout << endl << endl;
}
void sortSurname(string* S, const int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if (strcmp(S[i].c_str(), S[j].c_str()) > 0) // strcmp вбудована функція сортування строк               
                swap(S[i], S[j]);                       //c_str() повертає адрес строки для порівняння
        }
}