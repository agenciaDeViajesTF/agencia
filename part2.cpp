#include <iostream>
#include <fstream>
//#include <conio.h>
#include <limits>
#include <stack>

using namespace std;

// ================= HISTORIAL DE NAVEGACION =================

class navegacion{

public:

stack<string> historial;

void mostrar_historial(){

    string pagina;

    cout << "Destino o pagina visitada: ";
    cin >> pagina;

    historial.push(pagina);

    cout << "\n===== HISTORIAL DE NAVEGACION =====" << endl;

    stack<string> aux = historial;

    while(aux.empty()){

        cout << aux.top() << endl;
        aux.pop();
    }

}

};

// ================= CONSULTAS =================

class consultas{

public:

stack<string> consultas_guardadas;

void guardar_consulta(){

    string consulta;

    cout << "Ingrese la consulta del cliente: ";
    cin >> consulta;

    consultas_guardadas.push(consulta);

    cout << "\n===== ULTIMAS CONSULTAS =====" << endl;

    stack<string> aux = consultas_guardadas;

    while(aux.empty()){

        cout << aux.top() << endl;
        aux.pop();
    }

}

};

// ================= MONEDAS =================

class Moneda {

public:

    string tipoMoneda;
    float cambio;

    stack<float> historialPrecios;

    void registrarMoneda() {

        cout << "Tipo de moneda: ";
        cin >> tipoMoneda;

        cout << "Tipo de cambio: ";
        cin >> cambio;

        historialPrecios.push(cambio);
    }

    void mostrarMoneda() {

        cout << "\nMoneda: " << tipoMoneda << endl;
        cout << "Cambio actual: " << cambio << endl;
    }

    void revertir_precio(){

        if(historialPrecios.size() > 1){

            historialPrecios.pop();

            cambio = historialPrecios.top();

            cout << "\nTipo de cambio revertido a: "
                 << cambio << endl;

        } else {

            cout << "\nNo existen cambios anteriores" << endl;
        }

}

};

// ================= CLIENTES =================

class Cliente {

public:

    string nombreCliente;
    int calificacion;
    int modificaciones;

    stack<int> historialCalificaciones;

    void registrarCalificacion() {

        cout << "Nombre del cliente: ";
        cin >> nombreCliente;

        cout << "Calificacion del servicio (1-5): ";
        cin >> calificacion;

        historialCalificaciones.push(calificacion);
    }

    void mostrarCalificacion() {

        cout << "\nCliente: " << nombreCliente << endl;
        cout << "Calificacion actual: "
             << calificacion << endl;
    }

 void deshacer_modificacion(){

    int eliminar;

    cout << "\nCuantos registros desea eliminar?: ";
    cin >> eliminar;

    while(eliminar > 0 && historialCalificaciones.empty()){

        cout << "\nEliminando calificacion: "
             << historialCalificaciones.top() << endl;

        historialCalificaciones.pop();

        eliminar--;
    }

    if(historialCalificaciones.empty()){

        calificacion = historialCalificaciones.top();

        cout << "\nNueva calificacion actual: "
             << calificacion << endl;

    } else {

        cout << "\nNo quedan registros del cliente" << endl;
    }

}
};

// ================= FUNCION EXTRA =================

void guardar_consulta(){

    cout << "Consulta almacenada correctamente" << endl;

}

// ================= MAIN =================

int main(){
    int opcion;

    Cliente cliente;
    navegacion nav;
    Moneda moneda;
    consultas consulta;

  do {

        cout << "\n===== AGENCIA DE VIAJES =====" << endl;
        cout << "1. Deshacer modificaciones de clientes" << endl;
        cout << "2. Historial de navegacion de destinos" << endl;
        cout << "3. Revertir cambios de precios" << endl;
        cout << "4. Guardar ultimas consultas" << endl;
        cout << "5. Salir" << endl;
        cout << "OPCION: ";
        cin >> opcion;

        switch (opcion) {

            case 1:

                cout << "\n=== CLIENTES ===" << endl;


                cliente.deshacer_modificacion();


                system("pause");
                system("cls||clear");

                break;

            case 2:

                cout << "\n=== DESTINOS VISITADOS ===" << endl;

                nav.mostrar_historial();

                system("pause");
                system("cls||clear");

                break;

            case 3:

                cout << "\n=== CAMBIO DE MONEDA ===" << endl;

                moneda.registrarMoneda();
                moneda.revertir_precio();
                moneda.mostrarMoneda();

                system("pause");
                system("cls||clear");

                break;

            case 4:

                cout << "\n=== CONSULTAS ===" << endl;

                consulta.guardar_consulta();

                system("pause");
                system("cls||clear");

                break;

            case 5:

                cout << "\nGracias por usar el sistema "
                     << "de la agencia de viajes" << endl;

                break;

            default:

                cout << "\nSelecciona una opcion valida" << endl;

                system("pause");
                system("cls||clear");

                break;
        }

    } while (opcion != 5);

    return 0;
}
