/*SORU 2.) 25-35 (dahil) aras�nda 500 adet rastgele tamsay� veri �retiniz, uygun bir dizi yap�s� �zerinde 
saklay�n�z, ekrana yazd�r�n�z. 
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
  
    cout << "Uretilen 500 rastgele say� (25 ile 35 arasinda): \n";  
    for (int i = 0; i < n; i++) {  
        cout << veriler[i] << " ";  
        if ((i + 1) % 10 == 0) {  
            cout << endl;  
        }  
    }  
  
    return 0;  
}
