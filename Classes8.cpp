// overloading operators example
#include <iostream>   // cout gibi giriş/çıkış işlemleri için gerekli kütüphane
using namespace std;  // std::cout yerine direkt cout yazabilmek için

class CVector {       // CVector adında bir sınıf tanımlanıyor
  public:             // public: bu bölümdeki üyelere sınıf dışından erişilebilir
    int x, y;         // vektörün iki bileşeni: x ve y

    CVector () {};    // parametresiz (default) constructor
                      // Nesne oluşturulurken değer verilmezse bu çalışır

    CVector (int a, int b) : x(a), y(b) {}  
                      // parametreli constructor
                      // a değeri x'e, b değeri y'ye atanır
                      // örn: CVector foo(3,1); -> x=3, y=1

    CVector operator + (const CVector&);  
                      // + operatörünü overload ediyoruz
                      // Bu fonksiyon bir CVector parametresi alır
                      // ve sonuç olarak yeni bir CVector döndürür
};

// operator+ fonksiyonunun sınıf dışında tanımı
CVector CVector::operator+ (const CVector& param) {
                      // Bu fonksiyon CVector sınıfına ait
                      // + operatörünün nasıl çalışacağını tanımlar
                      // param = sağ taraftaki nesne

  CVector temp;       // sonucu tutmak için geçici bir CVector nesnesi oluşturuluyor

  temp.x = x + param.x;  
                      // mevcut nesnenin x'i + param nesnesinin x'i
                      // burada x, sol taraftaki nesnenin x değeridir

  temp.y = y + param.y;  
                      // mevcut nesnenin y'si + param nesnesinin y'si

  return temp;        // bulunan sonucu geri döndür
}

int main () {         
  CVector foo (3,1);  // foo adlı nesne oluşturulur -> x=3, y=1
  CVector bar (1,2);  // bar adlı nesne oluşturulur -> x=1, y=2

  CVector result;     // result adlı boş bir CVector nesnesi oluşturulur

  result = foo + bar; // + operatörü çağrılır
                      // aslında bu satır şuna eşittir:
                      // result = foo.operator+(bar);
                      // yani foo ve bar toplanır, sonuç result içine atanır

  cout << result.x << ',' << result.y << '\n';
                      // result nesnesinin x ve y değerlerini ekrana yazdırır
                      // çıktı: 4,3

  return 0;           // program başarıyla bitti
}
