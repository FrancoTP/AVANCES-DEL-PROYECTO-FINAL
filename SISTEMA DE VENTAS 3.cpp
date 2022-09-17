#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

#include <stdio.h>	
#include <string.h>
#include <stdlib.h>	
#include <locale.h> 
#include <conio.h>
#define MAX 80
#define VALOR_CENTINELA -1

#define MAX 80
#define ARCHIVO_USUARIOS "usuarios.dat"
#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define LONGITUD 5
#define MAX_INTENTOS 3




 
/* Estructuras */
struct usuario {
    int codigo;
	char nombre[MAX];
    char contrasena[MAX];
};
 
 
typedef struct usuario Usuario;
 
/* Opciones del Menú */
void menuPrincipal();
void menuInsertarU();
void menuBuscarU();
void menuEliminarU();
void menuMostrarU();
void menuEliminarFisicaU();
void menuIniciarSesion();
void menuInicial();
void reporteusuario();
void CambioU();
void CambioC();

 int leerLinea(char *cad, int n);
void leerClave(char *password);
/* Funciones para manejar el archivo directamente */
Usuario *obtenerUsuario(int *n); /* Obtiene un vector dinámico de productos */
char existeUsuario(int codigoUsuario, Usuario *usuario); /* Busca si existe el producto en el archivo de productos */
char insertarUsuario(Usuario usuario); /* Inserta el producto al final del archivo */
char eliminarUsuario(int codigoUsuario); /* Eliminar el producto de código codigoProducto del archivo */
char eliminacionFisicaU(); /* Realiza la eliminación física de registros inválidos del archivo de productos */
char modificarUsuario(Usuario usuario); /* Modifica el producto en el archivo */
char guardarReporteU(); /* Genera un archivo TXT con el reporte de los productos */
char logear(char nombreUsuario[], char password[]);

/* Función de lectura de cadenas */
 int leecadU(char *cad, int k);

/* Titular del programa */
void tituloPrincipal();
char linea[MAX];


struct cliente {
	int codigo;
	char nombre[MAX];
	char apellido[MAX];
	int cedula;
	char correo[MAX];
	char direccion[MAX];
};

struct producto {
	int codigo;
	char nombre[MAX];
	float costo;
	float precio;
	int cantidad;
};

typedef struct cliente Cliente;
 

void menuPrincipal();
void menuInsertar();
void menuBuscar();
void menuEliminar();
void menuMostrar();
void menuModificar();
void menuEliminarFisica();
 
typedef struct producto Producto;
 

void menuPrincipal();
void menuInsertar();
void menuBuscar();
void menuEliminar();
void menuMostrar();
void menuModificar();
void menuEliminarFisica();


Cliente *obtenerCliente(int *n); 
char existeCliente(int codigoCliente, Cliente *cliente); 
char insertarCliente(Cliente cliente); 
char eliminarCliente(int codigoCliente); 
char eliminacionFisica(); 
char modificarCliente(Cliente cliente); 
char guardarReporte(); 
 

Producto *obtenerProductos(int *n); 
char existeProducto(int codigoProducto, Producto *producto);
char insertarProducto(Producto producto); 
char eliminarProducto(int codigoProducto); 
char eliminacionFisica(); 
char modificarProducto(Producto producto); 
char guardarReporte(); 
 

int leecad(char *cad, int n);
int leecadC(char *cad, int t);
 

void tituloPrincipal();
void MenuAyuda();
void MenuArchivo();
void Menu();
void login();
void compra();
void MenuMovimientos();
void Factura();
void reporteFactura();
void titulologin();

void cliente();
void reporteclienteC();
void menuInsertarC();
void menuMostrarC();
void menuEliminarC();
void menuBuscarC();
void menuModificarC();
void titulomovi();


int main() {
	menuInicial();
	return 0;
}
void titulomovi(){
		int i;
	printf("\n     ======================================================================\n");
	printf("\t\t\t      MENU DE MOVIMIENTOS\n");
	printf("\t      INFORMACION SOBRE LAS FACTURAS Y REPORTE DE FACTURAS\n");
	printf("\t\t   SISTEMA DE VENTAS FFMMA | EMPRESA FFMMA \n");
	printf("     ======================================================================\n");
 
	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}

void tituloPrincipalP()
{
	int i;
	printf("\n     ======================================================================\n");
	printf("\t\t\t         MENU PRINCIPAL\n");
	printf("\tCreación, reportes, eliminación, búsqueda y actualización de productos\n");
	printf("\t\t   SISTEMA DE VENTAS FFMMA | EMPRESA FFMMA \n");
	printf("     ======================================================================\n");
 
	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}


void menuInicial() {
	char repite = 1;
	int opcion = -1;
	
	do {
		system("cls");
		printf("\n\t\t\tMENU INICIAL\n");
		printf("\t\t\t============\n");
		printf("\n\t\t[1]. Ver usuarios registrados\n");
		printf("\t\t[2]. Registrar usuario nuevo\n");
		printf("\t\t[3]. Ingresar al sistema\n");
		printf("\t\t[0]. Salir\n");
		printf("\n\t\tIngrese su opcion: [ ]\b\b");
		leerLinea(linea, MAX);
		sscanf(linea, "%d", &opcion);

		switch (opcion) {
			case 1:
				menuMostrarU();
				break;

			case 2:
				menuInsertarU();
				break;

			case 3:
				menuIniciarSesion();
				break;

			case 0:
				repite = 0;
				break;
		}

	} while (repite == 1);
}


void menuIniciarSesion() {
	char nombreUsuario[MAX];
	char password[MAX];
	int intento = 0;
	int loginExitoso = 0;

	do {
		system("cls");
		printf("\n\t\t\tINGRESAR AL SISTEMA\n");
		printf("\t\t\t===================\n");

		printf("\n\t\tUSUARIO: ");
		leerLinea(linea, MAX);
		sscanf(linea, "%s", nombreUsuario);

		printf("\t\tCLAVE: ");
		leerClave(password);
		
		if (logear(nombreUsuario, password)) {
			loginExitoso = 1;
		} else {
			printf("\n\n\t\tUsuario y/o password incorrectos");
			intento++;
			getchar();
		}
	} while (intento < MAX_INTENTOS && loginExitoso == 0);

	if (loginExitoso == 1) {
			setlocale(LC_ALL, "spanish"); /* Permite imprimir caracteres con tilde */
	Menu();
		
	} else {
		printf("\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
		getchar();
	}
}


char logear(char nombreUsuario[], char password[]) {
	FILE *archivo;
	char logeoExitoso;
	Usuario usuario;

	/* Abre el archivo en modo de lectura */
	archivo = fopen("usuarios.dat", "rb");

	if (archivo == NULL) {
		logeoExitoso = 0;

	} else {
		logeoExitoso = 0;

		/* Lee secuencialmente del archivo de usuarios */
		fread(&usuario, sizeof(usuario), 1, archivo);
		while (!feof(archivo)) {
			if (strcmp(usuario.nombre, nombreUsuario) == 0 && strcmp(usuario.contrasena, password) == 0) {
				/* Encuentra un usuario del archivo con el nombre de usuario y password buscado */
				logeoExitoso = 1;
				break;
			}

			fread(&usuario, sizeof(usuario), 1, archivo);
		}

		/* Cierra el archivo*/
		fclose(archivo);
	}

	return logeoExitoso;
}

int leerLinea(char *cad, int n)
{
	int i, c;

	/* 1 COMPROBACIÓN DE DATOS INICIALES EN EL BUFFER */
	c = getchar();
	if (c == EOF) {
		cad[0] = '\0';
		return 0;
	}

	if (c == '\n') {
		i = 0;
	} else {
		cad[0] = c;
		i = 1;
	}

	/* 2. LECTURA DE LA CADENA */
	for (; i < n - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		cad[i] = c;
	}
	cad[i] = '\0';

	/*3. LIMPIEZA DEL BUFFER */ 
	if (c != '\n' && c != EOF) /* es un caracter */
		while ((c = getchar()) != '\n' && c != EOF);
 
	return 1;
}

void leerClave(char *password) {
	char caracter;
	int i = 0;

	while (caracter = getch()) {
		if (caracter == TECLA_ENTER) {
			password[i] = '\0';
			break;
			
		} else if (caracter == TECLA_BACKSPACE) {
			if (i > 0) {
				i--;
				printf("\b \b");
			}
			
		} else {
			if (i < MAX) {
				printf("*");
				password[i] = caracter;
				i++;
			}
		}
	}
}



void compra(){
		int compra;
 	Producto producto;
	int codigoProducto = 0;
	char repite = 1;
	char respuesta[MAX];
	

	do{
	
	system(CLEAR);
	printf("\n\tINGRESE EL CODIGO DE PRODUCTO QUE DESEA COMPRAR: ");
 	leecad(linea, MAX);
	sscanf(linea, "%d", &codigoProducto);
	
	if (existeProducto(codigoProducto, &producto)) {
 
			/* Se muestran los datos del producto */
			printf("\n\tCódigo del producto: %d\n", producto.codigo);
			printf("\tNombre del producto: %s\n", producto.nombre);			
			printf("\tPrecio de venta : %.1f $\n", producto.precio);
			printf("\tCantidad: %d\n", producto.cantidad);
			
          printf("\n\tIngrese la cantidad que desea comprar: ");
          	leecad(linea, MAX);
	     	sscanf(linea, "%d", &compra);
	     	printf("\tDesea comprar %d? [S/N]: ",compra);
	     	leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
		producto.cantidad=producto.cantidad - compra;
				if (modificarProducto(producto)) {
					printf("\n\tSu compra ya fue realizada correctamente\n");
 
				} else {
					printf("\n\tYa ha sido cancelada su compra\n");
				}
			}
          printf("\n\tActualmente quedan %d de dicho producto despues de su compra",producto.cantidad);
        
		} else {
			
			printf("\n\tEl producto con el código %d no existe.\n", codigoProducto);
		}
		
        printf("\n\tDesea comprar algún otro producto o volver a intentar? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		} 
	}while(repite);
}

void Factura(){
	printf("popo");
}

void reporteFactura(){
	printf("popo");
}



void MenuMovimientos(){
		char repite = 1;
	int opcion = -1;
	do{
		system(CLEAR);
		titulomovi();
		
		printf("\n\t\t\t\tMENU DE MOVIMIENTOS\n");
		printf("\n\t\t[1]. Nueva factura");
		printf("\n\t\t[2]. Reporte de facturas\n");
		printf("\t\t[3]. Salir\n");
		printf("\n\t\tIngrese su opción: [ ]\b\b");
		
		leecad(linea, MAX);
		sscanf(linea, "%d", &opcion);
		
		switch(opcion){
			
			case 1:
				Factura();
				break;
			
			case 2:
				reporteFactura();
				break;
				
			case 3:
			repite=0;	
				break;
		}
		
}while(repite);
}

void Menu(){
		char repite = 1;
	int opcion = -1;
	do{
	
		system(CLEAR);
               tituloPrincipalP();
             
			 	printf("\n\t\t\t\tMENU PRINCIPAL\n");
		printf("\n\t\t[1]. COMPRA DE PRODUCTOS");
		printf("\n\t\t[2]. MENU DE ARCHIVOS\n");
		printf("\t\t[3]. MENU DE MOVIMIENTOS \n");
		printf("\t\t[4]. MENU DE AYUDA\n");
		printf("\t\t[5]. SALIR\n");
		printf("\n\t\tIngrese su opción: [ ]\b\b");
            	scanf("%d",&opcion);
			
             switch(opcion){
			 
             	case 1:
             	compra();
             		break;
             		
             	case 2:
             			MenuArchivo();
             		break;
             	
             	case 3:
             		MenuMovimientos();
             		break;
             		
             	case 4:
             		MenuAyuda();
             		break;
             	
             	case 5:
             		repite=0;
             		break;
             	}
           }while(repite);  		
}


void titulologin(){
		int i;
	printf("\n     ======================================================================\n");
	printf("\t\t\t         SUBSISTEMA DE CONTROL DE ACCESO\n");
	printf("\t BIENVENIDO AL LOGIN DEL SISTEMA DE VENTAS DE LA EMPRESA FFMMA\n");
	printf("\t\t   SISTEMA DE VENTAS FFMMA | EMPRESA FFMMA \n");
	printf("     ======================================================================\n");
 
	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}

	     





void MenuProducto(){
	char repite = 1;
	int opcion = -1;
	do{
		system(CLEAR);
		tituloPrincipal();
		
		printf("\n\t\t\t\tMENU DE PRODUCTOS\n");
		printf("\n\t\t[1]. Insertar nuevo producto\n");
		printf("\t\t[2]. Mostrar inventario o lista de productos\n");
		printf("\t\t[3]. Eliminar un producto\n");
		printf("\t\t[4]. Reporte de producto por clave\n");
		printf("\t\t[5]. Modificar un producto\n");
		printf("\t\t[6]. Salir\n");
		printf("\n\t\tIngrese su opción: [ ]\b\b");
		
		leecad(linea, MAX);
		sscanf(linea, "%d", &opcion);
 
		switch (opcion) {
 
			case 1:
				menuInsertar();
				break;
 
			case 2:
				menuMostrar();
				break;
 
			case 3:
				menuEliminar();
				break;
 
			case 4:
				menuBuscar();
				break;
 
			case 5:
				menuModificar();
				break;
 
			case 6:
				repite = 0;
				break;
		}
 
		
	}while(repite);
}


void menuInsertar()
{
	Producto producto;
	int codigoProducto = 0;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t\t==> INSERTAR PRODUCTO <==\n");
 
		
		printf("\n\tCódigo de producto: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoProducto);
 
	
		if (!existeProducto(codigoProducto, &producto)) {
 
			producto.codigo = codigoProducto;
 
		
			printf("\tNombre del producto: ");
			leecad(producto.nombre, MAX);
 
			printf("\tCosto del producto ($): ");
			leecad(linea, MAX);
			sscanf(linea, "%f", &producto.costo);
 
			printf("\tPrecio de venta que tendra el producto ($): ");
			leecad(linea, MAX);
			sscanf(linea, "%f", &producto.precio);
 
			printf("\tLa cantidad del producto: ");
			leecad(linea, MAX);
			sscanf(linea, "%d", &producto.cantidad);
 
			
			if (insertarProducto(producto)) {
				printf("\n\tEl producto fue insertado correctamente\n");
 
			} else {
				printf("\n\tOcurrió un error al intentar insertar el producto\n");
				printf("\tInténtelo mas tarde\n");
			}
		} else {
			
			printf("\n\tEl producto de código %d ya existe.\n", codigoProducto);
			printf("\tNo puede ingresar dos productos distintos con el mismo código.\n");
		}
 
		printf("\n\tDesea seguir ingresando productos? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}

void menuBuscar()
{
	Producto producto;
	int codigoProducto;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t       ==> BUSCAR REPORTE DE PRODUCTO <==\n");
 
	
		printf("\n\tCódigo de producto: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoProducto);
 
		
		if (existeProducto(codigoProducto, &producto)) {
 
		
			printf("\n\tCódigo del producto: %d\n", producto.codigo);
			printf("\tNombre del producto: %s\n", producto.nombre);			
			printf("\tCosto de compra del producto: %.1f $\n", producto.costo);
			printf("\tPrecio de venta del producto: %.1f $\n", producto.precio);
			printf("\tCantidad del producto: %d\n", producto.cantidad);
 
		} else {
			
			printf("\n\tEl producto de código %d no existe.\n", codigoProducto);
		}
 
		printf("\n\tDesea seguir buscando algún producto? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}
 
void menuEliminar()
{
	Producto producto;
	int codigoProducto;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t\t==> ELIMINAR UN PRODUCTO <==\n");
 
		
		printf("\n\tCódigo de producto: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoProducto);
 
	
		if (existeProducto(codigoProducto, &producto)) {
 
			
			printf("\n\tCódigo del producto: %d\n", producto.codigo);
			printf("\tNombre del producto: %s\n", producto.nombre);			
			printf("\tCosto del producto: %.1f $\n", producto.costo);
			printf("\tPrecio del producto: %.1f $\n", producto.precio);
			printf("\tCantidad: %d\n", producto.cantidad);
 
			printf("\n\tSeguro que desea eliminar el producto? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				if (eliminarProducto(codigoProducto)) {
					printf("\n\tProducto eliminado satisfactoriamente.\n");
				} else {
					printf("\n\tEl producto no pudo ser eliminado\n");
				}
			}
 
		} else {
		
			printf("\n\tEl producto de código %d no existe.\n", codigoProducto);
		}
 
		printf("\n\tDesea eliminar otro producto? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}
 
void menuMostrar()
{
	Producto *productos;
	int numeroProductos;
	int i;
	float costoTotal;
	float precioTotal;
	int cantidadTotal;
	char respuesta[MAX];
 
	system(CLEAR);
	tituloPrincipal();
	productos = obtenerProductos(&numeroProductos);
 
	if (numeroProductos == 0) {
		printf("\n\tEl archivo está vacío!!\n");
		getchar();
 
	} else {
		printf("\n\t\t    ==> LISTADO DE PRODUCTOS REGISTRADOS <==\n");
		printf(" ------------------------------------------------------------------------------\n");
		printf("%8s\t%-20s%15s%15s%10s\n", "CODIGO", "NOMBRE", "COSTO $", "PRECIO $", "CANTIDAD");
		printf(" ------------------------------------------------------------------------------\n");
 
	
		costoTotal = 0;
		precioTotal = 0;
		cantidadTotal = 0;
		for (i = 0; i < numeroProductos; i++) {
			if (productos[i].codigo != VALOR_CENTINELA) {
				printf("%7d \t%-20.20s%15.1f%15.1f%8d\n", productos[i].codigo, productos[i].nombre, productos[i].costo, productos[i].precio, productos[i].cantidad);
				costoTotal += productos[i].costo;
				precioTotal += productos[i].precio;
				cantidadTotal += productos[i].cantidad;
			}
		}
		printf(" ------------------------------------------------------------------------------\n");
		printf("\t\t\t      TOTAL: %15.1f%15.1f%8d\n", costoTotal, precioTotal, cantidadTotal);
 
		printf("\n\tDesea guardar el reporte en un archivo de texto? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
			if (guardarReporte()) {
				printf("\n\tEl reporte fue guardado con éxito\n");
			} else {
				printf("\n\tOcurrió un error al guardar el reporte\n");
			}
 
			getchar();
		}
	}
}
 
void menuModificar()
{
	Producto producto;
	int codigoProducto;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t    ==> MODIFICAR DATOS DE UN PRODUCTO <==\n");
 

		printf("\n\tCódigo de producto: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoProducto);
 
	
		if (existeProducto(codigoProducto, &producto)) {
 
		
			printf("\n\tNombre del producto: %s\n", producto.nombre);
			printf("\tCosto del producto ($): %.1f\n", producto.costo);
			printf("\tPrecio del producto ($): %.1f\n", producto.precio);
			printf("\tCantidad: %d\n", producto.cantidad);
 
			printf("\n\tElija los datos a modificar\n");
 
	
			printf("\n\tNombre del producto actual: %s\n", producto.nombre);
			printf("\tDesea modificar el nombre del producto? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNuevo nombre del producto: ");
				leecad(producto.nombre, MAX);
			}
 
		
			printf("\n\tCosto del producto actual: %.1f\n", producto.costo);
			printf("\tDesea modificar el costo del producto? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNuevo costo del producto: ");
				leecad(linea, MAX);
				sscanf(linea, "%f", &producto.costo);
			}
 
		
			printf("\n\tPrecio del producto actual: %.1f\n", producto.precio);
			printf("\tDesea modificar el precio del producto? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNuevo precio del producto: ");
				leecad(linea, MAX);
				sscanf(linea, "%f", &producto.precio);
			}
 
		
			printf("\n\tCantidad del producto actual: %d\n", producto.cantidad);
			printf("\tDesea modificar la cantidad del producto? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNueva cantidad del producto: ");
				leecad(linea, MAX);
				sscanf(linea, "%d", &producto.cantidad);
			}
 
			printf("\n\tEstá seguro que desea modificar los datos del producto? [S/N]: ");
			leecad(respuesta, MAX);
 
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
			
				if (modificarProducto(producto)) {
					printf("\n\tEl producto fue modificado correctamente\n");
 
				} else {
					printf("\n\tOcurrió un error al intentar modificar el producto\n");
					printf("\tInténtelo mas tarde\n");
				}
			}
		} else {
			
			printf("\n\tEl producto de código %d no existe.\n", codigoProducto);
		}
 
		printf("\n\tDesea modificar algún otro producto? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}
 

Producto *obtenerProductos(int *n)
{
	FILE *archivo;
	Producto producto;
	Producto *productos; 
	int i;
 
	
	archivo = fopen("productos.dat", "rb");
 
	if (archivo == NULL) { 
		*n = 0; 
		productos = NULL;
 
	} else {
 
		fseek(archivo, 0, SEEK_END); 
		*n = ftell(archivo) / sizeof(Producto); 
		productos = (Producto *)malloc((*n) * sizeof(Producto)); 
 
	
		fseek(archivo, 0, SEEK_SET); 
		fread(&producto, sizeof(producto), 1, archivo);
		i = 0;
		while (!feof(archivo)) {
			productos[i++] = producto;
			fread(&producto, sizeof(producto), 1, archivo);
		}
 
	
		fclose(archivo);
	}
 
	return productos;
}
 
char existeProducto(int codigoProducto, Producto *producto)
{
	FILE *archivo;
	char existe;
 

	archivo = fopen("productos.dat", "rb");
 
	if (archivo == NULL) { 
		existe = 0;
 
	} else {
		existe = 0;
 

		fread(&(*producto), sizeof(*producto), 1, archivo);
		while (!feof(archivo)) {
			if ((*producto).codigo == codigoProducto) {
				existe = 1;
				break;
			}
			fread(&(*producto), sizeof(*producto), 1, archivo);
		}
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return existe;
}
 
char insertarProducto(Producto producto)
{
	FILE *archivo;
	char insercion;
 

	archivo = fopen("productos.dat", "ab");	
 
	if (archivo == NULL) { 
		insercion = 0;
 
	} else {
		fwrite(&producto, sizeof(producto), 1, archivo);
		insercion = 1;
 
	
		fclose(archivo);
	}
 
	return insercion;
}
 

char eliminarProducto(int codigoProducto)
{
	FILE *archivo;
	FILE *auxiliar;
	Producto producto;
	char elimina;
 
	
	archivo = fopen("productos.dat", "r+b");
 
	if (archivo == NULL) { 
		elimina = 0;
 
	} else {

 
		elimina = 0;
		fread(&producto, sizeof(producto), 1, archivo);
		while (!feof(archivo)) {
			if (producto.codigo == codigoProducto) {
				fseek(archivo, ftell(archivo) - sizeof(producto), SEEK_SET);
				producto.codigo = VALOR_CENTINELA;
				fwrite(&producto, sizeof(producto), 1, archivo);
				elimina = 1;
				break;
			}
			fread(&producto, sizeof(producto), 1, archivo);
		}
 
	
		fclose(archivo);
	}
 
	return elimina;
}
 
char eliminacionFisica()
{
	FILE *archivo;
	FILE *temporal;
	Producto producto;
	char elimina = 0;
 
	archivo = fopen("productos.dat", "rb");
	temporal = fopen("temporal.dat", "wb");
 
	if (archivo == NULL || temporal == NULL) {
		elimina = 0;
	} else {
	
		fread(&producto, sizeof(producto), 1, archivo);
		while (!feof(archivo)) {
			if (producto.codigo != VALOR_CENTINELA) {
				fwrite(&producto, sizeof(producto), 1, temporal);
			}
			fread(&producto, sizeof(producto), 1, archivo);
		}
		
		fclose(archivo);
		fclose(temporal);
 
		remove("productos.dat");
		rename("temporal.dat", "productos.dat");
 
		elimina = 1;
	}
 
	return elimina;
}
 
char modificarProducto(Producto producto)
{
	FILE *archivo;
	char modifica;
	Producto producto2;
 

	archivo = fopen("productos.dat", "rb+");
 
	if (archivo == NULL) { 
		modifica = 0;
 
	} else {
		modifica = 0;
		fread(&producto2, sizeof(producto2), 1, archivo);
		while (!feof(archivo)) {
			if (producto2.codigo == producto.codigo) {
				fseek(archivo, ftell(archivo) - sizeof(producto), SEEK_SET);
				fwrite(&producto, sizeof(producto), 1, archivo);
				modifica = 1;
				break;
			}
			fread(&producto2, sizeof(producto2), 1, archivo);
		}
 
		fclose(archivo);
	}
 

	return modifica;
}
 
char guardarReporte()
{
	FILE *archivo;
	char guardado;
	Producto *productos;
	int numeroProductos;
	int i;
	float costoTotal;
	float precioTotal;
	int cantidadTotal;
 
	productos = obtenerProductos(&numeroProductos); 
 
	if (numeroProductos == 0) {
		guardado = 0;
 
	} else {
	
		archivo = fopen("reporte.txt", "w");
 
		if (archivo == NULL) { 
			guardado = 0;
 
		} else {
			fprintf(archivo, "\n\t\t    ==> LISTADO DE PRODUCTOS REGISTRADOS <==\n");
			fprintf(archivo, " ------------------------------------------------------------------------------\n");
			fprintf(archivo, "%8s\t%-20s%15s%15s%10s\n", "CODIGO", "NOMBRE", "COSTO $", "PRECIO $", "CANTIDAD");
			fprintf(archivo, " ------------------------------------------------------------------------------\n");
 
			
			costoTotal = 0;
			precioTotal = 0;
			cantidadTotal = 0;
			for (i = 0; i < numeroProductos; i++) {
				if (productos[i].codigo != VALOR_CENTINELA) {
					fprintf(archivo, "%7d \t%-20.20s%15.1f%15.1f%8d\n", productos[i].codigo, productos[i].nombre, productos[i].costo, productos[i].precio, productos[i].cantidad);
					costoTotal += productos[i].costo;
					precioTotal += productos[i].precio;
					cantidadTotal += productos[i].cantidad;
				}
			}
			fprintf(archivo, " ------------------------------------------------------------------------------\n");
			fprintf(archivo, "\t\t\t      TOTAL: %15.1f%15.1f%8d", costoTotal, precioTotal, cantidadTotal);
 
			guardado = 1;
 
		
			fclose(archivo);
		}
	}
	
	free(productos);
	productos = NULL;
 
	return guardado;
}
 
int leecad(char *cad, int n)
{
	int i, c;
 

	c = getchar();
	if (c == EOF) {
		cad[0] = '\0';
		return 0;
	}
 

	if (c == '\n') {
		i = 0;
	} else {

		cad[0] = c;
		i = 1;
	}
 

	for (; i < n - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		cad[i] = c;
	}
	cad[i] = '\0';

	if (c != '\n' && c != EOF) 
		while ((c = getchar()) != '\n' && c != EOF);
 
 
	return 1;
}
 

void tituloPrincipal()
{
	int i;
	printf("\n     ======================================================================\n");
	printf("\t\t\t         MENU DE ARCHIVOS\n");
	printf("\tCreación, reportes, eliminación, búsqueda y actualización de productos\n");
	printf("\t\t   SISTEMA DE VENTAS FFMMA | EMPRESA FFMMA \n");
	printf("     ======================================================================\n");
 
	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}

void titulo()
{
	int i;
	printf("\n     ======================================================================\n");
	printf("\t\t\t         MENU DE AYUDA\n");
	printf("\t      INFORMACION DE LOS PROGRAMADORES Y DEL SISTEMA\n");
	printf("\t\t    SISTEMA DE VENTAS FFMMA | EMPRESA FFMMA \n");
	printf("     ======================================================================\n");
 
	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}

void tituloo()
{
	int i;
	printf("\n     ======================================================================\n");
	printf("\t\t\t         MENU DE MOVIMIENTOS\n");
	printf("\t REALIZACION DE FACTURAS Y REPORTES DE FACTURAS \n");
	printf("\t\t  SISTEMA DE VENTAS FFMMA | EMPRESA FFMMA \n");
	printf("     ======================================================================\n");
 
	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}




void MenuAyuda(){
	char repite = 1;
	int opcion = -1;
	do{
		system(CLEAR);
		titulo();
		
				printf("\n\t\t\t\tMENU DE AYUDA\n");
		printf("\n\t\t[1]. Nombre del sistema\n");
		printf("\t\t[2]. Nombre de los estudiantes\n");
		printf("\t\t[3]. Numero de cedula de cada estudiante\n");
		printf("\t\t[4]. Visualizar anio\n");
		printf("\t\t[5]. Visualizar el semestre\n");
		printf("\t\t[6]. Salir\n");
		printf("\n\t\tIngrese su opción: [ ]\b\b");
		
		leecad(linea, MAX);
		sscanf(linea, "%d", &opcion);

		switch(opcion){
			case 1:
				system(CLEAR);
				titulo();
					printf("\n\t\t           EL NOMBRE DEL SISTEMA ES:\n");
					printf("\n\t\t\t==> SISTEMA DE VENTAS FFMMA <==\n\n");
	                    		
	                    		system ("pause");
	                    		  system("cls");  
				break;
			
			case 2:
				system(CLEAR);
				titulo();
					printf("\n\nLOS NOMBRES DE LOS ESTUDIANTES SON:\n");
							printf("\n\t[1].FRANKLIN CHARAIMA\n");
						    printf("\n\t[2].MAURICIO ARISMENDI\n");
						    printf("\n\t[3].ARNALDO PERDOMO\n");
						    printf("\n\t[4].FRANCO TOBON\n");
						    printf("\n\t[5].MIGUEL PEÑA\n\n");
						    
						    system ("pause");
	                    	system("cls"); 
				break;
				
			case 3:
				system(CLEAR);
				titulo();
				printf("\n\nLOS NUMEROS DE CEDULA DE LOS ESTUDIANTES SON:\n");
						    printf("\n\t[1]. 30791551\n");
						    printf("\n\t[2]. 31781717\n");
						    printf("\n\t[3]. 30820542\n");
						    printf("\n\t[4]. 30943420\n");
						    printf("\n\t[5]. 30735681\n\n");
						    
						    system ("pause");
	                    	system("cls"); 
				
				break;
				
			case 4:
				system(CLEAR);
				titulo();
				printf("\n\n\t ANIO 2022\n\n");
				
							system ("pause");
	                    	system("cls"); 
				
				break;
				
			case 5:
				system(CLEAR);
				titulo();
					printf("\n\nINGENIERIA INFORMATICA SEMESTRE II\n\n");
					
							system ("pause");
	                    	system("cls");  
				break;
			
			case 6:
				repite = 0;	
				break;
		}
	
}while(repite);

}

void menuInsertarC(){
		Cliente cliente;
	int codigoCliente = 0;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t\t==> INSERTAR CLIENTE <==\n");
 
		/* Se pide el código del producto a insertar */
		printf("\n\tCódigo que tendra el cliente para la lista: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoCliente);
 
		/* Se verifica que el producto no haya sido almacenado anteriormente */
		if (!existeCliente(codigoCliente, &cliente)) {
 
			cliente.codigo = codigoCliente;
 
			/* Se piden los demás datos del producto a insertar */
			printf("\tNombre del cliente: ");
			leecad(cliente.nombre, MAX);
			printf("\tApellido del cliente: ");
			leecad(cliente.apellido, MAX);
			printf("\tNumero de cedula: ");
			leecad(linea, MAX);
			sscanf(linea, "%d", &cliente.cedula);
			printf("\tCorreo electronico: ");
			leecad(cliente.correo, MAX);
		    printf("\tDireccion: ");
			leecad(cliente.direccion, MAX);
		
 
			/* Se inserta el producto en el archivo */
			if (insertarCliente(cliente)) {
				printf("\n\tLos datos del cliente fueron insertados correctamente\n");
 
			} else {
				printf("\n\tOcurrió un error al intentar insertar los datos\n");
				printf("\tInténtelo mas tarde\n");
			}
		} else {
			/* El producto ya existe, no puede ser insertado. */
			printf("\n\tEl código %d para el cliente ya existe.\n", codigoCliente);
			printf("\tNo puede ingresar dos clientes distintos con el mismo código.\n");
		}
 
		printf("\n\tDesea seguir ingresando nuevos clientes? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}
void menuBuscarC(){
		Cliente cliente;
	int codigoCliente;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t\t  ==> BUSCAR UN CLIENTE <==\n");
 
		/* Se pide el código del producto a buscar */
		printf("\n\tCódigo del cliente: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoCliente);
 
		/* Se verifica que el producto a buscar, exista */
		if (existeCliente(codigoCliente, &cliente)) {
 
			/* Se muestran los datos del producto */
			printf("\n\tCódigo del cliente: %d\n", cliente.codigo);
			printf("\tNombre del cliente: %s\n", cliente.nombre);
			printf("\tApellido del cliente: %s\n", cliente.apellido);		
			printf("\tNumero de cedula: %d\n", cliente.cedula);				
			printf("\tCorreo eletronico: %s\n", cliente.correo);		
			printf("\tDireccion: %s\n", cliente.direccion);			

		} else {
			/* El producto no existe */
			printf("\n\tEl código %d no existe.\n", codigoCliente);
		}
 
		printf("\n\tDesea seguir buscando algún otro cliente? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}

void menuMostrarC(){
		Cliente *cliente;
	int numeroCliente;
	int i;
	char respuesta[MAX];
 
	system(CLEAR);
	tituloPrincipal();
	cliente = obtenerCliente(&numeroCliente); /* Retorna un vector dinámico de productos */
 
	if (numeroCliente == 0) {
		printf("\n\tEl archivo está vacío!!\n");
		getchar();
 
	} else {
		printf("\n\t\t    ==> LISTADO DE CLIENTES REGISTRADOS <==\n");
		printf(" ------------------------------------------------------------------------------\n");
		printf("%8s\t%-10s%10s%15s\n", "CODIGO", "NOMBRE","APELLIDO","CEDULA");
		printf(" ------------------------------------------------------------------------------\n");
 

		for (i = 0; i < numeroCliente; i++) {
			if (cliente[i].codigo != VALOR_CENTINELA) {
				printf("%7d \t%-10.10s %10s  %15d \n", cliente[i].codigo, cliente[i].nombre,cliente[i].apellido,cliente[i].cedula);
			
			}
		}
		printf(" ------------------------------------------------------------------------------\n");
        	printf("\n         ==> SI DESEA VER MAS DATOS REGISTRADOS DIRIGASE A LA OPCION 4 <==  \n");
 
		printf("\n\tDesea guardar el reporte en un archivo de texto? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
			if (guardarReporte()) {
				printf("\n\tEl reporte fue guardado con éxito\n");
			} else {
				printf("\n\tOcurrió un error al guardar el reporte\n");
			}
 
			getchar();
		}
	}
}

void menuEliminarC(){
		Cliente cliente;
	int codigoCliente;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
			printf("\n\t\t         ==> ELIMINAR UN CLIENTE <==\n");
 
		/* Se pide el código del producto a eliminar */
		printf("\n\tCódigo del cliente: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoCliente);
 
		/* Se verifica que el producto a buscar, exista */
		if (existeCliente(codigoCliente, &cliente)) {
 
			/* Se muestran los datos del producto */
			printf("\n\tCódigo del cliente: %d\n", cliente.codigo);
			printf("\tNombre del cliente: %s\n", cliente.nombre);			

 
			printf("\n\tSeguro que desea eliminar los datos de este cliente? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				if (eliminarCliente(codigoCliente)) {
					printf("\n\tDatos del cliente eliminados satisfactoriamente.\n");
				} else {
					printf("\n\tLos datos no pudiron ser eliminados\n");
				}
			}
 
		} else {
			/* El producto no existe */
			printf("\n\tEl cliente con el código %d no existe.\n", codigoCliente);
		}
 
		printf("\n\tDesea eliminar otro cliente? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}

void menuModificarC(){
		Cliente cliente;
	int codigoCliente;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t     ==> MODIFICAR DATOS DEL CLIENTE <==\n");
 
		/* Se pide el código del producto a modificar */
		printf("\n\tCódigo del cliente: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoCliente);
 
		/* Se verifica que el producto a buscar exista */
		if (existeCliente(codigoCliente, &cliente)) {
 
			/* Se muestran los datos del producto */
			printf("\n\tNombre del cliente: %s\n", cliente.nombre);
            printf("\n\tApellido del cliente: %s\n",cliente.apellido);
			printf("\n\tNumero de cedula: %f\n",cliente.cedula);
			printf("\n\tCorreo electronico: %s\n",cliente.correo);
		    printf("\n\tDireccion: %s\n",cliente.direccion);
 
			printf("\n\tElija los datos a modificar\n");
 
			/* Modificación del nombre del producto */
			printf("\n\tNombre del cliente actual: %s\n", cliente.nombre);
			printf("\tDesea modificar el nombre del cliente? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNuevo nombre del cliente: ");
				leecad(cliente.nombre, MAX);
			}
			
				printf("\n\tApellido del cliente actual: %s\n", cliente.apellido);
			printf("\tDesea modificar el apellido del cliente? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNuevo apellido del cliente: ");
				leecad(cliente.apellido, MAX);
			}
			
				printf("\n\tNumero de cedula actual : %d\n",cliente.cedula);
			printf("\tDesea modificar la cedula del cliente? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNueva cedula del cliente: ");
				leecad(linea, MAX);
				sscanf(linea, "%d", &cliente.cedula);
			}
			
					printf("\n\tCorreo electronico del cliente actual: %s\n", cliente.correo);
			printf("\tDesea modificar el correo electronico del cliente? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNuevo correo electronico del cliente: ");
				leecad(cliente.correo, MAX);
			}
						printf("\n\tDireccion del cliente actual: %s\n", cliente.direccion);
			printf("\tDesea modificar la direccion del cliente? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNueva direccion del cliente: ");
				leecad(cliente.direccion, MAX);
			}
 
			printf("\n\tEstá seguro que desea modificar los datos del cliente? [S/N]: ");
			leecad(respuesta, MAX);
 
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				/* Se modifica el producto en el archivo */
				if (modificarCliente(cliente)) {
					printf("\n\tLos datos del cliente fueron modificados correctamente\n");
 
				} else {
					printf("\n\tOcurrió un error al intentar modificar los daots\n");
					printf("\tInténtelo mas tarde\n");
				}
			}
		} else {
			/* El producto no existe */
			printf("\n\tEl cliente con el código %d no existe.\n", codigoCliente);
		}
 
		printf("\n\tDesea modificar algún otro cliente? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}

void reporteclienteC(){
	
}
void cliente(){
		char repite = 1;
	int opcion = -1;
	/* Cuando el usuario ingresa texto en lugar de ingresar una opción. El programa no modifica
	el valor de opcion. En ese caso, no se debe de ingresar a ninguno de los case, por eso se está
	inicializando la variable opcion con un valor que no permita ejecutar ningún case. Simplemente,
	volver a interar y pedir nuevamente la opción. */
 
	do {
		system(CLEAR);
 
		tituloPrincipal();
 
		printf("\n\t\t\t\tMENU DE CLIENTES\n");
		printf("\n\t\t[1]. Insertar nuevo cliente\n");
		printf("\t\t[2]. Mostrar listado de clientes\n");
		printf("\t\t[3]. Eliminar un cliente del listado\n");
		printf("\t\t[4]. Buscar cliente por codigo\n");
		printf("\t\t[5]. Modificar un datos del cliente\n");
		printf("\t\t[6]. Reporte de cliente\n");
		printf("\t\t[7]. Salir\n");
		printf("\n\t\tIngrese su opción: [ ]\b\b");
 
		/* Lectura segura de un entero */
		leecad(linea, MAX);
		sscanf(linea, "%d", &opcion);
 
		switch (opcion) {
 
			case 1:
				menuInsertarC();
				break;
 
			case 2:
				menuMostrarC();
				break;
 
			case 3:
				menuEliminarC();
				break;
 
			case 4:
				menuBuscarC();
				break;
 
			case 5:
				menuModificarC();
				break;
 
			case 6:
			reporteclienteC();
				break;
				
			case 7:
				repite = 0;
				break;
 
		}
 
	} while (repite);
	
}


void reportecliente()
{
	
	
}

void menuusuario(){
   	char repite = 1;
	int opcion = -1;
	/* Cuando el usuario ingresa texto en lugar de ingresar una opción. El programa no modifica
	el valor de opcion. En ese caso, no se debe de ingresar a ninguno de los case, por eso se está
	inicializando la variable opcion con un valor que no permita ejecutar ningún case. Simplemente,
	volver a interar y pedir nuevamente la opción. */
 
	do {
		system(CLEAR);
 
		tituloPrincipal();
 
		printf("\n\t\t\t\tMENU DE USUARIOS\n");
		printf("\n\t\t[1]. Insertar nuevo usuario\n");
		printf("\t\t[2]. Mostrar listado de usuarios\n");
		printf("\t\t[3]. Eliminar un usuario del listado\n");
		printf("\t\t[4]. Buscar usuario por numero\n");
		printf("\t\t[5]. Reporte de usuario\n");
		printf("\t\t[6]. Salir\n");
		printf("\n\t\tIngrese su opción: [ ]\b\b");
 
		/* Lectura segura de un entero */
		leecad(linea, MAX);
		sscanf(linea, "%d", &opcion);
 
		switch (opcion) {
 
			case 1:
				menuInsertarU();
				break;
 
			case 2:
				menuMostrarU();
				break;
 
			case 3:
				menuEliminarU();
				break;
 
			case 4:
				menuBuscarU();
				break;
 
			case 5:
			reporteusuario();
				break;
 
			case 6:
			repite = 0;
				break;
				

 
		}
 
	} while (repite);
}

void reporteusuario()
{
	
	
}


void menuInsertarU()
{
	Usuario usuario;
	int codigoUsuario = 0;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t\t==> INSERTAR NUEVO USUARIO <==\n");
 
		/* Se pide el código del producto a insertar */
		printf("\n\tCódigo que tendra el Usuario para la lista: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoUsuario);
 
		/* Se verifica que el producto no haya sido almacenado anteriormente */
		if (!existeUsuario(codigoUsuario, &usuario)) {
 
			usuario.codigo = codigoUsuario;
 
			/* Se piden los demás datos del producto a insertar */
			printf("\tNombre del Usuario: ");
			leecad(usuario.nombre, MAX);
			printf("\tContraseña: ");
			leecad(usuario.contrasena, MAX);

			/* Se inserta el producto en el archivo */
			if (insertarUsuario(usuario)) {
				printf("\n\tLos datos del Usuario fueron insertados correctamente\n");
 
			} else {
				printf("\n\tOcurrió un error al intentar insertar los datos\n");
				printf("\tInténtelo mas tarde\n");
			}
		} else {
			/* El producto ya existe, no puede ser insertado. */
			printf("\n\tEl código %d para el Usuario ya existe.\n", codigoUsuario);
			printf("\tNo puede ingresar dos clientes distintos con el mismo código.\n");
		}
 
		printf("\n\tDesea seguir ingresando nuevos clientes? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}

void menuBuscarU()
{
	Usuario usuario;
	int codigoUsuario;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t\t  ==> BUSCAR UN USUARIO <==\n");
 
		/* Se pide el código del producto a buscar */
		printf("\n\tCódigo del Usuario: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoUsuario);
 
		/* Se verifica que el producto a buscar, exista */
		if (existeUsuario(codigoUsuario, &usuario)) {
 
			/* Se muestran los datos del producto */
			printf("\n\tCódigo del Usuario: %d\n", usuario.codigo);
			printf("\tNombre del Usuario: %s\n", usuario.nombre);
			printf("\tContraseña del Usuario: %s\n", usuario.contrasena);		
		

		} else {
			/* El producto no existe */
			printf("\n\tEl código %d no existe.\n", codigoUsuario);
		}
 
		printf("\n\tDesea seguir buscando algún otro Usuario? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}

void menuEliminarU()
{
	Usuario usuario;
	int codigoUsuario;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t         ==> ELIMINAR UN USUARIO <==\n");
 
		/* Se pide el código del producto a eliminar */
		printf("\n\tCódigo del Usuario: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoUsuario);
 
		/* Se verifica que el producto a buscar, exista */
		if (existeUsuario(codigoUsuario, &usuario)) {
 
			/* Se muestran los datos del producto */
			printf("\n\tCódigo del Usuario: %d\n", usuario.codigo);
			printf("\tNombre del Usuario: %s\n", usuario.nombre);			

 
			printf("\n\tSeguro que desea eliminar los datos de este Usuario? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				if (eliminarUsuario(codigoUsuario)) {
					printf("\n\tDatos del Usuario eliminados satisfactoriamente.\n");
				} else {
					printf("\n\tLos datos no pudiron ser eliminados\n");
				}
			}
 
		} else {
			/* El producto no existe */
			printf("\n\tEl Usuario con el código %d no existe.\n", codigoUsuario);
		}
 
		printf("\n\tDesea eliminar otro Usuario? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
}
 
 
void menuMostrarU()
{
	Usuario *usuario;
	int numeroUsuario;
	int i;
	char respuesta[MAX];
 
	system(CLEAR);
	tituloPrincipal();
	usuario = obtenerUsuario(&numeroUsuario); /* Retorna un vector dinámico de productos */
 
	if (numeroUsuario == 0) {
		printf("\n\tEl archivo está vacío!!\n");
		getchar();
 
	} else {
		printf("\n\t\t    ==> LISTADO DE USUARIOS REGISTRADOS <==\n");
		printf(" ------------------------------------------------------------------------------\n");
		printf("%8s\t%-10s\n", "CODIGO", "NOMBRE");
		printf(" ------------------------------------------------------------------------------\n");
 

		for (i = 0; i < numeroUsuario; i++) {
			if (usuario[i].codigo != VALOR_CENTINELA) {
				printf("%7d \t%-10.10s \n", usuario[i].codigo, usuario[i].nombre);
			
			}
		}
		printf(" ------------------------------------------------------------------------------\n");
        	printf("\n =>SI DESEA VER MAS DATOS REGISTRADOS DIRIGASE A LA OPCION 4 DEL MENU USUARIO <= \n");
 
		printf("\n\tDesea guardar el reporte en un archivo de texto? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
			if (guardarReporte()) {
				printf("\n\tEl reporte fue guardado con éxito\n");
			} else {
				printf("\n\tOcurrió un error al guardar el reporte\n");
			}
 
			getchar();
		}
	}
}



Usuario *obtenerUsuario(int *n)
{
	FILE *archivo;
	Usuario usuario;
	Usuario *usuarios; /* Vector dinámico de productos */
	int i;
 
	/* Abre el archivo en modo lectura */
	archivo = fopen("usuarios.dat", "rb");
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		*n = 0; /* No se pudo abrir. Se considera n  */
		usuarios = NULL;
 
	} else {
 
		fseek(archivo, 0, SEEK_END); /* Posiciona el cursor al final del archivo */
		*n = ftell(archivo) / sizeof(Usuario); /* # de productos almacenados en el archivo. (# de registros) */
		usuarios = (Usuario *)malloc((*n) * sizeof(Usuario)); /* Se reserva memoria para todos los productos almacenados en el archivo */
 
		/* Se recorre el archivo secuencialmente */
		fseek(archivo, 0, SEEK_SET); /* Posiciona el cursor al principio del archivo */
		fread(&usuario, sizeof(usuario), 1, archivo);
		i = 0;
		while (!feof(archivo)) {
			usuarios[i++] = usuario;
			fread(&usuario, sizeof(usuario), 1, archivo);
		}
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return usuarios;
}






char modificarUsuario(Usuario usuario)
{
	FILE *archivo;
	char modifica;
	Usuario usuario2;
 
	/* Abre el archivo para lectura/escritura */
	archivo = fopen("usuarios.dat", "rb+");
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		modifica = 0;
 
	} else {
		modifica = 0;
		fread(&usuario2, sizeof(usuario2), 1, archivo);
		while (!feof(archivo)) {
			if (usuario2.codigo == usuario.codigo) {
				fseek(archivo, ftell(archivo) - sizeof(usuario), SEEK_SET);
				fwrite(&usuario, sizeof(usuario), 1, archivo);
				modifica = 1;
				break;
			}
			fread(&usuario2, sizeof(usuario2), 1, archivo);
		}
 
		fclose(archivo);
	}
 
	/* Cierra el archivo */
	return modifica;
}




void MenuArchivo(){
	char repite = 1;
	int opcion = -1;
	do{
		system(CLEAR);
		tituloPrincipal();
		
		printf("\n\t\t\t\tMENU DE ARCHIVOS\n");
		printf("\n\t\t[1]. Usuarios");
		printf("\n\t\t[2]. Clientes\n");
		printf("\t\t[3]. Productos\n");
		printf("\t\t[4]. Cambio de usuario\n");
		printf("\t\t[5]. Cambio de clave\n");
		printf("\t\t[6]. Salir\n");
		printf("\n\t\tIngrese su opción: [ ]\b\b");
		
		leecad(linea, MAX);
		sscanf(linea, "%d", &opcion);
		
		switch(opcion){
			
			case 1:
				menuusuario();
				break;
			
			case 2:
				cliente();
				break;
				
			case 3:
				MenuProducto();
				break;
				
			case 4:
				CambioU();
				break;
				
			case 5:
				CambioC();
				break;
				
			case 6:
				repite = 0;
				break;
		}
		
}while(repite);
}

void CambioC(){
			Usuario usuario;
	int codigoUsuario;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t       ==> MODIFICAR LA CONTRASEÑA <==\n");
 
		/* Se pide el código del producto a modificar */
		printf("\n\tCódigo del Usuario: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoUsuario);
 
		/* Se verifica que el producto a buscar exista */
		if (existeUsuario(codigoUsuario, &usuario)) {
 
			/* Se muestran los datos del producto */
			printf("\n\tContrasena del usuario actual: %s\n", usuario.contrasena);
			printf("\tDesea modificar la contraseña del usuario? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNueva contrasena del usuario: ");
				leecad(usuario.contrasena, MAX);
			}
			
			printf("\n\tEstá seguro que desea modificar los datos del usuario? [S/N]: ");
			leecad(respuesta, MAX);
 
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				/* Se modifica el producto en el archivo */
				if (modificarUsuario(usuario)) {
					printf("\n\tLos datos del usuario fueron modificados correctamente\n");
 
				} else {
					printf("\n\tOcurrió un error al intentar modificar los datos\n");
					printf("\tInténtelo mas tarde\n");
				}
			}
		} else {
			/* El producto no existe */
			printf("\n\tEl usuario con el código %d no existe.\n", codigoUsuario);
		}
 
		printf("\n\tDesea modificar algún otro usuario? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
	
	
}

void CambioU(){
		Usuario usuario;
	int codigoUsuario;
	char repite = 1;
	char respuesta[MAX];
 
	do {
		system(CLEAR);
		tituloPrincipal();
		printf("\n\t\t     ==> MODIFICAR NOMBRE DEL USUARIO <==\n");
 
		/* Se pide el código del producto a modificar */
		printf("\n\tCódigo del Usuario: ");
		leecad(linea, MAX);
		sscanf(linea, "%d", &codigoUsuario);
 
		/* Se verifica que el producto a buscar exista */
		if (existeUsuario(codigoUsuario, &usuario)) {
 
			/* Se muestran los datos del producto */
				printf("\n\tNombre del cliente actual: %s\n", usuario.nombre);
			printf("\tDesea modificar el nombre del usuario? [S/N]: ");
			leecad(respuesta, MAX);
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				printf("\tNuevo nombre del usuario: ");
				leecad(usuario.nombre, MAX);
			}
			
			printf("\n\tEstá seguro que desea modificar los datos del usuario? [S/N]: ");
			leecad(respuesta, MAX);
 
			if (strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0) {
				/* Se modifica el producto en el archivo */
				if (modificarUsuario(usuario)) {
					printf("\n\tLos datos del usuario fueron modificados correctamente\n");
 
				} else {
					printf("\n\tOcurrió un error al intentar modificar los datos\n");
					printf("\tInténtelo mas tarde\n");
				}
			}
		} else {
			/* El producto no existe */
			printf("\n\tEl usuario con el código %d no existe.\n", codigoUsuario);
		}
 
		printf("\n\tDesea modificar algún otro usuario? [S/N]: ");
		leecad(respuesta, MAX);
 
		if (!(strcmp(respuesta, "S") == 0 || strcmp(respuesta, "s") == 0)) {
			repite = 0;
		}
 
	} while (repite);
	
	
}

char insertarCliente(Cliente cliente)
{
	FILE *archivo;
	char insercion;
 
	/* Abre el archivo para agregar datos al final */
	archivo = fopen("clientes.dat", "ab");	/* Añade datos al final. Si el archivo no existe, es creado */
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		insercion = 0;
 
	} else {
		fwrite(&cliente, sizeof(cliente), 1, archivo);
		insercion = 1;
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return insercion;
}


Cliente *obtenerCliente(int *n)
{
	FILE *archivo;
	Cliente cliente;
	Cliente *clientes; /* Vector dinámico de productos */
	int i;
 
	/* Abre el archivo en modo lectura */
	archivo = fopen("clientes.dat", "rb");
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		*n = 0; /* No se pudo abrir. Se considera n  */
		clientes = NULL;
 
	} else {
 
		fseek(archivo, 0, SEEK_END); /* Posiciona el cursor al final del archivo */
		*n = ftell(archivo) / sizeof(Cliente); /* # de productos almacenados en el archivo. (# de registros) */
		clientes = (Cliente *)malloc((*n) * sizeof(Cliente)); /* Se reserva memoria para todos los productos almacenados en el archivo */
 
		/* Se recorre el archivo secuencialmente */
		fseek(archivo, 0, SEEK_SET); /* Posiciona el cursor al principio del archivo */
		fread(&cliente, sizeof(cliente), 1, archivo);
		i = 0;
		while (!feof(archivo)) {
			clientes[i++] = cliente;
			fread(&cliente, sizeof(cliente), 1, archivo);
		}
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return clientes;
}


char existeCliente(int codigoCliente, Cliente *cliente)
{
	FILE *archivo;
	char existe;
 
	/* Abre el archivo en modo lectura */
	archivo = fopen("clientes.dat", "rb");
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		existe = 0;
 
	} else {
		existe = 0;
 
		/* Se busca el producto cuyo código coincida con codigoProducto */
		fread(&(*cliente), sizeof(*cliente), 1, archivo);
		while (!feof(archivo)) {
			if ((*cliente).codigo == codigoCliente) {
				existe = 1;
				break;
			}
			fread(&(*cliente), sizeof(*cliente), 1, archivo);
		}
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return existe;
}

char eliminarCliente(int codigoCliente)
{
	FILE *archivo;
	FILE *auxiliar;
	Cliente cliente;
	char elimina;
 
	/* Abre el archivo para leer */
	archivo = fopen("clientes.dat", "r+b");	/* Modo lectura/escritura. Si el archivo no existe, es creado */
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		elimina = 0;
 
	} else {
		/* Se busca el registro que se quiere borrar. Cuando se encuentra, se sitúa en esa posición mediante la 
		función fseek y luego se modifica el campo clave de ese registro mediante algún valor centinela, eso se logra 
		con fwrite. Hasta allí se ha logrado una eliminación LÓGICA. Porque el registro sigue ocupando espacio en el archivo físico */
 
		elimina = 0;
		fread(&cliente, sizeof(cliente), 1, archivo);
		while (!feof(archivo)) {
			if (cliente.codigo == codigoCliente) {
				fseek(archivo, ftell(archivo) - sizeof(cliente), SEEK_SET);
				cliente.codigo = VALOR_CENTINELA;
				fwrite(&cliente, sizeof(cliente), 1, archivo);
				elimina = 1;
				break;
			}
			fread(&cliente, sizeof(cliente), 1, archivo);
		}
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return elimina;
}

 
char eliminacionFisicaC()
{
	FILE *archivo;
	FILE *temporal;
	Cliente cliente;
	char elimina = 0;
 
	archivo = fopen("clientes.dat", "rb");
	temporal = fopen("temporal.dat", "wb");
 
	if (archivo == NULL || temporal == NULL) {
		elimina = 0;
	} else {
		/* Se copia en el archivo temporal los registros válidos */
		fread(&cliente, sizeof(cliente), 1, archivo);
		while (!feof(archivo)) {
			if (cliente.codigo != VALOR_CENTINELA) {
				fwrite(&cliente, sizeof(cliente), 1, temporal);
			}
			fread(&cliente, sizeof(cliente), 1, archivo);
		}
		/* Se cierran los archivos antes de borrar y renombrar */
		fclose(archivo);
		fclose(temporal);
 
		remove("clientes.dat");
		rename("temporal.dat", "clientes.dat");
 
		elimina = 1;
	}
 
	return elimina;
}


char modificarCliente(Cliente cliente)
{
	FILE *archivo;
	char modifica;
	Cliente cliente2;
 
	/* Abre el archivo para lectura/escritura */
	archivo = fopen("clientes.dat", "rb+");
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		modifica = 0;
 
	} else {
		modifica = 0;
		fread(&cliente2, sizeof(cliente2), 1, archivo);
		while (!feof(archivo)) {
			if (cliente2.codigo == cliente.codigo) {
				fseek(archivo, ftell(archivo) - sizeof(cliente), SEEK_SET);
				fwrite(&cliente, sizeof(cliente), 1, archivo);
				modifica = 1;
				break;
			}
			fread(&cliente2, sizeof(cliente2), 1, archivo);
		}
 
		fclose(archivo);
	}
 
	/* Cierra el archivo */
	return modifica;
}


char guardarReporteC()
{
	FILE *archivo;
	char guardado;
	Cliente *cliente;
	int numeroCliente;
	int i;
	float costoTotal;
	float precioTotal;
	int cantidadTotal;
 
	cliente = obtenerCliente(&numeroCliente); /* Retorna un vector dinámico de productos */
 
	if (numeroCliente == 0) {
		guardado = 0;
 
	} else {
		/* Abre el archivo en modo texto para escritura */
		archivo = fopen("reportee.txt", "w");
 
		if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
			guardado = 0;
 
		} else {
			fprintf(archivo, "\n\t\t    ==> LISTADO DE PRODUCTOS REGISTRADOS <==\n");
			fprintf(archivo, " ------------------------------------------------------------------------------\n");
			fprintf(archivo, "%8s\t%-20s\n", "CODIGO", "NOMBRE");
			fprintf(archivo, " ------------------------------------------------------------------------------\n");
 
			/* Se recorre el vector dinámico de productos */
	
	
	}
	free(cliente);
	cliente = NULL;
 
	return guardado;
}
}


int leecadC(char *cad, int t)
{
	int i, c;
 
	/* Hay que verificar si el buffer está limpio o si hay un '\n'
	  dejado por scanf y, en ese caso, limpiarlo:
	*/
 
	/* 1 COMPROBACIÓN DE DATOS INICIALES EN EL BUFFER */
 
	/* Empezamos leyendo el primer caracter que haya en la entrada. Si es
	  EOF, significa que no hay nada por leer, así que cerramos la cadena,
	  dejándola "vacía" y salimos de la función retornando un valor de 0
	  o falso, para indicar que hubo un error */
	c = getchar();
	if (c == EOF) {
		cad[0] = '\0';
		return 0;
	}
 
	/* Si el valor leído es '\n', significa que había un caracter de nueva línea
	dejado por un scanf o función similar. Simplemente inicializamos i a 0,
	para indicar que los siguientes caracteres que leamos iremos asignando a
	partir del primer caracter de la cadena. */
	if (c == '\n') {
		i = 0;
	} else {
	/* Si no había un '\n', significa que el caracter que leímos es el primer
	  caracter de la cadena introducida. En este caso, lo guardamos en la
	  posición 0 de cad, e inicializamos i a 1, porque en este caso, como ya
	  tenemos el primer caracter de la cadena, continuaremos agregando 
	  caracteres a partir del segundo.
 
	*/
		cad[0] = c;
		i = 1;
	}
 
	/* 2. LECTURA DE LA CADENA */
 
	/* El for empieza con un ; porque estamos omitiendo la inicialización del contador,
	ya que fue inicializado en el punto anterior.
	Este código lee un caracter a la vez,lo agrega a cad, y se repite hasta que
	se encuentre un fin de línea, fin de archivo, o haya leído la cantidad máxima
	de caracteres que se le indicó. Luego, cierra la cadena agregando un '\0'
	al final. Todo esto es muy similar a la forma en que los compiladores suelen
	implementar la función fgets, sólo que en lugar de getchar usan getc o fgetc
	*/
	for (; i < t - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		cad[i] = c;
	}
	cad[i] = '\0';
 
	/*3. LIMPIEZA DEL BUFFER */
 
	/* Finalmente limpiamos el buffer si es necesario */
	if (c != '\n' && c != EOF) /* es un caracter */
		while ((c = getchar()) != '\n' && c != EOF);
 
	/* La variable c contiene el último caracter leído. Recordemos que había 3 formas
	de salir del for: que hayamos encontrando un '\n', un EOF, o que hayamos llegado
	al máximo de caracteres que debemos leer. Si se da cualquiera de los dos
	primeros casos, significa que leímos todo lo que había en el buffer, por lo que
	no hay nada que limpiar. En el tercer caso, el usuario escribió más caracteres
	de los debidos, que aún están en el buffer, por lo que hay que quitarlos, para
	lo cual usamos el método que vimos poco más arriba
	*/
 
	return 1;
}


char existeUsuario(int codigoUsuario, Usuario *usuario)
{
	FILE *archivo;
	char existe;
 
	/* Abre el archivo en modo lectura */
	archivo = fopen("usuarios.dat", "rb");
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		existe = 0;
 
	} else {
		existe = 0;
 
		/* Se busca el producto cuyo código coincida con codigoProducto */
		fread(&(*usuario), sizeof(*usuario), 1, archivo);
		while (!feof(archivo)) {
			if ((*usuario).codigo == codigoUsuario) {
				existe = 1;
				break;
			}
			fread(&(*usuario), sizeof(*usuario), 1, archivo);
		}
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return existe;
}


char insertarUsuario(Usuario usuario)
{
	FILE *archivo;
	char insercion;
 
	/* Abre el archivo para agregar datos al final */
	archivo = fopen("usuarios.dat", "ab");	/* Añade datos al final. Si el archivo no existe, es creado */
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		insercion = 0;
 
	} else {
		fwrite(&usuario, sizeof(usuario), 1, archivo);
		insercion = 1;
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return insercion;
}


/* ELiminación lógica de un registro */
char eliminarUsuario(int codigoUsuario)
{
	FILE *archivo;
	FILE *auxiliar;
	Usuario usuario;
	char elimina;
 
	/* Abre el archivo para leer */
	archivo = fopen("usuarios.dat", "r+b");	/* Modo lectura/escritura. Si el archivo no existe, es creado */
 
	if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
		elimina = 0;
 
	} else {
		/* Se busca el registro que se quiere borrar. Cuando se encuentra, se sitúa en esa posición mediante la 
		función fseek y luego se modifica el campo clave de ese registro mediante algún valor centinela, eso se logra 
		con fwrite. Hasta allí se ha logrado una eliminación LÓGICA. Porque el registro sigue ocupando espacio en el archivo físico */
 
		elimina = 0;
		fread(&usuario, sizeof(usuario), 1, archivo);
		while (!feof(archivo)) {
			if (usuario.codigo == codigoUsuario) {
				fseek(archivo, ftell(archivo) - sizeof(usuario), SEEK_SET);
				usuario.codigo = VALOR_CENTINELA;
				fwrite(&usuario, sizeof(usuario), 1, archivo);
				elimina = 1;
				break;
			}
			fread(&usuario, sizeof(usuario), 1, archivo);
		}
 
		/* Cierra el archivo */
		fclose(archivo);
	}
 
	return elimina;
}


char eliminacionFisicaU()
{
	FILE *archivo;
	FILE *temporal;
	Usuario usuario;
	char elimina = 0;
 
	archivo = fopen("usuarios.dat", "rb");
	temporal = fopen("temporal.dat", "wb");
 
	if (archivo == NULL || temporal == NULL) {
		elimina = 0;
	} else {
		/* Se copia en el archivo temporal los registros válidos */
		fread(&usuario, sizeof(usuario), 1, archivo);
		while (!feof(archivo)) {
			if (usuario.codigo != VALOR_CENTINELA) {
				fwrite(&usuario, sizeof(usuario), 1, temporal);
			}
			fread(&usuario, sizeof(usuario), 1, archivo);
		}
		/* Se cierran los archivos antes de borrar y renombrar */
		fclose(archivo);
		fclose(temporal);
 
		remove("usuarios.dat");
		rename("temporal.dat", "usuarios.dat");
 
		elimina = 1;
	}
 
	return elimina;
}
 



char guardarReporteU()
{
	FILE *archivo;
	char guardado;
	Usuario *usuario;
	int numeroUsuario;
	int i;
	float costoTotal;
	float precioTotal;
	int cantidadTotal;
 
	usuario = obtenerUsuario(&numeroUsuario); /* Retorna un vector dinámico de productos */
 
	if (numeroUsuario == 0) {
		guardado = 0;
 
	} else {
		/* Abre el archivo en modo texto para escritura */
		archivo = fopen("reportee.txt", "w");
 
		if (archivo == NULL) { /* Si no se pudo abrir el archivo, el valor de archivo es NULL */
			guardado = 0;
 
		} else {
			fprintf(archivo, "\n\t\t    ==> LISTADO DE Usuarios REGISTRADOS <==\n");
			fprintf(archivo, " ------------------------------------------------------------------------------\n");
			fprintf(archivo, "%8s\t%-20s\n", "CODIGO", "NOMBRE");
			fprintf(archivo, " ------------------------------------------------------------------------------\n");
 
			/* Se recorre el vector dinámico de productos */
	
	
	}
	free(usuario);
	usuario = NULL;
 
	return guardado;
}
}


int leecadU(char *cad, int k)
{
	int i, c;
 
	/* Hay que verificar si el buffer está limpio o si hay un '\n'
	  dejado por scanf y, en ese caso, limpiarlo:
	*/
 
	/* 1 COMPROBACIÓN DE DATOS INICIALES EN EL BUFFER */
 
	/* Empezamos leyendo el primer caracter que haya en la entrada. Si es
	  EOF, significa que no hay nada por leer, así que cerramos la cadena,
	  dejándola "vacía" y salimos de la función retornando un valor de 0
	  o falso, para indicar que hubo un error */
	c = getchar();
	if (c == EOF) {
		cad[0] = '\0';
		return 0;
	}
 
	/* Si el valor leído es '\n', significa que había un caracter de nueva línea
	dejado por un scanf o función similar. Simplemente inicializamos i a 0,
	para indicar que los siguientes caracteres que leamos iremos asignando a
	partir del primer caracter de la cadena. */
	if (c == '\n') {
		i = 0;
	} else {
	/* Si no había un '\n', significa que el caracter que leímos es el primer
	  caracter de la cadena introducida. En este caso, lo guardamos en la
	  posición 0 de cad, e inicializamos i a 1, porque en este caso, como ya
	  tenemos el primer caracter de la cadena, continuaremos agregando 
	  caracteres a partir del segundo.
 
	*/
		cad[0] = c;
		i = 1;
	}
 
	/* 2. LECTURA DE LA CADENA */
 
	/* El for empieza con un ; porque estamos omitiendo la inicialización del contador,
	ya que fue inicializado en el punto anterior.
	Este código lee un caracter a la vez,lo agrega a cad, y se repite hasta que
	se encuentre un fin de línea, fin de archivo, o haya leído la cantidad máxima
	de caracteres que se le indicó. Luego, cierra la cadena agregando un '\0'
	al final. Todo esto es muy similar a la forma en que los compiladores suelen
	implementar la función fgets, sólo que en lugar de getchar usan getc o fgetc
	*/
	for (; i < k - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		cad[i] = c;
	}
	cad[i] = '\0';
 
	/*3. LIMPIEZA DEL BUFFER */
 
	/* Finalmente limpiamos el buffer si es necesario */
	if (c != '\n' && c != EOF) /* es un caracter */
		while ((c = getchar()) != '\n' && c != EOF);
 
	/* La variable c contiene el último caracter leído. Recordemos que había 3 formas
	de salir del for: que hayamos encontrando un '\n', un EOF, o que hayamos llegado
	al máximo de caracteres que debemos leer. Si se da cualquiera de los dos
	primeros casos, significa que leímos todo lo que había en el buffer, por lo que
	no hay nada que limpiar. En el tercer caso, el usuario escribió más caracteres
	de los debidos, que aún están en el buffer, por lo que hay que quitarlos, para
	lo cual usamos el método que vimos poco más arriba
	*/
 
	return 1;
}



 
