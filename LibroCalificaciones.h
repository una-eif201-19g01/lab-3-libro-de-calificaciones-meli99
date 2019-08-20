/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H
#include <string>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
using namespace std;
	
	const int Examenes=3;
	const int Estudiantes=10;
	
	
	class LibroCalificaciones {
		
	private:
		string nombreCurso;
		int calificaciones[Estudiantes][Examenes];	
		
	public:
		
		LibroCalificaciones();
		LibroCalificaciones(const string &nombreCurso, int[Estudiantes][Examenes]);
		void setNombreCurso(const string &nombreCurso);
		string getNombreCurso();
		int obtenerNotaMinima();
		int obtenerNotaMaxima();
		string obtenerReporteNotas();
	};
	
	
#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
