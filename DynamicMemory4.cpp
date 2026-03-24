/*
Kodun amacı
 n tane string al
 bir kelime daha al (aranan)
 dizide bu kelimeyi bul
 varsa indexini yazdır
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string* arr = new string[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string aranan;
    cin >> aranan;

    for(int i = 0; i < n; i++) {
        if(arr[i] == aranan) {
            cout << "Bulundu index: " << i << endl;
        }
    }

    delete[] arr;
} 
