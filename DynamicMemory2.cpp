/*
Kodun amacı
 Kullanıcıdan n tane sayı al
 Bu sayıları topla
 Ortalamasını hesapla
 Belleği temizle
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Ortalama: " << (float)sum / n;

    delete[] arr;
}
