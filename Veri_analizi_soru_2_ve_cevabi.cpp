/*SORU 2.) 25-35 (dahil) arasýnda 500 adet rastgele tamsayý veri üretiniz, uygun bir dizi yapýsý üzerinde 
saklayýnýz, ekrana yazdýrýnýz. 
CEVAP :  */
#include <iostream>  
#include <cstdlib>  
#include <ctime>  
  
using namespace std;  
  
int main() {  
    const int n = 500;  
    int veriler[n];  
    srand(time(0));  
    for (int i = 0; i < n; i++) {  
        veriler[i] = rand() % 11 + 25;  
    }  
  
    cout << "Uretilen 500 rastgele sayý (25 ile 35 arasinda): \n";  
    for (int i = 0; i < n; i++) {  
        cout << veriler[i] << " ";  
        if ((i + 1) % 10 == 0) {  
            cout << endl;  
        }  
    }  
  
    return 0;  
}
