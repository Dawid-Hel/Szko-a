#include <iostream>
using namespace std;
 
void funkcja(int tablica[], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        tablica[i] = rand() % (y - x + 1) + x;
    }
}
 
 
void sort_bomb(int tablica[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tablica[j] > tablica[j + 1]) {
                swap(tablica[j], tablica[j + 1]);
            }
        }
    }
    cout<<"Po sortowaniu: ";
    for(int i = 0; i < n; i++) {
        cout<<tablica[i]<<" ";
    }
    cout<<"\n";
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
