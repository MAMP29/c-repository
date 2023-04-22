#include "camion.h"
#include "EmpresaDeMudanza.h"
#include <iostream>
#include <algorithm>
Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placaCamion = laPlaca;
  capacidadMaxima = laCapacidadMaxima;
  pesoTotalCargado = 0;
}

bool Camion::cargarUnObjeto(int pesoDelObjeto)
{
  if(pesoTotalCargado + pesoDelObjeto <= capacidadMaxima)
  {
    objetos.push_back(pesoDelObjeto);
    pesoTotalCargado += pesoDelObjeto;
    return true;
  }
  else
    return false;
}

int Camion::hacerMudanza()
{
  return pesoTotalCargado;
  objetos.clear();
}

string Camion::cualEsLaPlaca()
{
  return placaCamion;
}
int Camion::cualEsLaCapacidadMaxima()
{
  return capacidadMaxima;
}
int Camion::cualEsElPesoTotalCargado(){
  return pesoTotalCargado;
}
vector <int> Camion::getObjetos(){
  return objetos;
}
void Camion::descargarUnObjeto(int objetoElim)
{
  for(int i; i < objetos.size(); i++){
    if(objetos.at(i)==objetoElim){
      objetos.erase(objetos.begin() + i);
      pesoTotalCargado -= objetoElim;
      std::cout<<"Objeto descargado"<<std::endl;
    }else{
      std::cout<<"Objeto "<<objetoElim<<" No encontrado "<<std::endl;  
    }
  }
}
void Camion::descargarACamion(Camion Cv, Camion Cn){
  for(int& elemento : Cv.getObjetos()){
    bool cargado = Cn.cargarUnObjeto(elemento);
    if (cargado == true){
    auto it = find(Cv.getObjetos().begin(), Cv.getObjetos().end(), elemento); //funcion para encontrar el objeto determinado, auto es para detectar x
      if (it != Cv.getObjetos().end()){
        Cv.getObjetos().erase(it);
      }
    }
  }
