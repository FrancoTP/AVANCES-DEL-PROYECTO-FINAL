#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <cstdlib>


struct ropaM
{

int camisaM_M;
int camisaM_L;
int camisaM_S ;

}RopaM ={20 ,20 ,20} ;


typedef struct Pantalones_masculinos{

int pantalonM_14 , pantalonM_16 , pantalonM_18;

}Ropa_pantalonesMasculinos;


    int mostrarinventario (int x)
	
	{

	                    do {
		 	       		                     printf("\n                          INVENTARIO DE PRODUCTOS FFMMA                            \n\n");
	                     printf("\n    (1) Camisa Femenina   [Talla S]     (7)  Camisa Masculina    [Talla S]\n");
	                     printf("\n    (2) Camisa Femenina   [Talla M]     (8)  Camisa Masculina    [Talla M]\n");
	                     printf("\n    (3) Camisa Femenina   [Talla L]     (9)  Camisa Masculina    [Talla L]\n");
	                     printf("\n    (4) Pantalon Femenino [Talla 14]    (10)  Pantalon Masculino [Talla 14]\n");
                         printf("\n    (5) Pantalon Femenino [Talla 16]    (11) Pantalon Masculino  [Talla 16]\n");
	                     printf("\n    (6) Pantalon Femenino [Talla 18]    (12) Pantalon Masculino  [Talla 18]\n");
	 
   	                     printf("\n\n     MARQUE EL NUMERO DEL PRODUCTO QUE QUIERA PARA PODER OBSERVAR SU PRECIO     \n ");
                         printf("            O TAMBIEN MARQUE 13 PARA PODER VOLVER AL MENU PRINSIPAL: ");
                         scanf("%d",& x);

        	
	                     printf("\n                          INVENTARIO DE PRODUCTOS FFMMA                            \n\n");
	                     printf("\n    (1) Camisa Femenina   [Talla S]     (7)  Camisa Masculina    [Talla S]\n");
	                     printf("\n    (2) Camisa Femenina   [Talla M]     (8)  Camisa Masculina    [Talla M]\n");
	                     printf("\n    (3) Camisa Femenina   [Talla L]     (9)  Camisa Masculina    [Talla L]\n");
	                     printf("\n    (4) Pantalon Femenino [Talla 14]    (10)  Pantalon Masculino [Talla 14]\n");
                         printf("\n    (5) Pantalon Femenino [Talla 16]    (11) Pantalon Masculino  [Talla 16]\n");
	                     printf("\n    (6) Pantalon Femenino [Talla 18]    (12) Pantalon Masculino  [Talla 18]\n");
	                        system("cls");
	 
	                     switch (x)
		                   {
		                   	if(x>13 && x<=0);
			     		  {
	                	       printf("\n\n+++++++++ NUMERO INVALIDO SELECCIONE CORRECTAMENTE UN NUMERO DE LA LISTA +++++++\n\n ");
	                          }
		 

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
	  	    
                     default :
                   
			     		  {
	                	       printf("\n\n+++++++++ NUMERO INVALIDO SELECCIONE CORRECTAMENTE UN NUMERO DE LA LISTA +++++++\n\n ");
	                          }
    	          
                     	
                     	break;
                         }
                         		  	
                            }while (x!=13);
                         
}
    
    
    void mostrar_productos(void);
    
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
int comprar_CamisaS (int camisa_s ,int Total_camisa_s=0 ) 
{       if(RopaM.camisaM_S != NULL) {  
		printf ("\nCUANTAS CAMISAS TALLA S DESEA COMPRAR ?\n");
	      	             
						
							
	  	            	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaM.camisaM_S );
	                     printf ("\n");  
                          scanf ("%d",&camisa_s);	
		 
                         Total_camisa_s = camisa_s*20;
                       
                         printf ("\nUSTED GASTO %d $" , Total_camisa_s);
                         printf ("\n");
                         
                         RopaM.camisaM_S =RopaM.camisaM_S  - camisa_s;
                         
                         
                         
                          if (RopaM.camisaM_S <=0){
                         	printf ("\nCAMISAS TALLA S AGOTADAS\n");
                        
                         }
                         
                         
                         
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						 
                         	
						 
                         
                         
                         
}



void ComprarCamisa_M(  int opCamisa_M,	int camisa_s ,int camisa_M , int camisa_L ,	int  Total_camisa_s = 0)
{	
	
	do{
	
	printf ("\nUSTED A ELEGIDO COMPRAR CAMISAS MASCULINAS");
	
	printf ("\n1) COMPRAR CAMISAS TALLA S  ++ PRECIO UNITARIO DE 10$ ++              \n ");
    printf ("\n");
	printf ("\n2) COMPRAR CAMISAS TALLA M  ++ PRECIO UNITARIO DE 10$ ++              \n ");	
    printf ("\n");
	printf ("\n3) COMPRAR CAMISAS TALLA L  ++ PRECIO UNITARIO DE 10$ ++              \n ");
    printf ("\n");
	printf ("\n4) VOLVER AL MENU DE OPERACIONES"); 
    printf ("\n");	
	scanf ("%d" ,&opCamisa_M);	
	
	 system ("cls");
	switch (opCamisa_M) 
	{        

	
             
			  	do{
				
	        case 1 : {
		       comprar_CamisaS ( camisa_s , Total_camisa_s=0 );
	          
  		 	break;
           }
		  	case 2 :
		 	printf ("CUANTAS CAMISAS TALLA M DESEA COMPRA ?");
			scanf ("%d",camisa_M);
	  	 	
		 	break;
		
	 		case 3 :
	 		printf ("CUANTAS CAMISAS TALLA L DESEA COMPRA ?");
			
	  	  
	 		break;
		
	     	default :
		
            break;
           }while (opCamisa_M !=0);

	}	


	

	}while (opCamisa_M !=4);
}
int main (){
	int camisaM_S;
	int camisaM_M;
	int camisaM_L;
	int opCamisa_M;
   	camisaM_S=camisaM_S *10;
 	camisaM_M=camisaM_M *10; 
    camisaM_L=camisaM_L *10;
	
     char usuario[10] ;
     char USUARIO [10];
     char CLAVE [10];
     char clave[10];
     int intento = 0;
     int ingresa = 0; 
     int x ;
     char eleccion='0';
     
      
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
         if (strcmp(usuario,USUARIO)==0 &&  strcmp(clave , CLAVE)==0 )
		 
		   {
             system("cls");
  
       	     printf ("\nBienvenido al prgrama de ventas   #####FFMMA#####");
 	         printf("\n");
	         printf ("\n%s " , &usuario);
	         printf("\n");
	         
	         
	         
	         
      while( eleccion!=6) {
               printf ("\nQue deseas realizar\n");

             printf("\n1) ENTRAR A LAS OPCIONES DE VENTA ");
             
			 printf("\n2) MOSTRAR EL MENU DE ARCHIVO   \n"); 
             
			 printf("\n3) MOSTRAR EL MENU DE ARCHIVO\n");
             
			 printf("\n4) SALIR\n");
             
			 scanf("%d",&eleccion);
             
       

             	
             	system("cls");
             	    
						 
             switch(eleccion)
			    {
             	     
                   
	                 case 1 :
	                 	int op_compra;
             	     do {
					  
					  
             	     printf ("\nQUE DESEA COMPRAR HOY\n");
             	     
             	     printf ("\n");
					 printf ("\n 1) CAMISAS MASCULINAS   ");
					 printf ("\n");
             	     printf ("\n 2) CAMISAS FEMENINAS    ");
             	     printf ("\n");
             	     printf ("\n 3) VOLVER AL MENU  ");
             	     
	                 scanf ("%d", &op_compra);
	                 
	                      system ("cls");
	                 
					 
					 
					 	switch (op_compra)	{
					 		
					 		
					 	

					 		
							case 1 :
									ComprarCamisa_M(  opCamisa_M,	camisaM_S , camisaM_M, camisaM_L);
								
					
								
							
							break;
							
							case 2:
							break;
							
							
							case 3:
								
								
								
							 break;
						
						
	      	
					
			    	 }
		          	} while(op_compra != 3);
		          	
		             break;
		             case 2 :
		           ;
		             
		            break;
		            
		    
			 
		 		
		 	       	case 3 :
		 	       		
		 	       		
		 
		 	       		
		 
		 	       		 mostrarinventario (x);
		  	system("cls");
             	    
						 
		 break;
		 
		 
		 	

	 case 4:
	  printf("usted a salido del programa de ventas");
						   exit (-1);
  				  
	              break;

            default:                          
              
                printf("Opcion invalida\n");
              
                break;
}

}
            }else    {//final de if else
	                 printf ("\n USTED NO ESTA AUTORIZADO PARA ENTRAR AL PROGRAMA DE VENTAS :D\n");
	                  intento++;
    	             getchar();
                      } 

         } while (intento < 3 && ingresa == 0);

     system("PAUSE");


    	return 0;
    }
    
