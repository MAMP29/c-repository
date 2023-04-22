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

