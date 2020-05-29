// Cpp_test.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
class test {
public:
	typedef enum T_ENUM_UT_TYPE
	{
		UT_SWIR,
		UT_SWIR_2,
		UT_UVN,
		UT_INV
	}T_ENUM_UT_TYPE;
};
int main()
{
	vector<test::T_ENUM_UT_TYPE> rangeModel;

	rangeModel.push_back(test::UT_SWIR);
	rangeModel.push_back(test::UT_SWIR_2);
	
	/*
	for (int i = 0; i < UT_INV; i++) {
		rangeModel.push_back(static_cast<string>(i));
	}*/
	cout << rangeModel.at(0) << endl;
	cout << rangeModel.at(1) << endl;





	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
