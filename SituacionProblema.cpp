#include <iostream>
using namespace std;

// Base class
class Pyme { // The class
  public:
    string nombEmpresa;
    string razonSocial;// Es el nombre oficial por el que la empresa consta legalmente
    string direccion;
    string nombDirector;
    int numtrabajadores;
    float cantidadPesosAño;// Cantidad de pesos que genera al año
  public:
    Pyme(){
      nombEmpresa = "";
      razonSocial = "";
      direccion = "";
      nombDirector = "";
      numtrabajadores = 0;
      cantidadPesosAño = 0;
    }
    Pyme(string a, string b, string c, string d, int e, float f){
      nombEmpresa = a;
      razonSocial = b;
      direccion = c;
      nombDirector = d;
      numtrabajadores = e;
      cantidadPesosAño = f;
    }
    void ConsultarPyme(){
    cout << nombEmpresa << " " <<razonSocial << " " << direccion << " " << nombDirector << " " << numtrabajadores << " " << cantidadPesosAño << endl;
    }
    void agregarPyme(){
      cout << "Nombre Empresa: ";
      cin >> nombEmpresa;
      cout << "Razon Social: ";
      cin >> razonSocial;
      cout << "Direccion: ";
      cin >> direccion;
      cout << "Nombre Director: ";
      cin >> nombDirector;
      cout << "Numero Trabajadores (int): ";
      cin >> numtrabajadores;
      cout << "Cantidad en Pesos por año (int): ";
      cin >> cantidadPesosAño;
    }
};
// Derived class
class Empleado : public Pyme {
    public:
    string nombre;
    int edad;
    string puesto;
    float sueldo;
    public:
    Empleado(){
      nombre = "";
      edad = 0;
      puesto = "";
      sueldo = 0;
    }
    Empleado(string n, int ed, string p, float s,string a, string b, string c, string d, int e, float f){
      nombre = n;
      edad = ed;
      puesto = p;
      sueldo = s;
      nombEmpresa = a;
      razonSocial = b;
      direccion = c;
      nombDirector = d;
      numtrabajadores = e;
      cantidadPesosAño = f;
    }
    void ConsultarTrabajador(){
      cout << nombre << " " << edad << " " << puesto << " " << sueldo << " " << nombEmpresa << " " << razonSocial << " " << direccion << " " << nombDirector << " " << numtrabajadores << " " << cantidadPesosAño << endl;
    }

    void agregarTrabajador(){
      cout << "Nombre: ";
      cin >> nombre;
      cout << "Edad: ";
      cin >> edad;
      cout << "Puesto: ";
      cin >> puesto;
      cout << "Sueldo: ";
      cin >> sueldo;
    }
};

int main(){
    // Pyme Empresa1 = Pyme("Empresa","Empresa S.A. de C.V.","Direccion","Ignacio",50000 ,2000000);
    // Empresa1.ConsultarPyme();
    // Empleado Empleado1 = Empleado("Juan",25,"Gerente",1000,"Empresa","Empresa S.A. de C.V.","Direccion","Ignacio",50000 ,2000000);
    // Empleado1.ConsultarTrabajador();
    Pyme Empresa1;
    Empleado Empleado1;
    int n;
    while(n != 5){
      cout << "Elige una opcion: \n";
      cout << "(1) Agregar PYME\n (2) Agregar trabajador\n (3) Consultar PYME\n (4) Consultar trabajador\n (5) Cerrar\n";
      cin >> n;
      switch(n){
        case 1: //Agregar Pyme
          Empresa1.agregarPyme();
        break;
        case 2: //Agregar trabajador
          Empleado1.agregarTrabajador();
        break;
        case 3: // Consultar Pyme
          Empresa1.ConsultarPyme();
        break;
        case 4: //Consultar trabajador
          Empleado1.ConsultarTrabajador();
        break;
        case 5: // Cerrar
        cout << "Se Termino el programa";
        break;
      }
    }
    
    return 0;
}