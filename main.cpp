#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> cadenas;
    string op;

    while (true)
    {
        cout << "1) Agregar al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "0) Salir" << endl;
        
        getline(cin, op);

        if (op == "1")
        {
            string cadena;

            cout << "Cadena: ";
            getline(cin, cadena);

            cadenas.push_back(cadena);
        }

        else if (op == "2")
        {
            for (size_t i = 0; i < cadenas.size(); i++)
            {
                cout << cadenas[i] << ", ";
            }
            cout << endl;
        }

        else if (op == "3")
        {
            size_t n;
            string cadena;

            cout << "Tamaño: ";
            cin >> n;
            cin.ignore();
            cout << "Cadena: ";
            getline(cin, cadena);

            cadenas = vector<string>(n, cadena);
        }

        else if (op == "4")
        {
            if (cadenas.empty())
            {
                cout << "Vector está vacío" << endl;
            }
            else
            {
                cout << cadenas.front() << endl;
            }
        }
        else if (op == "5")
        {
            if (cadenas.empty())
            {
                cout << "Vector está vacío" << endl;
            }
            else
            {
                cout << cadenas.back() << endl;
            }
        }
        else if (op == "6")
        {
            sort(cadenas.begin(), cadenas.end());
            //sort(cadenas.begin(), cadenas.end(), greater<string>());
        }

        else if (op == "0")
        {
            break;
        }
    }

    return 0;
}