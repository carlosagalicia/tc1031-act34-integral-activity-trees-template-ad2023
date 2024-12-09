// =========================================================
// File: main.cpp
// Author: Carlos Galicia - A01709890
// Date: 20/10/2023
// =========================================================
#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main() {    // Complejidad O(n*log(n))
    map<int, int> contador;
    vector<int> vect;
    int n;
    cin >> n;

    while (vect.size() < n-1) { // Crea lista con valores, complejidad O(n)
        int valor;
        std::cin >> valor;
        vect.push_back(valor);  
    }

    contador[1] = 0; // incluye a la raiz en el mapa
    for (int i = 0; i < vect.size(); i++) { // Complejidad O(n*log(n))
        if (contador.find(vect[i]) != contador.end()) { // Si el indice del padre existe, incrementa su contador, complejidad(log(n))
            contador[vect[i]]++;      
        } 
        else {// Si la hoja se hace padre, se agrega con un contador inicial de 1, y se resta 1 a su padre
            contador[vect[i]] = 1;
            contador[vect[vect[i]-2]]--;
        }
    }

    for (const auto& pair : contador) { // Verifica que todos los padres tengan al menos 3 hijos hoja, complejidad O(n)
        if (pair.second < 3){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
