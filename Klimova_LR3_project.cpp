
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
   int digitCount = 0;
    int temp = X;
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }

    do {
        cout << "Введите цифру N (меньше количества разрядов X): ";
        cin >> N;
    } while (N < 0 || N >= digitCount);
}

void calculateProduct() 
{
    int count = 0;
    int temp = X;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    cout << "Количество цифр в числе X: " << count << endl;
}

void countDigits() 
{
  int temp = X;
    int product = 1;

    for (int i = 0; i < N; ++i) {
        int digit = temp % 10;
        product *= digit;
        temp /= 10;
    }

    cout << "Произведение последних " << N << " цифр числа X: " << product << endl;
}