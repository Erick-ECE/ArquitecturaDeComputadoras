# include <stdio.h>
# include <string.h>


struct nodo{
  int elemento;
  nodo *siguiente;
  nodo *anterior;
}

struct nodo *primero, *ultimo, int tamaño;

bool esNula() {
  if (primero==NULL) {
    return;
  }
}

void insertaPrin(int nuevo*){
  if (primero==NULL){
    primero= nuevo;
  }

}

int main(int argc, char const *argv[]) {

  return 0;
}
