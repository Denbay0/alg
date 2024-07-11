#include "Header.h"
#include <cstring> // Для функции strlen

bool IsKPeriodic(const char arr[], int x)
{
    int n = std::strlen(arr); // Получаем длину строки

    if (n % x != 0) {
        return false;
    }

    // Первая подстрока длиной K
    for (int i = 0; i < x; ++i) {
        if (arr[i] != arr[n - x + i]) {
            return false;
        }
    }

    // Проверка каждой подстроки длиной K
    for (int i = x; i < n; i += x) {
        for (int j = 0; j < x; ++j) {
            if (arr[j] != arr[i + j]) {
                return false;
            }
        }
    }

    return true;
}