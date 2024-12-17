/*SORU 3.) Ortalamas� 25�5 aral���nda olan 10-35 (dahil) aras�nda 500 adet rastgele tamsay� veri �retiniz, 
uygun bir dizi yap�s� �zerinde saklay�n�z, ekrana yazd�r�n�z. */
 
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
  
    cout << "�retilen 500 rastgele say� (Ortalama 25 � 5 aral���nda): \n";  
    for (int i = 0; i < n; i++) {  
        cout << veriler[i] << " ";  
        if ((i + 1) % 10 == 0) {  
            cout << endl;  
        }  
    }  
  
    return 0;  
}
