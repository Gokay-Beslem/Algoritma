/*Soru 1.) Bir iþletmenin son 5 yýllýk her aya ait ciro miktarlarý (100-5000 arasýnda) veri olarak bulunmaktadýr. 
Bu veriler 
üzerinde aþaðýdaki hesaplamalarý yaptýran programý yazýn; 
. Bu verileri “ciro” adýnda uygun bir dizi yapýsýna giriniz (veya 100-5000 arasýnda rastgele üretiniz) 
. Yýllýk ortalama cirolarý ayrý ayrý hesaplayarak, ayrý bir “ortciro” adýnda uygun bir dizi yapýsýna atayýnýz 
. Klavyeden girilen yýlýn (yýl sýrasýna göre 1.yýl, 2.yýl vs.) ortalamasýndan yüksek olan aylarýn ay sýrasý ve 
cirolarýný 
ekrana yazan 
. Klavyeden girilen yýlýn (yýl sýrasýna göre 1.yýl, 2.yýl vs.) her çeyreðinin (1-2-3.aylar ilk çeyrek vs.) ortalamasýný 
hesaplayýp ekrana yazan. 
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
