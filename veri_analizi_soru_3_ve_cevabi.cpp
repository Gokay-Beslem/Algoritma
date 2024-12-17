/*SORU 3.) Ortalamasý 25±5 aralýðýnda olan 10-35 (dahil) arasýnda 500 adet rastgele tamsayý veri üretiniz, 
uygun bir dizi yapýsý üzerinde saklayýnýz, ekrana yazdýrýnýz. */
 
#include <iostream>  
#include <cstdlib>  
#include <ctime>  
#include <cmath>  
  
using namespace std;  
  
int main() {  
    const int n = 500;  
    int veriler[n];  
    srand(time(0));  
    for (int i = 0; i < n; i++) {  
        int rastgeleDeger = rand() % 11 + 20;  
  
        if (rastgeleDeger < 10) {  
            rastgeleDeger = 10;  
        } else if (rastgeleDeger > 35) {  
           rastgeleDeger = 35;  
        }  
  
        veriler[i] = rastgeleDeger;  
    }  
  
    cout << "Üretilen 500 rastgele sayý (Ortalama 25 ± 5 aralýðýnda): \n";  
    for (int i = 0; i < n; i++) {  
        cout << veriler[i] << " ";  
        if ((i + 1) % 10 == 0) {  
            cout << endl;  
        }  
    }  
  
    return 0;  
}
