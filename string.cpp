#include <iostream>
#include <string>
using namespace std;
int main() {
  string nome , resposta;
  cout<<"Insira seu nome: ";
  
  getline(cin, nome);
  
  while(resposta!="esquerda" && resposta!="ESQUERDA"&& resposta!="Esquerda"&& resposta!="direita"&& resposta!="DIREITA"&& resposta!="Direita"){
    
  cout<< "olá "<< nome << "! Bem vindo ao RPG!"<< endl;
  
  cout<< "Você deseja ir para a Direita ou para a Esquerda?" << endl;
    
  
  getline(cin ,resposta);
  
  if(resposta=="direita"|| resposta=="DIREITA"|| resposta=="Direita"){
    
    cout<<"Vocẽ foi atacado por um Monstro!"<< endl;
    
  }
  if(resposta=="esquerda"|| resposta=="ESQUERDA"|| resposta=="Esquerda"){
    
    cout<<"Vocẽ encontrou um tesouro!"<< endl;
    
  }
  if(resposta=="esquerda"|| resposta=="ESQUERDA"|| resposta=="Esquerda"|| resposta=="direita"|| resposta=="DIREITA"|| resposta=="Direita"){
    
    cout<<"Obrigado por jogar!!"<< endl;
    }
    else
    cout<<"Caminho inválido, favor retorne ao inicio.. :)"<< endl;
  }

  return 0;
}
