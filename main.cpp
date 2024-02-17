#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    int tablica[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);
 
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
 
    return 0;
}

int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    int tablica[n];
    srand(time(NULL));
 
    cout<<"Przed sortowaniem: ";
    funkcja(tablica, n, x, y);
    for(int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout<<"\n";
 
    sort_bomb(tablica, n);
 
    return 0;
}

int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    int *tablica = new int[n];
    pom = new int[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);
 
    cout << "Przed sortowaniem: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << "\n";
 
    sort_przez_scal(tablica, 0, n - 1);
 
    cout << "Po sortowaniu: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << "\n";
 
    return 0;
}


int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    int tablica[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);
    
    cout<<"Przed sortowaniem: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout<<"\n";
    
    Sort_przez_wstrz(tablica, n);
    
    cout<< "Po sortowaniu: ";
    for(int i; i < n; i++){
        cout<< tablica[i]<< " ";
    }
    cout<<"\n";

    return 0;
}

int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    int tablica[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);
    
    cout<<"przed sortowaniem: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout<<"\n";
    
    quick_sort(tablica, 0, n - 1);
    
    cout<<"Po sortowaniu: ";
    for(int i = 0; i <n; i++){
        cout<< tablica[i]<<" ";
    }
 
    return 0;
}

int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    int tablica[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);
    
    cout<< "Przed sortowaniem: ";
    for(int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout<< "\n";
    
    quick_sort(tablica, 0, n - 1);
    
    cout<< "Po sortowaniu: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout<<"\n";
    
    int szukana;
    cout<<"Podaj liczbe do wyszukania: ";
    cin >> szukana;

    int index = szukaj(tablica, 0, n - 1, szukana);
    if(index != -1) {
        cout<<"Liczba " << szukana<< " zostala znaleziona pod indekse "<< index << endl;
    } else{
        cout<< "Liczba " <<szukana<<" nie została znaleziona"<< endl;
    }

    return 0;
}

int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    const int rozmiar = n;
    const int min_r = x;
    const int max_r = y;
    Element tablica[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);

    for(int i = 0; i < n; i++) {
        cout << tablica[i].klucz << " ";
    }
    cout<<"\n";

    int szukanyk;
    cout<<"Podaj szukana liczbe: ";
    cin>> szukanyk;

    int index = szuk_liniowe(tablica, szukanyk, rozmiar);

    if(index != -1) {
        cout << "Liczba "<<szukanyk<<" znajduje sie pod indeksem: "<<index<<endl;
    } else{
        cout<<"Nie znaleziono liczby: "<<szukanyk<<endl;
    }

    return 0;
}

int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    int tablica[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);
    
    cout<<"przed sortowaniem: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout<<"\n";
    
    quick_sort(tablica, 0, n - 1);
    
    cout<<"Po sortowaniu: ";
    for(int i = 0; i <n; i++){
        cout<< tablica[i]<<" ";
    }
    cout<<"\n";
    
    int szukana;
    cout<<"podaj szukana liczbe: ";
    cin>>szukana;
    
    int index = szuk_skok(tablica, n, szukana);
    if(index != -1){
    cout<<"Liczba " << szukana<< " zostala znaleziona pod indekse "<< index << endl;
    } else{
        cout<< "Liczba " <<szukana<<" nie została znaleziona"<< endl;
    }
 
    return 0;
}


int main() {
    const int n = 12;
    const int x = 12;
    const int y = 25;
    const int rozmiar = n;
    const int min_r = x;
    const int max_r = y;
    Element tablica[n];
    srand(time(NULL));
    funkcja(tablica, n, x, y);

    for(int i = 0; i < n; i++) {
        cout << tablica[i].klucz << " ";
    }
    cout<<"\n";

    int szukanyk;
    cout<<"Podaj szukana liczbe: ";
    cin>> szukanyk;

    int index = szuk_liniowe_z_war(tablica, szukanyk, rozmiar);

    if(index != -1) {
        cout << "Liczba "<<szukanyk<<" znajduje sie pod indeksem: "<<index<<endl;
    } else{
        cout<<"Nie znaleziono liczby: "<<szukanyk<<endl;
    }

    return 0;
}
