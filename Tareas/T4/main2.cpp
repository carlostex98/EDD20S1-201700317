#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class lista{
public:
    char n;
    lista* next;
    lista* prev;
} *primero, *ultimo;

void InsertarPrimero(char c){
    lista* nuevo =new lista();
    nuevo->n=c;
    if(primero == nullptr){
        primero=ultimo=nuevo;
    } else{
        nuevo->next=primero;
        primero->prev=nuevo;
        primero=nuevo;
    }
}

void eliminarUltimo(){

    if(primero != nullptr){
        if(primero==ultimo){
            primero=ultimo=nullptr;
        }else{
            ultimo->prev->next= nullptr;
            ultimo=ultimo->prev;
        }
    }
}
lista* Buscar(string s){
    lista* env=primero;
    lista* aux = primero;
    int sx=0;
    bool sn=false;
    int n = s.length();
    char arr[n + 1];
    strcpy(arr, s.c_str());
    for (int i = 0; i < n; i++){
        //char_array[i];
        if(sn==false){
            aux=primero;
            while(true){
                if(aux->n==arr[i]){
                    break;
                    sx=1;
                    sn=true;
                }else{
                    if(aux==ultimo){
                        break;
                    }else{
                        aux=aux->next;
                    }
                }
            }
        }else{
            if(aux==ultimo){
                break;
            }else{
                if(arr[i]==aux->n){
                    aux=aux->next;
                }else{
                    sn=false;
                }
            }
        }

    }

    return aux;
}



int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
