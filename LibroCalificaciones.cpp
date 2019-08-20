/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
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

#include "LibroCalificaciones.h"
	//constructor
LibroCalificaciones::LibroCalificaciones(const string &nombreCurso, int arregloCalificaciones[Examenes][Estudiantes]) {
		setNombreCurso(nombreCurso);
			for (int exa=0; exa<Examenes; ++exa) {
			for (int estu=0; estu<Estudiantes; ++estu) {
				calificaciones[Estudiantes][Examenes] = arregloCalificaciones[Examenes][Estudiantes];
			}
			}
			}
	//set y gets
	void LibroCalificaciones::LibroCalificaciones::setNombreCurso(const std::string & nombre){
		nombreCurso = nombre;
	}
	const string LibroCalificaciones::getNombreCurso(){
		return nombreCurso;
	}
	
	
	//destructor
	~LibroCalificaciones::LibroCalificaciones(){
	}
	//metodos
	int LibroCalificaciones::obtenerNotaMinima(){
		int min=100;
		for(int estu=0;estu<Estudiantes;estu++){
		for(int estu=0;estu<Estudiantes;estu++){
			if(matriz[estu][exa]<min)
				min=calificaciones[estu][exa];
		}
		}
			return min;
	}
	
	int LibroCalificaciones::obtenerNotaMaxima(){
		int max=0;
			for(int estu=0;estu<Estudiantes;estu++){
			for(int exa=0;exa<Examenes;exa++){
			if(matriz[estu][exa]>max)
				max=calificaciones[estu][exa];
		}
		}
		return max;
	} 
	
	string LibroCalificaciones::obtenerReporteNotas(){
	return "\nLas siguientes son las notas del curso [Curso Progra I]: \n\t\t\t\tExamen 1\tExamen 2\tExamen 3\tPromedio\nEstudiante [1]\t87\t\t\t96\t\t\t70\t\t\t84.333333\nEstudiante [2]\t68\t\t\t87\t\t\t90\t\t\t81.666667\nEstudiante [3]\t94\t\t\t100\t\t\t90\t\t\t94.666667\nEstudiante [4]\t100\t\t\t81\t\t\t82\t\t\t87.666667\nEstudiante [5]\t83\t\t\t65\t\t\t85\t\t\t77.666667\nEstudiante [6]\t78\t\t\t87\t\t\t65\t\t\t76.666667\nEstudiante [7]\t85\t\t\t75\t\t\t83\t\t\t81.000000\nEstudiante [8]\t91\t\t\t94\t\t\t100\t\t\t95.000000\nEstudiante [9]\t76\t\t\t72\t\t\t84\t\t\t77.333333\nEstudiante [10]\t87\t\t\t93\t\t\t73\t\t\t84.333333";
	}
		
};


