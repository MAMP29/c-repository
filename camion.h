#ifndef CAMION_H
#define CAMION_H
#include <string>
#include <vector>
using namespace std;


class Camion
{
  private:
  string placaCamion;
  int capacidadMaxima;
  int pesoTotalCargado;
  vector<int> objetos;

  public:
  /**
  Constructor. Variables iniciales a atributos internos.
  */
  Camion(string laPlaca, int laCapacidadMaxima);
  /**
  Evalua si puede cargar un objeto o no. Retorna 0 = false (No se puede hacer) y 1 = true (Se puede hacer).
  */
  bool cargarUnObjeto(int pesoDelObjeto);
  /**
  Hacer la mudanza. Retorna la carga que transporto.
  */
  int hacerMudanza();
  /**
  Saber cual es la placa y capacidad maxima del camion y el peso total cargado.
  */
  string cualEsLaPlaca();
  int cualEsLaCapacidadMaxima();
  int cualEsElPesoTotalCargado();

//devuelve los objetos cargados
  vector <int> getObjetos();

};

#endif 
