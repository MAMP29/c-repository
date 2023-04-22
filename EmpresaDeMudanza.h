#ifndef EMPRESADEMUDANZA_H
#define  EMPRESADEMUDANZA_H
#include <iostream>
#include <vector>
#include "camion.h"
using std::string;

class EmpresaDeMudanza{ //RELACIONES: contiene Camiones
private: 
  string Nombre;
  string Int;
  vector <Camion> FlotaDeCamiones;
public:
  EmpresaDeMudanza(string Nombre, string Int);
  //getters
  string getNombreEmpresa();
  //comprar y reemplazar camiones
  void comprarCamion (string placa, int peso);
//Carga los camiones 
  int cargarLosCamiones(vector <int> &objt);
// ver carga de un camion
  int cargaDeCamion(string placa);
   vector <Camion> getFlotaDeCamiones();
  
};
#endif
