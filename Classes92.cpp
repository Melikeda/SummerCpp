// non-member operator overloads
#include <iostream>      // cout kullanabilmek için gerekli kütüphane
using namespace std;     // std::cout yerine direkt cout yazmak için

class CVector {          // CVector adında bir sınıf tanımlanıyor
  public:                // public üyeler sınıf dışından erişilebilir
    int x, y;            // vektörün iki bileşeni: x ve y

    CVector () {}        // parametresiz constructor
                         // boş bir CVector nesnesi oluşturur

    CVector (int a, int b) : x(a), y(b) {}
                         // parametreli constructor
                         // a değeri x'e, b değeri y'ye atanır
                         // örn: CVector foo(3,1) -> x=3, y=1
};

// + operatörü sınıfın DIŞINDA tanımlanıyor
// Bu yüzden buna non-member operator overload denir
CVector operator+ (const CVector& lhs, const CVector& rhs) {
                         // lhs = left hand side  -> operatörün sol tarafı
                         // rhs = right hand side -> operatörün sağ tarafı
                         // const referans kullanıldığı için nesneler kopyalanmaz
                         // ve içerikleri değiştirilmez

  CVector temp;          // sonucu tutmak için geçici bir CVector nesnesi oluşturulur

  temp.x = lhs.x + rhs.x;
                         // sol nesnenin x değeri ile sağ nesnenin x değeri toplanır

  temp.y = lhs.y + rhs.y;
                         // sol nesnenin y değeri ile sağ nesnenin y değeri toplanır

  return temp;           // toplama sonucu olan yeni vektör geri döndürülür
}

int main () {
  CVector foo (3,1);     // foo nesnesi oluşturulur -> x=3, y=1
  CVector bar (1,2);     // bar nesnesi oluşturulur -> x=1, y=2

  CVector result;        // sonucu tutacak boş nesne oluşturulur

  result = foo + bar;    // + operatörü çağrılır
                         // aslında bu satır şuna eşittir:
                         // result = operator+(foo, bar);
                         // yani foo ve bar toplatılır

  cout << result.x << ',' << result.y << '\n';
                         // result nesnesinin x ve y değerleri ekrana yazdırılır
                         // çıktı: 4,3

  return 0;              // program başarıyla sona erer
}
