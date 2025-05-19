
#include <iostream>

using namespace std;

void enterNumber();
void enterDigit();
void calculateProduct();
void countDigits();

int main() 
{
    int choice;
    do 
    {
        cout << "\nМеню:" << endl;
        cout << "1. Ввести натуральное число X" << endl;
        cout << "2. Ввести цифру N (которая меньше числа разрядов числа X)" << endl;
        cout << "3. Определить произведение последних N цифр натурального числа X" << endl;
        cout << "4. Определить количество цифр введенного числа X" << endl;
        cout << "5. Выход" << endl;
        cout << "Введите номер действия: ";
        cin >> choice;
        
        switch (choice) 
        {
            case 1:
                enterNumber();
                break;
            case 2:
                enterDigit();
                break;
            case 3:
                calculateProduct();
                break;
            case 4:
                countDigits();
                break;
            case 5:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Некорректный ввод. Попробуйте снова." << endl;
        }
    } while (choice != 5);
    
    return 0;
}

int N;
int X;

void enterNumber() 
{
    do {
        cout << "Введите натуральное число X: ";
        cin >> X;
    } while (X <= 0);
}

void enterDigit() 
{
    // Реализация будет добавлена позже
    cout << "Функция enterDigit() пока не реализована." << endl;
}

void calculateProduct() 
{
    // Реализация будет добавлена позже
    cout << "Функция calculateProduct() пока не реализована." << endl;
}

void countDigits() 
{
    // Реализация будет добавлена позже
    cout << "Функция countDigits() пока не реализована." << endl;
}