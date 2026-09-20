#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    // Шаг 1: Объявление переменных
    int years, month, day;

    // Шаг 2: Ввод количества прожитых лет
    printf("Введите количество прожитых лет:");
    scanf("%d", &years);

    // Шаг 3: Вычисление количества дней
    day = years * 365;

    // Шаг 4: Вычисление количества месяцев
    month = years * 12;

    // Шаг 5: Форматированный вывод результатов
    printf("\nПЕРЕСЧЁТ ПРОЖИТЫХ ЛЕТ В МЕСЯЦЫ И ДНИ\n");
    printf("************************************\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Количество прожитых лет: %d\n\n", years);

    printf("РАСЧЁТ:\n");
    printf("- Месяцев: %d * 12 = %d\n", years, month);
    printf("- Дней:    %d * 365 = %d\n\n", years, day);

    printf("************************************\n");
    printf("ПРОЖИТО: %d месяцев и %d дней\n", month, day);

    return 0;
}