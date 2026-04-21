#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Límite según el problema (10^5)
const int MAX = 100005;

// Array para guardar el Mayor Factor Primo de cada número
// LPF[x] será el mayor primo que divide a x
int LPF[MAX];

void precalcularLPF() {
    // 1. Inicializamos: El mayor factor primo de un número es él mismo (asumimos todos primos al inicio)
    for (int i = 0; i < MAX; i++) {
        LPF[i] = i;
    }

    // 2. Criba modificada
    for (int p = 2; p < MAX; p++) {
        // Si LPF[p] == p, significa que p es primo (nadie lo ha tocado aún)
        if (LPF[p] == p) {
            // Recorremos todos los múltiplos de este primo
            for (int multiple = 2 * p; multiple < MAX; multiple += p) {
                // Actualizamos el LPF del múltiplo.
                // Como vamos en orden ascendente (2, 3, 5...), el último primo
                // en visitar el número será automáticamente el mayor.
                LPF[multiple] = p;
            }
        }
    }
}

int main() {
    // Optimización de I/O (Siempre pon esto en C++)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Precalculamos una sola vez antes de leer los casos
    precalcularLPF();

    int A, B;
    // El problema dice "undefined number of test cases"[cite: 57], leemos hasta fin de archivo
    while (cin >> A >> B) {
        // Consulta O(1) gracias al pre-cálculo
        if (LPF[A] == LPF[B]) {
            cout << "True" << endl; // [cite: 54]
        } else {
            cout << "False" << endl; // [cite: 54]
        }
    }

    return 0;
}