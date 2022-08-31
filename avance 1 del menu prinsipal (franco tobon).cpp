#include<stdio.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include <cstdlib>

int crearusuario(){
 char* usuario[10] ;
	 	 char clave[10];
		  char	 USUARIO [10];
char CLAVE [10];

	printf ("\tPor favor cree un nuevo usuario");

	printf ("\nPor favor Digite su nombre de usuario: ");
	scanf ("%s",&usuario);

	printf ("\nPor favor cree una contraseña");

	printf ("\nPor favor Digite su contraseña :");
	scanf ("%s",&clave);

}


int crearusuario2(){
 char* usuario2[10] ;
	 	 char clave2[10];
		  char	 USUARIO2 [10];
char CLAVE [10];

	printf ("\tPor favor cree un nuevo usuario");

	printf ("\nPor favor Digite su nombre de usuario: ");
	scanf ("%s",&usuario2);

	printf ("\nPor favor cree una contraseña");

	printf ("\nPor favor Digite su contraseña :");
	scanf ("%s",&clave2);

}

int crearusuario3(){
 char* usuario3[10] ;
	 	 char clave3[10];
		  char	 USUARIO3 [10];
char CLAVE3 [10];

	printf ("\tPor favor cree un nuevo usuario");

	printf ("\nPor favor Digite su nombre de usuario: ");
	scanf ("%s",&usuario3);

	printf ("\nPor favor cree una contraseña");

	printf ("\nPor favor Digite su contraseña :");
	scanf ("%s",&clave3);

}

int funcionMostrardatos()
{
	printf("\n");
	printf ("\tPrograma de Ventas\t");
	printf ("\n");
	printf("\n Datos\t");

	printf ("\n Arnaldo Perdomo");

	printf ("\n Franklin Charima");

	printf ("\n Franco Tobon");

	printf ("\n Maria Cutoa");

	printf ("\n Miguel Peña" );

	return 0;
}

int main (){
char usuario[10] ;
	  char	 USUARIO [10];
char CLAVE [10];
char clave[10];
int intento = 0;
int ingresa = 0;


//crear usuario//
setlocale(LC_CTYPE, "Spanish");

	printf ("\tPor favor cree un nuevo usuario");

	printf ("\nPor favor Digite su nombre de usuario: ");
	scanf ("%s",&usuario);

	printf ("\nPor favor cree una contraseña");

	printf ("\nPor favor Digite su contraseña :");
	scanf ("%s",&clave);

	// iniciar secion//

do {
		printf ("\tPor favor introduzca su usuario");

	printf ("\nPor favor Digite su nombre de usuario: ");
	scanf ("%s",& USUARIO);

	printf ("\nPor favor cree una contraseña");

	printf ("\nPor favor Digite su contraseña :");
	scanf ("%s",&CLAVE);

//validar//
if (strcmp(usuario,USUARIO)==0 &&  strcmp(clave , CLAVE)==0){
    system("cls");

	printf ("\nBienvenido al prgrama de ventas      %s \n",&usuario);

ingresa = 1;

} else {
	printf ("\n USTED NO ESTA AUTORIZADO PARA ENTRAR AL PROGRAMA DE VENTAS :D\n");
	intento++;
	getchar();
}
} while (intento < 3 && ingresa == 0);

system("PAUSE");
	return 0;
	}



