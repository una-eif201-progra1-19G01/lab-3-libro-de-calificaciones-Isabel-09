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
static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

class LibroCalificaciones {
private:
	std::string nombreCurso;
	int Calificaciones[ESTUDIANTES][EXAMENES];
	//metodos
	int obtenerNotaMinima();
	int obtenerNotaMaxima();
	double obtenerPromedio(int[], int);

public:
	LibroCalificaciones();
	LibroCalificaciones(const std::string&, int[ESTUDIANTES][EXAMENES]);
	std::string obtenerReporteNotas();
	std::string obtenerReporteNotasMaxMin();
	void setNombreCurso(std::string nombreCurso);
	std::string getNombreCurso() const;

};



#endif

