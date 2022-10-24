// PO1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
class myszka {
    public:
        
};
class kot {
    public:
        int zyje;
        int wiek;
        int plec; //1- samiec 0-samica
        int ilosc_dzieci;
        int wstost;
        int plodny;

};
class pies {
public:
    int zyje;
    int wiek;
    int plec;
    int ilosc_dzieci;
    int wzrost;
    int agresywnosc;
    int plodny;
    pies rozmnazaj(pies piesek) {
        if (zyje) {
            if (piesek.zyje) {
                if (plodny) {
                    if (piesek.plodny) {
                        if (plec != piesek.plec) {
                            piesek.ilosc_dzieci += 3;
                            ilosc_dzieci += 3;
                            return piesek;
                        }
                    }
                }
            }
        }
    }


};
class ptak {
public:
    int zyje;
    int wiek;
    int plec;
    int ilosc_dzieci;
    int ilosc_gniazd;
    int plodny;

};
class czlowiek {
public:
    int zyje;
    int wiek;
    int plec;
    int ilosc_dzieci;
    int plodny;
    pies wykastruj(pies piesio) {
        if (zyje == 1){
            piesio.plodny = 0;
            return piesio; }

}
    pies zabij(pies piesio) {
        if (zyje){
        piesio.zyje = 0;
        return piesio; }
    }
    kot zabij(kot kotek) {
        if (zyje) {
            kotek.zyje = 0;
            return kotek;
        }
    }
};
int main()
{   
    pies azor;
    pies burek;
    kot filemon;
    ptak skowronek;
    azor.plec = 1;
    azor.agresywnosc = 0;
    azor.wiek = 5;
    azor.ilosc_dzieci = 5;
    azor.wzrost = 50;
    azor.plodny = 0;
    azor.zyje = 1;
    burek.zyje = 1;
    burek.plec = 1;
    burek.wiek = 2;
    burek.agresywnosc = 0;
    burek.wzrost = 30;
    burek.plodny = 1;
    burek.ilosc_dzieci = 0;
    filemon.zyje = 1;
    skowronek.zyje = 1;
    czlowiek wlasciciel;
    wlasciciel.zyje=1;
    pies burkowa;
    burkowa.zyje = 1;
    burkowa.plodny = 1;
    burkowa.ilosc_dzieci = 0;
    burkowa.plec = 0;
    burkowa.wiek = 3;
    burkowa.agresywnosc = 0;
    burkowa=burek.rozmnazaj(burkowa);
    burkowa=wlasciciel.zabij(burkowa);
    printf("%d\n", burkowa.zyje);
    printf("%d\n", burek.ilosc_dzieci);
    printf("%d\n", burkowa.ilosc_dzieci);
    burkowa=burek.rozmnazaj(burkowa);
    printf("%d\n", burek.ilosc_dzieci);
    printf("%d\n", burkowa.ilosc_dzieci);


    //std::cout << "Hello World!\n";
}

