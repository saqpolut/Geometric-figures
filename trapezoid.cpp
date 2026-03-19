#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a, b, c, d, h;
    
    // Ввод данных
    cout << "Верхнее основание a: ";
    cin >> a;
    cout << "Нижнее основание b: ";
    cin >> b;
    cout << "Боковая сторона c: ";
    cin >> c;
    cout << "Боковая сторона d: ";
    cin >> d;
    cout << "Высота h: ";
    cin >> h;
    
    // Проверка на положительные числа
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
        cout << "Все значения должны быть положительными" << endl;
        return 1;
    }
    //Проверка на существование
    if ((a + b + c < d) || (a + b + d < c) || (a + c + d < b) || (c + b + d < a)){
        cout << "Сумма трёх любых сторон должна быть больше четвёртой" << endl;
        return 1;
    }
    
    // Вычисления
    double P = a + b + c + d;
    double S = ((a + b) / 2) * h;
    double M = (a + b) / 2;
    
    // Вывод результатов
    cout << "Периметр трапеции: " << P << endl;
    cout << "Площадь трапеции: " << S << endl;
    cout << "Средняя линия: " << M << endl;
    
    return 0;
}
