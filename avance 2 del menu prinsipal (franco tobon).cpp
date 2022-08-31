#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <cstdlib>

typedef struct Tienda{

int pantalon[10], camisa[10], camiosaS[10];
float precio;

}Producto;
int Pedir_cantidad();
Producto Agregar_producto();
void mostrarproductos(Producto *productos , int Num_productos);

Producto Busqueda(Producto *productos , int codigo);

int main (){
	
	
		system ("color fC");
char usuario[10] ;
char USUARIO [10];
char CLAVE [10];
char clave[10];
int intento = 0;
int ingresa = 0;
int Num_productos;
int x;
int camisa = 10 , camisaS=10, pantalon=20;
int contador_camisa;
contador_camisa=camisa;

int contador_camisaS;

contador_camisaS= camisaS;

contador_camisa=camisa;



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

	printf ("\nBienvenido al prgrama de ventas");
	printf("\n");
	printf ("\n%s " , &usuario);

	printf("\n");
int eleccion;

while (eleccion!=3){	

printf ("\nQue deseas realizar");

printf("\n1) comprar un producto\n");
printf("\n2) Buscar producto\n"); 
printf("\n3) Mostrar el inventario de los productos\n");
printf("\n4) salir\n");
scanf("%d",&eleccion);

switch(eleccion) {
{
	case 1 :
	 	int comprarcamisa , precio_camisaS=0 , precio_camisaL;
	 	switch (comprarcamisa){
	 		
	 		printf("1)Para comprar camisa Talla s ");
	 		printf("2)Para comprar camisa Talla l ");
	 		
	 		case 1: 
			 printf("Cuantas camisas talla s desea comprar"); int compra_camisaS;
	 		scanf ("%d",&compra_camisaS);
	 		
	 		 camisaS = contador_camisaS - compra_camisaS;
			  precio_camisaS= compra_camisaS * 5;
			  printf ("\nUsted compro este nuemro de camisa talla S ",&compra_camisaS); 
	 		  printf ("\nUsted gasto ",precio_camisaS); 
	 	}
	 		break;
		 }
		 	
		 	
		 	
		 		 do{
		 		case 3 :{
		
	 		int x;
	printf("\n                          INVENTARIO DE PRODUCTOS FFMMA                            \n\n");
	printf("\n    (1) Camisa Femenina   [Talla S]     (7)  Camisa Masculina    [Talla S]\n");
	printf("\n    (2) Camisa Femenina   [Talla M]     (8)  Camisa Masculina    [Talla M]\n");
	printf("\n    (3) Camisa Femenina   [Talla L]     (9)  Camisa Masculina    [Talla L]\n");
	printf("\n    (4) Pantalon Femenino [Talla 14]    (10)  Pantalon Masculino [Talla 14]\n");
	printf("\n    (5) Pantalon Femenino [Talla 16]    (11) Pantalon Masculino  [Talla 16]\n");
	printf("\n    (6) Pantalon Femenino [Talla 18]    (12) Pantalon Masculino  [Talla 18]\n");
	
	printf("\n\n     MARQUE EL NUMERO DEL PRODUCTO QUE QUIERA PARA PODER OBSERVAR SU PRECIO     \n ");
    printf("            O TAMBIEN MARQUE 13 PARA PODER VOLVER AL MENU PRINSIPAL: ");
    scanf("%d",&x);
        system("cls");

	if(x>13){
		printf("\n\n+++++++++ NUMERO INVALIDO SELECCIONE CORRECTAMENTE UN NUMERO DE LA LISTA +++++++\n\n ");
	
		    

	}
	if(x<=0){ 
	printf("\n\n ++++++++ NUMERO INVALIDO SELECCIONE CORRECTAMENTE UN NUMERO DE LA LISTA +++++\n\n ");
		return main();	
	}
	
	switch (x){
		

		
		case 1:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
          	
		break;
		
		case 2:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
	
		break;
		
		case 3:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
	
		break;
		
		case 4:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 18$ ++++++++++++++  \n\n");
		
		break;
		
		case 5:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
	
		break;
		
		case 6:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
		
		break;
		
		case 7:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
	
		break;
		
		case 8:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		
		break;
		
		case 9:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		
		break;
		
		case 10:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 18$ ++++++++++++++  \n\n");
	
		break;
		
		case 11:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
	
		break;
		
		case 12:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
		
		break;
		
		case 13:
			
		
	
		break;
	}
}

}while(x !=13);
	

case 4:{
	
	exit (-1);
	
	break;
}

}
}


}else {
	printf ("\n USTED NO ESTA AUTORIZADO PARA ENTRAR AL PROGRAMA DE VENTAS :D\n");
	intento++;
	getchar();
} 





} while (intento < 3 && ingresa == 0);

system("PAUSE");


	return 0;
	}

