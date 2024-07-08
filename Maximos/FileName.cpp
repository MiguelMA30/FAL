//NOMBRE y APELLIDOS


#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



void resuelveCaso() {
    //resuelve aqui tu caso
    
       //Lee los datos
    vector <int> numeros;

    int maximo;
    int contador = 0;
    cin >> maximo;
    while(maximo!=0) {
      
        numeros.push_back(maximo);
        cin >> maximo;
    }
    int max = 0;
       //Calcula el resultado
    for (int i = 0; i < numeros.size() - 1; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
            contador = 1;
       }
        else if (numeros[i] == max) {
            contador++;
        }
    }
       //Escribe el resultado
    cout << max << " " << contador << endl;
}

int main() {
    // Para la entrada por fichero.
#ifndef DOMJUDGE
    std::ifstream in("casos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif


    unsigned int numCasos;
    std::cin >> numCasos;
    // Resolvemos
    for (int i = 0; i < numCasos; ++i) {
        resuelveCaso();
    }


#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}