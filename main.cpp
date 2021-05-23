//ATIVIDADE AVALIATIVA 2 - PROGRAMAÇÃO APLICADA
//RUAN PARDINHO

#include <iostream>
using namespace std;

//Criando a função para os parâmetros de entrada
void func(int *p, int tamanho, int *max, int *min){

  for(int i=0; i<tamanho; i++){
    cout << *p << " "; 
     if(*min>*p){
       *min = *p;
     }
     if(*max<*p){
       *max = *p;
     }
       p++;     
   }

//Retornando os valores de máximo e mínimo  
cout << endl;
cout << "Maior valor: " << *max << endl;
cout << "Menor valor: " << *min << endl;

}

int main() {

  int tamanho;

  //Parâmetros de entrada pelo usuário
  cout << "Digite o tamanho do vetor desejado: "<<endl; 
  cin >> tamanho;

  int vet[tamanho-1], min, max;

  cout <<"Digite o vetor desejado: "<<endl;

  //Percorrendo o vetor
  for(int i=0; i<tamanho; i++){

    cin >> vet[i];

  }

  max = vet[0];
  min = vet[0];

  cout << endl;

  func(vet, tamanho, &max, &min);

}