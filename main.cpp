#include <vector>
#include "EmpresaDeMudanza.h"
#include "camion.h"
int main()
{
  vector <int> objetos =
  {
    3000, 5000, 1000, 2000, 500, 1800, 4000, 30, 6000
  };

  EmpresaDeMudanza nuevaEmpresa("Camiones Mountain", "2498024-9");

  // Debería tener al final: [3000, 5000, 1000,  500, 30]
  nuevaEmpresa.comprarCamion("YUI-988", 10000);
  // Debería tener al final: [2000, 1800]
  nuevaEmpresa.comprarCamion("OIJ-807", 5000);
  // Debería tener al final: [4000]
  nuevaEmpresa.comprarCamion("KHO-193", 5000);
  // El objeto de 6000 no se pudo cargar
  
  // Imprime el total cargado: 17330
  cout << nuevaEmpresa.cargarLosCamiones(objetos) << endl;
  vector <Camion> aux = nuevaEmpresa.getFlotaDeCamiones();
  cout << "Cargas por camion" << endl;
  cout << nuevaEmpresa.cargaDeCamion("YUI-988") << endl;
  cout << nuevaEmpresa.cargaDeCamion("OIJ-807") << endl;
  cout << nuevaEmpresa.cargaDeCamion("KHO-193") << endl;
  
  return 0;
}
