#include <cstdlib>
#include <iostream>
#include <cmath>
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

void scal(int tab[], int lewy, int srodek, int prawy){
    int i = lewy, j = srodek + 1;
 
    for(int i = lewy;i<=prawy; i++) 
    pom[i] = tab[i];  
    for(int k=lewy;k<=prawy;k++) 
    if(i<=srodek)
    if(j <= prawy)
    if(pom[j]<pom[i]){
       tab[k] = pom[j++]; 
    }
    else{
         tab[k] = pom[i++];
    }
    else{
        tab[k] = pom[i++];
    }
  else{
      tab[k] = pom[j++];
  }
}
 
void sort_przez_scal(int tablica[], int lewy, int prawy) {
    if (prawy <= lewy) {
        return;
    }
    int srodek = (prawy + lewy) / 2;
    sort_przez_scal(tablica, lewy, srodek);
    sort_przez_scal(tablica, srodek + 1, prawy);
 
    scal(tablica, lewy, srodek, prawy);
}

void Sort_przez_wstrz( int tablica[], int size )
{
    int temp;
    int j;
   
    for(int i = 1; i < size; i++ )
    {
        temp = tablica[ i ];
       
        for( j = i - 1; j >= 0 && tablica[ j ] > temp; j-- )
             tablica[ j + 1 ] = tablica[ j ];
       
        tablica[ j + 1 ] = temp;
    }
}


void sort_przez_wst(int* tablica, int n) {
    int lewy = 0, prawy = n - 1;
    bool zamiana = true;
    while (zamiana == true) { 
        zamiana = false;
        for (int i = lewy; i < prawy; i++) {
            if (tablica[i] > tablica[i + 1]) {
                swap(tablica[i], tablica[i + 1]);
                zamiana = true;
            }
        }
        prawy = prawy - 1;
        for (int i = prawy; i > lewy; i--) {
            if (tablica[i] < tablica[i - 1]) {
                swap(tablica[i], tablica[i - 1]);
                zamiana = true;
            }
        }
        lewy = lewy + 1;
    }
}

void quick_sort(int *tablica, int lewy, int prawy)
{
	if(prawy <= lewy) return;
	
	int i = lewy - 1, j = prawy + 1, 
	pivot = tablica[(lewy+prawy)/2]; 
	
	while(1){
		while(pivot>tablica[++i]);
		while(pivot<tablica[--j]);
		if( i <= j)
			swap(tablica[i],tablica[j]);
		else
			break;
	}

	if(j > lewy)
	quick_sort(tablica, lewy, j);
	if(i < prawy)
	quick_sort(tablica, i, prawy);
}


int szuk_bin(int tablica[], int l, int p, int szukana) {
    if (l > p)
        return -1;

    int sr = (l + p) / 2;

    if(szukana == tablica[sr])
        return sr;
    else if (szukana < tablica[sr])
        return szuk_bin(tablica, l, sr - 1, szukana);
    else
        return szuk_bin(tablica, sr + 1, p, szukana);
}


int szuk_liniowe(Element tablica[], int szuk_klucz, int rozmiar) {
    for(int i = 0; i < rozmiar; ++i) {
        if(tablica[i].klucz == szuk_klucz) {
            return i;
        }
    }
    return -1;
}

int szuk_skok(int* lista, int n, int szukaj) {
    int lin = sqrt(n);
    int index = 0;
    while (lista[min(lin, n) - 1] < szukaj) {
        index = lin;
        lin += sqrt(n);
        if (index >= n)
            return -1;
    }
    if (lista[index] == szukaj) {
        return index;
    } else {
        return -1;
    }
}
