
// NOMBRE Y APELLIDOS

#include <iostream>
#include<vector>
#include <fstream>
using namespace std;

bool esDalton(const vector<int>& alturas) {
    bool creciente = true;
    bool decreciente = true;

    for (size_t i = 1; i < alturas.size(); ++i) {
        if (alturas[i] <= alturas[i - 1]) {
            creciente = false;
        }
        if (alturas[i] >= alturas[i - 1]) {
            decreciente = false;
        }
    }

    return creciente || decreciente;
}

bool resuelveCaso() {

    //Leer caso de prueba: cin>>...
    int hermanos, hermano;
    bool dalton = true;
   
    vector<int> v;

    cin >> hermanos;
    if (hermanos == 0)
        return false;
    for (int i = 0; i < hermanos; i ++ )
    {
        cin >> hermano;
        v.push_back(hermano);
    }
   
 
    //Resolver problema
    //Escribir resultado
    if (esDalton(v)) {
        cout << "DALTON" << endl;
    }
    else {
        cout << "DESCONOCIDOS" << endl;
    }
    return true;
}


int main() {

    // ajuste para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("casos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    while (resuelveCaso());

    // restablecimiento de cin
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    system("pause");
#endif
    return 0;
}