#include "viajes.h"
#include "incidencias.h"
#include "usuarios.h"
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef COMPROBACION_HORAS_VIAJES_H
#define COMPROBACION_HORAS_VIAJES_H

void comprobacion_horas_viajes(T_Viajes *);
#endif


#ifndef COMPROBACION_INCIDENCIAS_H
#define COMPROBACION_INCIDENCIAS_H

void comprobacion_incidencias(T_Incidencias *);
#endif

#ifndef LOGIN_H
#define LOGIN_H
/*
Cabecera: int login (T_Usuarios * usuarios, int N);

Precondicion: Recibe un vector usuarios de T_Usuarios de N elementos cargado.

Postcondicion: Solicita al usuario del programa que introduzca un usuario y
      contrasena. Si ambos son correctos devuelve la id del usuario. Si el
      usuario existe pero la contrasena es incorrecta devuelve -1. Si el usuario
      no existe devuelve -2
*/
int login(T_Usuarios *, int );
#endif

#ifndef PANTALLA_ERR_LOGIN_H
#define PANTALLA_ERR_LOGIN_H
/*
Cabecera void pantalla_login_h(T_Usuarios * usuarios, int N, int * id);

Precondicion: Recibe un vector relleno de T_Usuarios, la cantida de
      elementos de este y la id (o resultado fallido de login()) del usuario

Postcondicion: Permite al usuario volver a intentar iniciar sesion, salir
      del programa o crear un nuevo usuario.
*/
void pantalla_err_login(T_Usuarios *, int , int *);
#endif

#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H

int menu_principal(T_Usuarios *, int);
#endif

/*Privada*/
#ifndef RM_FIN_LINEA_H
#define RM_FIN_LINEA_H

void rm_fin_linea(char *, int );
#endif
