/*
Kodun amacı:
 Kullanıcıdan kaç sayı gireceğini öğren
 O kadar yer aç (dinamik bellek)
 Sayıları al
 Ekrana yazdır
*/

#include <iostream>
using namespace std;

int main() {
    int n;  //Değişken tanımlama. Kullanıcının kaç sayı gireceğini tutacak
    cout << "Kac sayi gireceksin: ";  //Kullanıcıdan veri alma
    cin >> n;

    int* arr = new int[n];  //bellekte n tane int yer açar. arr → bu dizinin başlangıç adresini tutar

    for(int i = 0; i < n; i++) {     //Kullanıcıdan dizi elemanlarını alma
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
} 
