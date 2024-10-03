#include <iostream>
using namespace std;

    //1

    void valyutaMubadilesi() {
        double azn, usd;
        cout << "AZN-dan USD-yə mübadilə etmək üçün məbləği daxil edin: ";
        cin >> azn;
        usd = azn * 0.59; // Təsvir üçün sabit mübadilə kursu
        cout << azn << " AZN = " << usd << " USD\n";
    }

    // Kolkulyator funksiyası
    void kolkulyator() {
        double a, b;
        char op;
        cout << "Birinci ədəd: ";
        cin >> a;
        cout << "İkinci ədəd: ";
        cin >> b;
        cout << "Əməliyyatı seçin (+, -, *, /): ";
        cin >> op;

        switch (op) {
        case '+':
            cout << "Nəticə: " << a + b << endl;
            break;
        case '-':
            cout << "Nəticə: " << a - b << endl;
            break;
        case '*':
            cout << "Nəticə: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Nəticə: " << a / b << endl;
            else
                cout << "Sıfıra bölmə xətası!" << endl;
            break;
        default:
            cout << "Yanlış əməliyyat!\n";
        }
    }

    // Milli kilometre çevirmə funksiyası
    void kmCevir() {
        double km;
        cout << "Kilometr daxil edin: ";
        cin >> km;
        double mil = km * 0.621371; // 1 km = 0.621371 mil
        cout << km << " km = " << mil << " mil\n";
    }

    int main() {
        int secim;
        char devam;

        do {
            cout << "\nMenyu:\n";
            cout << "1. Valyuta mübadiləsi\n";
            cout << "2. Kolkulyator\n";
            cout << "3. Milli kilometre çevirmə\n";
            cout << "Seçiminizi daxil edin: ";
            cin >> secim;

            switch (secim) {
            case 1:
                valyutaMubadilesi();
                break;
            case 2:
                kolkulyator();
                break;
            case 3:
                kmCevir();
                break;
            default:
                cout << "Yanlış seçim!\n";
            }

            cout << "Davam etmək istəyirsiniz? (h/y): ";
            cin >> devam;
        } while (devam == 'h' || devam == 'H');

        cout << "Proqramı bağlayırsınız. Sağ olun!\n";
        return 0;
    }





    //2

    int main() {
        int eded, menfiSay = 0, musbetSay = 0, zeroSay = 0;
        int say = 0;

        do {
            cout << "Bir tam ədəd daxil edin: ";
            cin >> eded;

            if (eded < 0) menfiSay++;
            else if (eded > 0) musbetSay++;
            else zeroSay++;

            say++;
        } while (say < 10);

        // Faizlərin hesablanması
        double menfiFaiz = (menfiSay * 100) / 10.0;  // 10.0 istifadə edərək onluq kəsir yaradırıq
        double musbetFaiz = (musbetSay * 100) / 10.0;
        double zeroFaiz = (zeroSay * 100) / 10.0;

        // Nəticələrin çap edilməsi
        cout << "Menfi ededlerin faizi: " << menfiFaiz << "%\n";
        cout << "Musbet ededlerin faizi: " << musbetFaiz << "%\n";
        cout << "0-larin faizi: " << zeroFaiz << "%\n";

        return 0;
    }

