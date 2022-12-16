#include <iostream>
#include "windows.h"
using namespace std;
struct hotel {
    char hotelname[66];
    char hotelclass[66];
    int hotelfreen;
    double hotelpricen;
};
void hotelinfo(hotel h) {
    cout << "Назва готелю: " << h.hotelname << endl;
    cout << "Клас готелю: " << h.hotelclass << endl;
    cout << "Кількість вільних номерів у готелі: " << h.hotelfreen << endl;
    cout << "Ціна номеру у готелі: " << h.hotelpricen << endl;
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 6;
    char a[50];
    int b;
    hotel A[n] = { { "Silver", "One Star", 12, 1250},
                   { "Gold", "Two Stars", 9, 3500},
                   { "Platinum", "Three Stars", 6, 4444},
                   { "Diamond", "Four Stars", 3, 7777},
                   { "Master", "Five Stars", 0, 14100},
                   { "Grandmaster", "Five Stars", 2, 24810},
    };
    for (int i = 0; i < n; i++) {
        if ((A[i].hotelfreen) > 0) {
            cout << "Назва готелю: " << A[i].hotelname << ". Кількість вільних номерів: " << A[i].hotelfreen << endl;
        }
        else {
            cout << "Назва готелю: " << A[i].hotelname << ". Всі номера зайняті" << endl;
        }
    }
    cout << "Введіть будь ласка клас готелю, який хочете побачити(Формат: one, two, three....): ";
    cin >> a;
    for (int i = 0; i < n; i++) {
        if (a[1] == A[i].hotelclass[1]) {
            cout << "Ви шукали готель класу " << A[i].hotelclass << ". Готель такого класу, це готель " << A[i].hotelname << endl;
        }
    }
    cout << "Введіть будь ласка ціну, яку б бажали бачити за ніч у готелі: ";
    cin >> b;
    cout << "Враховуючи ціну, яку ви обрали, ви можете зняти номера у готелі: ";
    for (int i = 0; i < n; i++) {
        if (b >= A[i].hotelpricen) {
            cout << A[i].hotelname << "; ";
        }
    }
    return 0;
}
