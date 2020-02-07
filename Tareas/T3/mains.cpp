#include <iostream>
#include <string>
using namespace std;
class usuario{
public:
    int id;
    string nombre;
    usuario *siguiente;
}*primero,*ultimo;

void nuevoUsuario(int id,string nombre){
    if(id==null||nombre==""){
        printf("Datos malos");
    } else {
        usuario* nuevo = new usuario();
        if(primero == nullptr){
            primero=ultimo=nuevo;
        }else{
            ultimo->siguiente=nuevo;
            ultimo=nuevo;
        }
    }
}

usuario* buscar(int n){
    usuario* vista=primero;
    if(vista != nullptr){
        while(true){
            if(vista->id==n){
                //return vista;
                break;
            }else{
                vista=vista->siguiente;
            }
        }
    }
    return vista;
}

void eliminar(usuario* n){
    usuario* vista=primero;
    usuario* aux1;
    if(vista != nullptr){
        while(true){
            if(vista->id==n->id){
                //primero, en medio, ultimo
                if(vista==primero){
                    if(primero==ultimo){
                        primero=ultimo= nullptr;
                    } else{
                        primero=primero->siguiente;
                    }
                }else{
                    if(ultimo=vista){
                        aux1->siguiente= nullptr;
                        ultimo = aux1;
                    }else{
                        aux1->siguiente=vista->siguiente;
                    }
                }
                break;
            }else{
                aux1=vista;
                vista=vista->siguiente;
            }
        }
        free(vista);
    }
}


int main() {
    cout << "C++ es bonito" << endl;
    return 0;
}
