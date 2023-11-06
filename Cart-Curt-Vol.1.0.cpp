#include <iostream>
#include <string>
#include <queue>

using namespace std;

class ogrenci_otomasyon {
public:
    long long int TC;
    string isim;

    ogrenci_otomasyon() {
        TC = 11111111110;
        isim = "Ebu Huzeyfe";
    }

    ogrenci_otomasyon(long long int tc, const string& name) {
        TC = tc;
        isim = name;
    }
};

void bilgi_al(queue<ogrenci_otomasyon>& kuyruk) {
    ogrenci_otomasyon ogr1;

    cout << "TC Giriniz: ";
    cin >> ogr1.TC;
    cout << "İsim giriniz: ";
    cin.ignore();
    getline(cin, ogr1.isim);

    kuyruk.push(ogr1);
}

int main() {
    queue<ogrenci_otomasyon> ogrenci_kuyrugu;

    while (true) {
        cout << "Öğrenci bilgilerini girmek için 1'e, çıkmak için 0'a basın: ";
        int secim;
        cin >> secim;

        if (secim == 0) {
            break;
        } else if (secim == 1) {
            bilgi_al(ogrenci_kuyrugu);
        } else {
            cout << "Geçersiz seçim!" << endl;
        }
    }

    while (!ogrenci_kuyrugu.empty()) {
        ogrenci_otomasyon ogr = ogrenci_kuyrugu.front();
        ogrenci_kuyrugu.pop();
        cout << "Girilen Bilgiler:" << endl;
        cout << "TC: " << ogr.TC << endl;
        cout << "İsim: " << ogr.isim << endl;
    }

    return 0;
}
