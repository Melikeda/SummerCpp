/*
Kodun amacı
 Kullanıcıdan n tane sayı al
 Bu sayılar arasında en büyük olanı bul
 Sonucu yazdır
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];   //Kullanıcıdan bir sayı al, onu dizinin i. indexine yaz
    }

    int max = arr[0];   //İlk eleman başlangıçta en büyük kabul edilir

    for(int i = 1; i < n; i++) {   //En büyük değeri bulma
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "En buyuk: " << max;

    delete[] arr;
}
