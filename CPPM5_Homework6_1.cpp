#include <iostream>
#include "Arithmetic.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int x, y;
    float result;
    int operationCode;
    std::string operationStr;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operationCode;

    switch (operationCode)
    {
    case 1:
        result = IntegerArithmetic::sum(x, y);
        operationStr = "плюс";
        break;
    case 2:
        result = IntegerArithmetic::substract(x, y);
        operationStr = "минус";
        break;
    case 3:
        result = IntegerArithmetic::multiply(x, y);
        operationStr = "умножить";
        break;
    case 4:
        if (y == 0)
        {
            std::cout << "На ноль делить нельзя!";
            return 1;
        }
        result = IntegerArithmetic::divide(x, y);
        operationStr = "разделить на";
        break;
    case 5:
        result = IntegerArithmetic::power(x, y);
        operationStr = "в степени";
        break;
    default:
        std::cout << "Неверный код операции!";
        return 1;
    }

    std::cout << x << " " << operationStr << " " << y << " = " << result << std::endl;

    return 0;
}
