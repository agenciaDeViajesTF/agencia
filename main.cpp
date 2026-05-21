//Arreglos

#include <iostream>
#include <fstream>
//#include <conio.h>
#include <limits>
#include <string>

//==
//  Definitions depending on OS
//===

#ifdef _WIN32
    #define PAUSE() system("pause")
    #define CLEAR() system("cls")
	#include <conio.h>
	
#else
    #define PAUSE() do { \
        std::cout << "Press Enter to continue..."; \
        std::cin.get(); \
    } while(0)
    #define CLEAR() system("clear");
#endif

#define B_DARKGREEN "\e[48;5;22m"
#define CYAN "\e[38;5;045m"
#define RESET "\033[0m"
#define WHITE "\e[38;5;255m"

using namespace std;

// ================= HABITACIONES =================

class Hotel {

public:

    string nombreHotel;
    int habitacionesDisponibles;

    void registrarHotel() {

        cout << "Nombre del hotel: ";
        cin >> nombreHotel;

        cout << "Habitaciones disponibles: ";
        cin >> habitacionesDisponibles;
    }

    void mostrarHotel() {

        cout << "\nHotel: " << nombreHotel << endl;
        cout << "Habitaciones disponibles: "
             << habitacionesDisponibles << endl;
    }
};

// ================= AUTOBUSES =================

class Autobus {

public:

    string nombreBus;
    int cantidadAsientos;

    void registrarBus() {

        cout << "Nombre del autobus: ";
        cin >> nombreBus;

        cout << "Cantidad de asientos: ";
        cin >> cantidadAsientos;
    }

    void mostrarBus() {

        cout << "\nAutobus: " << nombreBus << endl;
        cout << "Asientos disponibles: "
             << cantidadAsientos << endl;
    }
};

// ================= MONEDAS =================

class Moneda {

public:

    string tipoMoneda;
    float cambio;

    void registrarMoneda() {

        cout << "Tipo de moneda: ";
        cin >> tipoMoneda;

        cout << "Tipo de cambio: ";
        cin >> cambio;
    }

    void mostrarMoneda() {

        cout << "\nMoneda: " << tipoMoneda << endl;
        cout << "Cambio: " << cambio << endl;
    }
};

// ================= CALIFICACIONES =================

class Cliente {

public:

    string nombreCliente;
    int calificacion;

    void registrarCalificacion() {

        cout << "Nombre del cliente: ";
        cin >> nombreCliente;

        cout << "Calificacion (1-5): ";
        cin >> calificacion;
    }

    void mostrarCalificacion() {

        cout << "\nCliente: " << nombreCliente << endl;
        cout << "Calificacion: " << calificacion << endl;
    }
};

// ================= GUIAS TURISTICOS =================

class Guia {

public:

    string nombreGuia;
    bool activo;

    void registrarGuia() {

        cout << "Nombre del guia: ";
        cin >> nombreGuia;

        cout << "Activo? (1 = SI / 0 = NO): ";
        cin >> activo;
    }

    void mostrarGuia() {

        cout << "\nGuia: " << nombreGuia << endl;

        if(activo == true) {

            cout << "Estado: Activo" << endl;

        } else {

            cout << "Estado: Inactivo" << endl;
        }
    }
};

// ================= MAIN =================

int main() {

    Hotel hotel[2];
    Autobus bus[2];
    Moneda moneda[2];
    Cliente cliente[2];
    Guia guia[2];

    int opcion;

    do {

        cout << B_DARKGREEN << "\n===== MENU =====" << endl;
        cout << "1. Registrar hoteles" << endl;
        cout << "2. Registrar autobuses" << endl;
        cout << "3. Registrar monedas" << endl;
        cout << "4. Registrar calificaciones" << endl;
        cout << "5. Registrar guias" << endl;
        cout << "6. Mostrar todo" << endl;
        cout << "7. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {

        case 1:

            for(int i = 0; i < 2; i++) {

                cout << "\n--- HOTEL " << i + 1 << " ---" << endl;
                hotel[i].registrarHotel();
            }

            system("pause");
            system("cls||clear");

            break;

        case 2:

            for(int i = 0; i < 2; i++) {

                cout << "\n--- AUTOBUS " << i + 1 << " ---" << endl;
                bus[i].registrarBus();
            }

            system("pause");
            system("cls||clear");

            break;

        case 3:

            for(int i = 0; i < 2; i++) {

                cout << "\n--- MONEDA " << i + 1 << " ---" << endl;
                moneda[i].registrarMoneda();
            }
            system("pause");
            system("cls||clear");

            break;

        case 4:

            for(int i = 0; i < 2; i++) {

                cout << "\n--- CLIENTE " << i + 1 << " ---" << endl;
                cliente[i].registrarCalificacion();
            }
            system("pause");
            system("cls||clear");

            break;

        case 5:

            for(int i = 0; i < 2; i++) {

                cout << "\n--- GUIA " << i + 1 << " ---" << endl;
                guia[i].registrarGuia();
            }
            system("pause");
            system("cls||clear");

            break;

        case 6:

            cout << "\n===== HOTELES =====" << endl;

            for(int i = 0; i < 2; i++) {

                hotel[i].mostrarHotel();
            }

            cout << "\n===== AUTOBUSES =====" << endl;

            for(int i = 0; i < 2; i++) {

                bus[i].mostrarBus();
            }

            cout << "\n===== MONEDAS =====" << endl;

            for(int i = 0; i < 2; i++) {

                moneda[i].mostrarMoneda();
            }

            cout << "\n===== CLIENTES =====" << endl;

            for(int i = 0; i < 2; i++) {

                cliente[i].mostrarCalificacion();
            }

            cout << "\n===== GUIAS =====" << endl;

            for(int i = 0; i < 2; i++) {

                guia[i].mostrarGuia();
            }
            system("pause");
            system("cls||clear");

            break;

        case 7:

            cout << "\nGracias por usar el programa" << endl;
            break;

        default:

            cout << "\nOpcion invalida" << endl;
            system("pause");
            system("cls||clear");
            break;

        }

    } while(opcion != 7);

    return 0;
}