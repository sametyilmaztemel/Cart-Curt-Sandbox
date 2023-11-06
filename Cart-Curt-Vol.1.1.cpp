#include <iostream>
#include <string>
using namespace std;

class yurt_ogrenci
{
public:
    long long TC;
    string ad;
    int oda_no;

    yurt_ogrenci()
    {
        TC = 0;
        ad = "";
        oda_no = 0;
    }

    void bilgileriGoster()
    {
        cout << "TC no: " << TC << endl;
        cout << "Ad Soyad: " << ad << endl;
        cout << "Oda no: " << oda_no << endl;
    }
};

void kayit_yap(yurt_ogrenci *ogr)
{
    cout << "TC no girin: ";
    cin >> (*ogr).TC;

    cout << "Ad Soyad girin: ";
    cin >> (*ogr).ad;

    cout << "Oda no girin: ";
    cin >> (*ogr).oda_no;
}

void ogrenciListesiniGoster(yurt_ogrenci *ogrenciler, int ogrenci_sayisi)
{
    cout << "Kaydedilen Ogrenciler:" << endl;
    for (int i = 0; i < ogrenci_sayisi; i++)
    {
        cout << "Ogrenci #" << i + 1 << endl;
        ogrenciler[i].bilgileriGoster();
        cout << endl;
    }
}

int main()
{
    const int MAX_OGRENCI = 10; // Maksimum öğrenci sayısı
    yurt_ogrenci ogrenciler[MAX_OGRENCI];
    int ogrenci_sayisi = 0;

    char devam;

    do
    {
        if (ogrenci_sayisi < MAX_OGRENCI)
        {
            kayit_yap(&ogrenciler[ogrenci_sayisi]);
            ogrenci_sayisi++;
        }
        else
        {
            cout << "Maksimum ogrenci sayisina ulasildi." << endl;
            break;
        }

        cout << "Baska bir ogrenci eklemek ister misiniz? (E/H): ";
        cin >> devam;
    } while (devam == 'E' || devam == 'e');

    ogrenciListesiniGoster(ogrenciler, ogrenci_sayisi);

    return 0;
}
