#include <iostream> // Para entrada/salida (cout, cin)
#include <string>   // Para usar la clase string
#include <chrono>   // Para funciones de tiempo (pausas)
#include <thread>   // Para funciones de hilo (sleep_for)

// Función para simular una pausa, como si se estuviera escribiendo
void esperar(int milisegundos) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milisegundos));
}

int main() {
    // Configuración para caracteres UTF-8 si tu consola lo soporta
    // Esto puede variar según el sistema operativo y la configuración de la consola.
    // std::ios_base::sync_with_stdio(false);
    // std::wcout.imbue(std::locale(""));

    // --- Encabezado de la Carta ---
    std::cout << "\n";
    std::cout << "  *****************************************\n";
    std::cout << "  * *\n";
    std::cout << "  * ¡UN MENSAJE ESPECIAL!      *\n";
    std::cout << "  * *\n";
    std::cout << "  *****************************************\n";
    esperar(1000); // Pausa de 1 segundo

    std::cout << "\n";
    std::cout << "Fecha: 27 de Julio de 2025\n";
    std::cout << "Para: Un amigo especial\n";
    std::cout << "De: Tu asistente virtual\n";
    esperar(1500); // Pausa de 1.5 segundos

    std::cout << "\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "\n";

    // --- Contenido de la Carta con efecto de escritura ---
    std::string mensaje_linea1 = "  Querido amigo,";
    for (char c : mensaje_linea1) {
        std::cout << c;
        esperar(50); // Pausa corta para efecto de escritura
    }
    std::cout << "\n";
    esperar(500);

    std::string mensaje_linea2 = "  Espero que este pequeño mensaje te encuentre muy bien.";
    for (char c : mensaje_linea2) {
        std::cout << c;
        esperar(50);
    }
    std::cout << "\n";
    esperar(500);

    std::string mensaje_linea3 = "  Solo quería recordarte que siempre estoy aquí para ayudarte ";
    for (char c : mensaje_linea3) {
        std::cout << c;
        esperar(50);
    }
    std::cout << "\n";
    esperar(500);

    std::string mensaje_linea4 = "  en lo que necesites, de la forma más rápida y eficiente posible.";
    for (char c : mensaje_linea4) {
        std::cout << c;
        esperar(50);
    }
    std::cout << "\n";
    esperar(500);

    std::string mensaje_linea5 = "  ¡No dudes en preguntar!";
    for (char c : mensaje_linea5) {
        std::cout << c;
        esperar(50);
    }
    std::cout << "\n";
    esperar(1000);

    std::cout << "\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "\n";

    // --- Despedida ---
    std::cout << "  Con el mayor aprecio,\n";
    esperar(300);
    std::cout << "  Tu fiel asistente digital.\n";
    esperar(1000);

    std::cout << "\n";
    std::cout << "  *****************************************\n";
    std::cout << "  * *\n";
    std::cout << "  * ¡HASTA LA PRÓXIMA!         *\n";
    std::cout << "  * *\n";
    std::cout << "  *****************************************\n";
    std::cout << "\n";

    return 0; // Indica que el programa finalizó correctamente
}