/*Soru 1.) Bir i�letmenin son 5 y�ll�k her aya ait ciro miktarlar� (100-5000 aras�nda) veri olarak bulunmaktad�r. 
Bu veriler 
�zerinde a�a��daki hesaplamalar� yapt�ran program� yaz�n; 
. Bu verileri �ciro� ad�nda uygun bir dizi yap�s�na giriniz (veya 100-5000 aras�nda rastgele �retiniz) 
. Y�ll�k ortalama cirolar� ayr� ayr� hesaplayarak, ayr� bir �ortciro� ad�nda uygun bir dizi yap�s�na atay�n�z 
. Klavyeden girilen y�l�n (y�l s�ras�na g�re 1.y�l, 2.y�l vs.) ortalamas�ndan y�ksek olan aylar�n ay s�ras� ve 
cirolar�n� 
ekrana yazan 
. Klavyeden girilen y�l�n (y�l s�ras�na g�re 1.y�l, 2.y�l vs.) her �eyre�inin (1-2-3.aylar ilk �eyrek vs.) ortalamas�n� 
hesaplay�p ekrana yazan. 
Cevap: */
#include <iostream>  
#include <cstdlib>  
#include <ctime>  
  
using namespace std;  
  
int main() {  
    srand(time(0));  
  
    const int yilSayisi = 5;  
    const int aySayisi = 12;  
  
    int ciro[yilSayisi][aySayisi];  
    double ortciro[yilSayisi];  
  
    for (int yil = 0; yil < yilSayisi; yil++) {  
        for (int ay = 0; ay < aySayisi; ay++) {  
            ciro[yil][ay] = rand() % 4901 + 100;  
        }  
    }  
  
    for (int yil = 0; yil < yilSayisi; yil++) {  
        int toplamCiro = 0;  
        for (int ay = 0; ay <aySayisi; ay++) {  
            toplamCiro += ciro[yil][ay];  
        }  
        ortciro[yil] = toplamCiro / 12.0;  
    }  
  
    int yil;  
    cout << "Bir yil numarasi girin (1-5 arasi): ";  
    cin >> yil;  
  
    double yilOrtalamasi = ortciro[yil - 1];  
    cout << "Yil " << yil << " ortalama cirosu: " << yilOrtalamasi << endl;  
    cout << "Ortalama cirosundan yuksek olan aylar:" << endl;  
  
    for (int ay = 0; ay < aySayisi; ay++) {  
        if (ciro[yil - 1][ay] > yilOrtalamasi) {  
            cout << "Ay " << (ay + 1) << ": Ciro = " << ciro[yil - 1][ay] << endl;  
        }  
    }  
    cout << "Yil " << yil << " icin ceyrek bazinda ortalama cirolar:" << endl;  
    for (int ceyrek = 0; ceyrek < 4; ceyrek++) {  
        int toplamCiro = 0;  
        for (int ay = ceyrek * 3; ay < (ceyrek + 1) * 3; ay++) {  
            toplamCiro += ciro[yil - 1][ay];  
        }  
        double ceyrekOrtalamasi = toplamCiro / 3.0;  
        cout << (ceyrek + 1) << ". Ceyrek ortalama ciro:" << ceyrekOrtalamasi << endl;  
    }  
  
    return 0; 
}
