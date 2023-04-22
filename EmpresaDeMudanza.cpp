#include "EmpresaDeMudanza.h"
#include "camion.h"
#include <iostream>
#include <vector>
using std::string;

EmpresaDeMudanza::EmpresaDeMudanza(string Nombre, string Int) {
  this->Nombre = Nombre;
  this->Int = Int;
}

int EmpresaDeMudanza::cargarLosCamiones(vector<int> &objt) {
  int total = 0;
  for (int i = 0; i < FlotaDeCamiones.size(); i++) {
    for(int j = 0; j < objt.size(); j++){
      if(FlotaDeCamiones.at(i).cargarUnObjeto(objt[j])){
        total += objt[j];
        
      }  
    }
  }
  if (total==0){
    cout << "no hay camiones para cargar" << endl;
  }
  return total;
}
string EmpresaDeMudanza::getNombreEmpresa() { return Nombre; }
void EmpresaDeMudanza::comprarCamion(string placa, int peso) {
  Camion nuevoCamion(placa, peso);
  FlotaDeCamiones.push_back(nuevoCamion);
} 
int EmpresaDeMudanza::cargaDeCamion(string placa){
  for (int i = 0; i < FlotaDeCamiones.size(); i++){
    if(FlotaDeCamiones.at(i).cualEsLaPlaca() == placa){
      return FlotaDeCamiones.at(i).cualEsElPesoTotalCargado();
    }
    }
  cout << "No hay un camion con la placa especificada" << endl;
  return 0;
  }
vector <Camion> EmpresaDeMudanza::getFlotaDeCamiones(){
  return FlotaDeCamiones;
}
