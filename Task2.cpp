#include <iostream>
#include <clocale>
using namespace std;

bool reserveRoom(int& freeRooms, int requested) {
    if (requested > 0 && freeRooms >= requested) {
        freeRooms = freeRooms - requested;
        return true;
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int rooms1 = 5;
    cout << "Свободно до: " << rooms1 << endl;
    bool result1 = reserveRoom(rooms1, 2);
    cout << "Успешно? (1-да, 0-нет): " << result1 << ". Свободно после: " << rooms1 << endl;

    int rooms2 = 1;
    cout << "Свободно до: " << rooms2 << endl;
    bool result2 = reserveRoom(rooms2, 3);
    cout << "Успешно? (1-да, 0-нет): " << result2 << ". Свободно после: " << rooms2 << endl;

    return 0;
}
