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


struct ropaF
{

int camisaM_M;
int camisaM_L;
int camisaM_S ;

}RopaF ={20 ,20,20} ;



struct ropaM_Pantalones
{

int pantalonM_14;
int pantalonM_16;
int pantalonM_18 ;

}RopaM_P ={20 ,20 ,20} ;

struct ropaF_Pantalones
{

int pantalonF_14;
int pantalonF_16;
int pantalonF_18 ;

}RopaF_P ={20 ,20 ,20} ;


struct Precio_Camisa_M
{

int precioM_M;
int precioM_L;
int precioM_S ;

}Precio_Camisas_M ={10 ,10 ,10} ;























struct Precio_Camisa_F
{

int precioF_M;
int precioF_L;
int precioF_S ;

}Precio_Camisas_F ={10 ,10 ,10} ;



struct Precio_Pantalon_M
{

int precio_pantalon_14_M;
int precio_pantalon_16_M;
int precio_pantalon_18_M ;

}Precio_Pantalon_M ={18 ,20 ,20} ;



struct Precio_Pantalon_F
{

int precio_pantalon_14_F;
int precio_pantalon_16_F;
int precio_pantalon_18_F ;

}Precio_Pantalon_F ={18 ,20 ,20} ;






























int comprar_Pantalon_M_14 (int pantalon_m_14 ,int Total_pantalon_m_14=0)  
{       	do{
						
		printf ("\nCUANTAS PANTALONES TALLA 14 DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d ",RopaM_P.pantalonM_14 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_m_14);	
			              if(RopaM_P.pantalonM_14 != NULL) {  
		  if (pantalon_m_14 <=RopaM_P.pantalonM_14){
		  	
                         Total_pantalon_m_14 = pantalon_m_14*Precio_Pantalon_M.precio_pantalon_14_M;
                       
                         printf ("\nUSTED GASTO %d $" , Total_pantalon_m_14 );
                         printf ("\n");
                         
                         RopaM_P.pantalonM_14=RopaM_P.pantalonM_14  - pantalon_m_14;
                         
                         
                         
                          if (RopaM_P.pantalonM_14 <=0){
                         	printf ("\nPANTALONES TALLA 14 AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						   system ("pause");  
			          system("cls");
                      } while (pantalon_m_14  != 0);  
}



int comprar_Pantalon_M_16 (int pantalon_m_16 ,int Total_pantalon_m_16=0)  
{       	do{
						
		printf ("\nCUANTAS PANTALONES TALLA 16 DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 16 %d ",RopaM_P.pantalonM_16 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_m_16);	
			              if(RopaM_P.pantalonM_16 != NULL) {  
		  if (pantalon_m_16 <=RopaM_P.pantalonM_16){
		  	
                         Total_pantalon_m_16 = pantalon_m_16*Precio_Pantalon_M.precio_pantalon_16_M;
                       
                         printf ("\nUSTED GASTO %d $" , Total_pantalon_m_16 );
                         printf ("\n");
                         
                         RopaM_P.pantalonM_16=RopaM_P.pantalonM_16  - pantalon_m_16;
                         
                         
                         
                          if (RopaM_P.pantalonM_16 <=0){
                         	printf ("\nPANTALONES TALLA 16 AGOTADOS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						   system ("pause");  
			          system("cls");
                      } while (pantalon_m_16  != 0);  
}



int comprar_Pantalon_M_18 (int pantalon_m_18 ,int Total_pantalon_m_18=0)  
{       	do{
						
		printf ("\nCUANTAS PANTALONES TALLA 18 DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 18 %d ",RopaM_P.pantalonM_18 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_m_18);	
			              if(RopaM_P.pantalonM_18 != NULL) {  
		  if (pantalon_m_18 <=RopaM_P.pantalonM_18){
		  	
                         Total_pantalon_m_18 = pantalon_m_18*Precio_Pantalon_M.precio_pantalon_18_M;
                       
                         printf ("\nUSTED GASTO %d $" , Total_pantalon_m_18 );
                         printf ("\n");
                         
                         RopaM_P.pantalonM_18=RopaM_P.pantalonM_18  - pantalon_m_18;
                         
                         
                         
                          if (RopaM_P.pantalonM_18 <=0){
                         	printf ("\nPANTALONES TALLA 18 AGOTADOS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						   system ("pause");  
			          system("cls");
                      } while (pantalon_m_18  != 0);  
}





int comprar_Pantalon_F_14 (int pantalon_f_14 ,int Total_pantalon_f_14=0)  
{       	do{
						
		printf ("\nCUANTAS PANTALONES TALLA 14 DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d ",RopaF_P.pantalonF_14 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_f_14);	
			              if(RopaF_P.pantalonF_14 != NULL) {  
		  if (pantalon_f_14 <=RopaF_P.pantalonF_14){
		  	
                         Total_pantalon_f_14 = pantalon_f_14*Precio_Pantalon_F.precio_pantalon_14_F;
                       
                         printf ("\nUSTED GASTO %d $" , Total_pantalon_f_14 );
                         printf ("\n");
                         
                         RopaF_P.pantalonF_14=RopaF_P.pantalonF_14  - pantalon_f_14;
                         
                         
                         
                          if (RopaF_P.pantalonF_14 <=0){
                         	printf ("\nPANTALONES TALLA 14 AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						   system ("pause");  
			          system("cls");
                      } while (pantalon_f_14  != 0);  
}

int comprar_Pantalon_F_16 (int pantalon_f_16 ,int Total_pantalon_f_16=0)  
{       	do{
						
		printf ("\nCUANTAS PANTALONES TALLA 16 DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 16 %d ",RopaF_P.pantalonF_16 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_f_16);	
			              if(RopaF_P.pantalonF_16 != NULL) {  
		  if (pantalon_f_16<=RopaF_P.pantalonF_16) {
		  	
                         Total_pantalon_f_16= pantalon_f_16*Precio_Pantalon_F.precio_pantalon_16_F ;
                       
                         printf ("\nUSTED GASTO %d $" , Total_pantalon_f_16 );
                         printf ("\n");
                         
                         RopaF_P.pantalonF_16=RopaF_P.pantalonF_16  - pantalon_f_16;
                         
                         
                         
                          if (RopaF_P.pantalonF_16 <=0){
                         	printf ("\nPANTALONES TALLA 14 AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						   system ("pause");  
			          system("cls");
                      } while (pantalon_f_16  != 0);  
}

int comprar_Pantalon_F_18 (int pantalon_f_18 ,int Total_pantalon_f_18=0)
{       	do{
						
		printf ("\nCUANTAS PANTALONES TALLA 18 DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 18 %d ",RopaF_P.pantalonF_18 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_f_18);	
			              if(RopaF_P.pantalonF_18 != NULL) {  
		  if (pantalon_f_18<=RopaF_P.pantalonF_18) {
		  	
                         Total_pantalon_f_18= pantalon_f_18* Precio_Pantalon_F.precio_pantalon_18_F  ;
                       
                         printf ("\nUSTED GASTO %d $" , Total_pantalon_f_18 );
                         printf ("\n");
                         
                         RopaF_P.pantalonF_18=RopaF_P.pantalonF_18  - pantalon_f_18;
                         
                         
                         
                          if (RopaF_P.pantalonF_18 <=0){
                         	printf ("\nPANTALONES TALLA 14 AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						   system ("pause");  
			          system("cls");
                      } while (pantalon_f_18  != 0);  
}










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
    

int comprar_CamisaS (int camisa_s ,int Total_camisa_s=0)  
{       	do{
						
		printf ("\nCUANTAS CAMISAS TALLA S DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaM.camisaM_S );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&camisa_s);	
			              if(RopaM.camisaM_S != NULL) {  
		  if (camisa_s <=RopaM.camisaM_S){
		  	
                         Total_camisa_s = camisa_s*Precio_Camisas_M.precioM_S;
                       
                         printf ("\nUSTED GASTO %d $" , Total_camisa_s);
                         printf ("\n");
                         
                         RopaM.camisaM_S =RopaM.camisaM_S  - camisa_s;
                         
                         
                         
                          if (RopaM.camisaM_S <=0){
                         	printf ("\nCAMISAS TALLA S AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						   system ("pause");  
			          system("cls");
                      } while (camisa_s != 0);  
}


int comprar_CamisaM (int camisa_m = 0 ,int Total_camisa_m=0 )
 
{       	do{
						
		printf ("\nCUANTAS CAMISAS TALLA M DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaM.camisaM_M );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&camisa_m);
						  	
			              if(RopaM.camisaM_M != NULL) {
						    
		                 if (camisa_m <=RopaM.camisaM_M){
		  	
                         Total_camisa_m = camisa_m * Precio_Camisas_M.precioM_M;
                       
                         printf ("\nUSTED GASTO %d $" , Total_camisa_m);
                         printf ("\n");
                         
                         RopaM.camisaM_M =RopaM.camisaM_M - camisa_m;
                         
                         
                         
                          if (RopaM.camisaM_M <=0){
                         	printf ("\nCAMISAS TALLA S AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						
								
						 }  
				
			          system ("pause");  
                       system("cls");
                      
                      } while (camisa_m!= 0);
					
}







int comprar_CamisaL (int camisa_l= 0 ,int Total_camisa_l=0 )
 
{       	do{
						
		printf ("\nCUANTAS CAMISAS TALLA L DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaM.camisaM_L );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&camisa_l);
						  	
			              if(RopaM.camisaM_M != NULL) {
						    
		                 if (camisa_l <=RopaM.camisaM_L){
		  	
                         Total_camisa_l = camisa_l*Precio_Camisas_M.precioM_L;
                       
                         printf ("\nUSTED GASTO %d $" , Total_camisa_l);
                         printf ("\n");
                         
                         RopaM.camisaM_L =RopaM.camisaM_L - camisa_l;
                         
                         
                         
                          if (RopaM.camisaM_L <=0){
                         	printf ("\nCAMISAS TALLA S AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						
								
						 }  
				
			          system ("pause");  
                       system("cls");
                      
                      } while (camisa_l != 0);
					
}




int comprar_CamisaSf (int camisa_s_F ,int Total_camisa_s_F=0)  
{       
 	do{
						
		printf ("\nCUANTAS CAMISAS FEMENINAS TALLA S DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaF.camisaM_S );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&camisa_s_F);	
			              if(RopaM.camisaM_S != NULL) {  
		  if (camisa_s_F <=RopaF.camisaM_S){
		  	
                         Total_camisa_s_F = camisa_s_F* Precio_Camisas_F.precioF_S;
                       
                         printf ("\nUSTED GASTO %d $" , Total_camisa_s_F);
                         printf ("\n");
                         
                         RopaF.camisaM_S =RopaF.camisaM_S  - camisa_s_F;
                         
                         
                         
                          if (RopaF.camisaM_S <=0){
                         	printf ("\nCAMISAS TALLA S AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						 
						 
						   system ("pause");  
			        system("cls");
        
		              } while (camisa_s_F != 0);  

              
}

int comprar_Camisa_m_F (int camisa_m_F ,int Total_camisa_m_F=0)  
{       
 	do{
						
		printf ("\nCUANTAS CAMISAS FEMENINAS TALLA M DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaF.camisaM_M );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&camisa_m_F);	
			              if(RopaF.camisaM_M != NULL) {  
		  if (camisa_m_F <=RopaF.camisaM_M){
		  	
                         Total_camisa_m_F = camisa_m_F*Precio_Camisas_F.precioF_M;
                       
                         printf ("\nUSTED GASTO %d $" , Total_camisa_m_F);
                         printf ("\n");
                         
                         RopaF.camisaM_M =RopaF.camisaM_M  - camisa_m_F;
                         
                         
                         
                          if (RopaF.camisaM_M <=0){
                         	printf ("\nCAMISAS TALLA S AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						 
						 
						   system ("pause");  
			        system("cls");
        
		              } while (camisa_m_F != 0);  

              
}

int comprar_Camisa_l_F (int camisa_l_F ,int Total_camisa_l_F=0)  
{       
 	do{
						
		printf ("\nCUANTAS CAMISAS FEMENINAS TALLA L DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaF.camisaM_L );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&camisa_l_F);	
			              if(RopaF.camisaM_M != NULL) {  
		  if (camisa_l_F <=RopaF.camisaM_L){
		  	
                         Total_camisa_l_F = camisa_l_F*Precio_Camisas_F.precioF_L;
                       
                         printf ("\nUSTED GASTO %d $" , Total_camisa_l_F);
                         printf ("\n");
                         
                         RopaF.camisaM_L =RopaF.camisaM_L  - camisa_l_F;
                         
                         
                         
                          if (RopaF.camisaM_L <=0){
                         	printf ("\nCAMISAS TALLA S AGOTADAS\n");
                        
                         }
                         
                         
                            } else{
                     	printf ("\nCANTIDAD NO VALIDA\n");
					 }
						} else	{
						 	printf ("\n NO SE A PODIDO REALIZAR LA COMPRA \n");
						 }
						 
						 
						   system ("pause");  
			        system("cls");
        
		              } while (camisa_l_F != 0);         
}



void agregar_productos(int op_agregar_productos , int agg_c_m_s, int  agg_c_m_m ,int  agg_c_m_l , int agg_c_f_s , int agg_c_f_m , int agg_c_f_l ,int agg_pantalos_m_14, int agg_pantalos_m_16 , int agg_pantalos_m_18, int agg_p_14_f , int agg_p_16_f , int agg_p_18_f  , int agregar_camisas_m  )
{
	
	
	
		do{
				
    			
    		 printf ("\t A CUAL PRODUCTO QUIERE USTED AGREGARLE MAS CANTIDAD \t");
    
			 printf ("\n1) CAMISAS MASCULINAS TALLA S\n");
			 printf ("\n2) CAMISAS MASCULINAS TALLA M\n");
			 printf ("\n3) CAMISAS MASCULINAS TALLA L\n");
			 printf ("\n4) PANTALON MASCULINO TALLA 14\n");
			 printf ("\n5) PANTALON MASCULINO TALLA 16\n");
			 printf ("\n6) PANTALON MASCULINO TALLA 18\n");
		     printf ("\n7)CAMISAS FEMININAS TALLA S\n");
			 printf ("\n8)CAMISAS FEMENINAS TALLA M\n");
			 printf ("\n9) CAMISAS FEMENINAS TALL  L\n");
			 printf ("\n10)PANTALON FEMENINO TALLA 14\n");
			 printf ("\n11)PANTALON FEMENINO TALLA 16\n");
			 printf ("\n12) PANTALON FEMENINO TALLA 18\n");
			 printf ("\n13) VOLVER AL MENU DE OPERACIONES\n");
			 system ("cls");
			 scanf ("%d",&op_agregar_productos);
			 system ("cls");
			 
			 switch (op_agregar_productos)
			 {
			 	
			 	
			 		
			 	case 1 :
			 	
					 do{
					 
					
					 
					 
			 		printf ("\n CUANTAS CAMISAS MASCULINAS TALLA S DESEA AGREGAR ");
			 			printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d \n ",RopaM.camisaM_S );
			 		scanf ("%d", &agg_c_m_s);
			 		 			    	
	
			 		
			 		 	
			 		 	
			 		RopaM.camisaM_S = RopaM.camisaM_S + agg_c_m_s;
			 		
			 		
			 		
			 		
			 
			 		 
			        system("cls");

			 }while (agg_c_m_s != 0 );
			 		break;
					 
			 		
			 			
			 			
			 	case 2 :
			 		do {
				
			 			printf ("\n CUANTAS CAMISAS MASCULINAS TALLA M DESEA AGREGAR\n ");
			 		   
						  
				
					
						printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d \n ",RopaM.camisaM_M );
                     	 scanf ("%d", &agg_c_m_m);		 
			 
			 	
			 	   	RopaM.camisaM_M = RopaM.camisaM_M + agg_c_m_m;
			 	
			 	
			 		}while (agg_c_m_m != 0);
			 	
				 	break;
			 		
			 			
			 	case 3 :
			 		do{
					 
			 			printf ("\n CUANTAS CAMISAS MASCULINAS TALLA L DESEA AGREGAR \n ");
			 		
					 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaM.camisaM_L );
			 	      scanf ("%d", &agg_c_m_l);
			 	      
			 	       	RopaM.camisaM_L = RopaM.camisaM_L + agg_c_m_l;
			 	      
			 	      
			 	      
				     }while (agg_c_m_l != 0);
				 	break;
			 			
			 	case 4 :
			 		do{
					 
			 		printf ("\nCUANTOS PANTALONES MASCULINOS TALLA 14 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d ",RopaM_P.pantalonM_14 );
			 		scanf ("%d", &agg_pantalos_m_14);
			 		RopaM_P.pantalonM_14 = RopaM_P.pantalonM_14  +agg_pantalos_m_14;
			 		
					 }while (agg_pantalos_m_14 !=0);
			 		break;
			 			
			 	case 5 :
			 		do {
					 
			 			printf ("\nCUANTOS PANTALONES MASCULINOS TALLA 16 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 16 %d ",RopaM_P.pantalonM_16 );
			 	scanf ("%d", &agg_pantalos_m_16);
			 	RopaM_P.pantalonM_16 = RopaM_P.pantalonM_16  +agg_pantalos_m_16;
			 	
			 	}while (agg_pantalos_m_16 !=0);
				 	break;
			 			
			 	case 6 :
			 		do{
					 
			 			printf ("\nCUANTOS PANTALONES MASCULINOS TALLA 18 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 18 %d ",RopaM_P.pantalonM_18 );
			 
			 	scanf ("%d", &agg_pantalos_m_18);
			 	
			 	
			 	RopaM_P.pantalonM_18 = RopaM_P.pantalonM_18  +agg_pantalos_m_18;
			 	
			 }while (agg_pantalos_m_18 !=0);
				 	break;
			 			
			 	case 7 :
			 		do{
					 
			 		printf ("CUANTAS CAMISAS FEMENINAS TALLA S DESEA AGREGAR\n ");
			 		printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA L %d ",RopaF.camisaM_S );
	                scanf ("%d", & agg_c_f_s);
			 		
			 		RopaF.camisaM_S =RopaF.camisaM_S + agg_c_f_s;
			 		
			 		
			 	}while (agg_c_f_s != 0 );
			 		break;
			 			
			 	case 8 :
			 		do{
					 
			 			printf ("CUANTAS CAMISAS FEMENINAS TALLA M DESEA AGREGAR");
			 		printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaF.camisaM_M );
	                  scanf ("%d", & agg_c_f_m );
			 		
			 		RopaF.camisaM_M =RopaF.camisaM_M + agg_c_f_m;
					  
					  
					  }while (agg_c_f_m != 0);   
			 		break;
			 			
			 	case 9 :
			 		do{
					 
			 			printf ("CUANTAS CAMISAS FEMENINAS TALLA L DESEA AGREGAR");
			 		printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaF.camisaM_L );
	               scanf ("%d", & agg_c_f_l);
			 		
			 		RopaF.camisaM_L =RopaF.camisaM_L + agg_c_f_l;
				   
				   
				   
				     }while (agg_c_f_l != 0);    
			 		break;
			 			
			 	case 10 :
			 		
			 	printf ("\nCUANTOS PANTALONES FEMENINOS TALLA 14 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d ",RopaF_P.pantalonF_14 );
			 	scanf ("%d",& agg_p_14_f );
			 		
			 		
			 		
			 		break;
			 			
			 	case 11 :
			 			printf ("\nCUANTOS PANTALONES FEMENINOS TALLA 16 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 16 %d ",RopaF_P.pantalonF_16);
			 	scanf ("%d",& agg_p_16_f );
			 		break;
			 			
			 	case 12 :
			 			printf ("\nCUANTOS PANTALONES FEMENINOS TALLA 18 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 18 %d ",RopaF_P.pantalonF_16 );
			 	scanf ("%d",& agg_p_18_f );
			 		break;
			 			
			 	case 13 :
			 		break;
	
			 }
	
			 
	  system("cls");
	
}while (op_agregar_productos != 13 );
	
	
	

	
	
}







void agregar_productos_masculinos( int agg_c_m_s, int  agg_c_m_m ,int  agg_c_m_l , int agg_pantalos_m_14, int agg_pantalos_m_16 , int agg_pantalos_m_18 , int opp_agregar_camisas_m   , int agregar_camisas_m   , int agregar_pantalones_m   ){
	
	do {
	
printf ("\n1 )  AGREGAR MAS CAMISAS MASCULINOS                       \n" );	
printf ("\n2 )  AGREGAR MAS PANTALONES MASCULINOS                    \n" );	
printf ("\n3 )  VOLVEL AL MENU PRINCIPAL                             \n ");	
scanf ("%d",& opp_agregar_camisas_m );
system ("cls");


switch (opp_agregar_camisas_m  ){
	
	case 1 :
		do {
		
		printf ("\n1)   CAMISAS MASCULINAS TALLA S   \n " );
		printf ("\n2)   CAMISAS MASCULINAS TALLA M   \n " );
		printf ("\n3)   CAMISAS MASCULINAS TALLA L   \n " );
		printf ("\n4)   SALIR   \n " );
		scanf ("%d" ,& agregar_camisas_m   );
		  system("cls");
			 	      
		switch (agregar_camisas_m  ){
			
			
	
		case 1 :
			
		
			
			
			do{
					 
					
					 
					 
			 		printf ("\n CUANTAS CAMISAS MASCULINAS TALLA S DESEA AGREGAR ");
			 			printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d \n ",RopaM.camisaM_S );
			 	    printf ( "\n PRESIONE 0 PARA SALIR \n");
				 	scanf ("%d", &agg_c_m_s);
			 		
			 			 system("cls");
			 		 			    	
	
			 		
			 		 	
			 		 	
			 		RopaM.camisaM_S = RopaM.camisaM_S + agg_c_m_s;
			 		
			 		
			 		
			 		
			 
			 		 
			    

			 }while (agg_c_m_s != 0 );
			     system("cls");
			break;
			
			
		case 2 :
			
				do {
				
			 			printf ("\n CUANTAS CAMISAS MASCULINAS TALLA M DESEA AGREGAR\n ");
			 		   
						  
				
					
						printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d \n ",RopaM.camisaM_M );
                     	printf ( "\n PRESIONE 0 PARA SALIR \n");
						  scanf ("%d", &agg_c_m_m);		 
			  system("cls");
			 	
			 	   	RopaM.camisaM_M = RopaM.camisaM_M + agg_c_m_m;
			 	
			 	
			 		}while (agg_c_m_m != 0);
			
			
			 system("cls");
	
		break;
		
		
		
		case 3:
			
			
				do{
					 
			 			printf ("\n CUANTAS CAMISAS MASCULINAS TALLA L DESEA AGREGAR \n ");
			 		
					 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaM.camisaM_L );
			 	        printf ( "\n PRESIONE 0 PARA SALIR \n");
					   scanf ("%d", &agg_c_m_l);
			 	      
			 	       	RopaM.camisaM_L = RopaM.camisaM_L + agg_c_m_l;
			 	       system("cls");
			 	      
			 	      
				     }while (agg_c_m_l != 0);
				      system("cls");
		break;
		
		
		case 4:
		break;	
		
	}
			
		}while (agregar_camisas_m != 4  );
		
		
			break;	
		
		
		
		
		
		case 2 :
			do{
			
			
		printf ("\n1)   PANTALONES MASCULINOS TALLA 14   \n " );
		printf ("\n2)   PANTALONES MASCULINOS TALLA 16   \n " );
		printf ("\n3)   PANTALONES MASCULINAS TALLA 18   \n " );
		printf ("\n4)   SALIR   \n " );
		scanf ("%d" ,& agregar_pantalones_m   );
		  system("cls");
		  
		 switch ( agregar_pantalones_m ){
		 	
		 	case 1 :
		 		
		 	
		 	do{
					 
			 		printf ("\nCUANTOS PANTALONES MASCULINOS TALLA 14 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d \n ",RopaM_P.pantalonM_14 );
			 	  
				 	scanf ("%d", &agg_pantalos_m_14);
			 		RopaM_P.pantalonM_14 = RopaM_P.pantalonM_14  +agg_pantalos_m_14;
			 		 system("cls");
					 }while (agg_pantalos_m_14 !=0);
					 
		  break;
		 case 2 :
		 		do{
					 
			 		printf ("\nCUANTOS PANTALONES MASCULINOS TALLA 16 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 16 %d \n ",RopaM_P.pantalonM_16 );
			 		
				 printf ( "\n PRESIONE 0 PARA SALIR \n");
					 scanf ("%d", &agg_pantalos_m_16);
			 	 
				 	RopaM_P.pantalonM_16= RopaM_P.pantalonM_16 +agg_pantalos_m_16;
			 			 system("cls");
					 }while (agg_pantalos_m_16 !=0);
		
		 	break;
		 	
		 case 3 :
		 		do{
					 
			 		printf ("\nCUANTOS PANTALONES MASCULINOS TALLA 18  DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 18 %d \n ",RopaM_P.pantalonM_18 );
			 	 printf ( "\n PRESIONE 0 PARA SALIR \n");
				 	scanf ("%d", &agg_pantalos_m_18) ;
				 	
			 		
			 	
			 		
			 		RopaM_P.pantalonM_18 = RopaM_P.pantalonM_18  +agg_pantalos_m_18;
			 			  system("cls");
					 }while (agg_pantalos_m_18 !=0);
				
		 break ;
		 
		 case 4 :
		 break;	
		 
		 		
		 } 
		  
	} while(agregar_pantalones_m  != 4); 
		  
		  
		  
		  
			break;
		
		
	
		
	system ("cls");
		break;
	
}








} while (opp_agregar_camisas_m !=3);
		
}
	
	
	
	
	
	
void agregar_productos_femeninos ( int  opp_agregar_productos_femeninos   ,int  agg_camisas_f  ,int   agg_c_f_s  , int agg_c_f_m    ,int agg_c_f_l  , int agregar_pantalones_f   , int agg_p_14_f , int agg_p_16_f , int agg_p_18_f ){
	
	
	do {
	
		
printf ("\n1 )  AGREGAR MAS CAMISAS FEMENINAS                      \n" );	
printf ("\n2 )  AGREGAR MAS PANTALONES FEMENINOS                   \n" );	
printf ("\n3 )  VOLVEL AL MENU PRINCIPAL                           \n ");	
scanf ("%d",& opp_agregar_productos_femeninos );
system ("cls");

switch (opp_agregar_productos_femeninos ){
	
	
	
	case 1 :
		do{
		
		printf ("A CUAL TALLA DE CAMISAS FEMENINAS DESEA AGREGAR");
       	printf ("\n1)   CAMISAS FEMENINAS TALLA S   \n " );
		printf ("\n2)   CAMISAS FEMENINAS TALLA M   \n " );
		printf ("\n3)   CAMISAS FEMENINAS TALLA L   \n " );
		printf ("\n4)   SALIR   \n " );
		scanf ("%d" ,&agg_camisas_f  );
		  system("cls");
		switch(agg_camisas_f) {
			
			case 1 :
				do{
					 
					
					 
					 
			 		printf ("\n CUANTAS CAMISAS FEMENINAS TALLA S DESEA AGREGAR ");
			 			printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d \n ",RopaF.camisaM_S );
			 	    printf ( "\n PRESIONE 0 PARA SALIR \n");
				 	scanf ("%d", &agg_c_f_s);
			 		
			 			 system("cls");
			 		 			    	
	 		
			 		 			 		 	
			 		RopaF.camisaM_S =  RopaF.camisaM_S + agg_c_f_s;
			 		
		

			 }while (agg_c_f_s != 0 );
			     system("cls");	
			
				break;
				
			case 2 :
			
			
			
			
			
				do {
				
			 			printf ("\n CUANTAS CAMISAS FEMENINAS TALLA M DESEA AGREGAR\n ");
			 		
						printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA M %d \n ",RopaF.camisaM_M);
                     	printf ( "\n PRESIONE 0 PARA SALIR \n");
						  scanf ("%d", &agg_c_f_m);		 
			  system("cls");
			 	
			 	   	RopaF.camisaM_M = RopaF.camisaM_M  + agg_c_f_m;
			 	
			 	
			 		}while (agg_c_f_m != 0);
			
			
			 system("cls");
			
			
			break ;	
			
			
			case 3:
				
				
			
				do{
					 
			 			printf ("\n CUANTAS CAMISAS FEMENIANAS TALLA L DESEA AGREGAR \n ");
			 		
					 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE CAMISAS TALLA S %d ",RopaF.camisaM_L );
			 	        printf ( "\n PRESIONE 0 PARA SALIR \n");
					   scanf ("%d", &agg_c_f_l);
			 	      
			 	       RopaF.camisaM_L = RopaF.camisaM_L + agg_c_f_l;
			 	       system("cls");
			 	      
			 	      
				     }while (agg_c_f_l != 0);
				      system("cls");
				
				
				
				
				
				break;
	
			
		}

		
	}while (agg_camisas_f !=4);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		break ;
	
	case 2 :
		
		
			do{
			
			
		printf ("\n1)   PANTALONES MASCULINOS TALLA 14   \n " );
		printf ("\n2)   PANTALONES MASCULINOS TALLA 16   \n " );
		printf ("\n3)   PANTALONES MASCULINAS TALLA 18   \n " );
		printf ("\n4)   SALIR   \n " );
		scanf ("%d" ,& agregar_pantalones_f   );
		  system("cls");
		  
                switch (agregar_pantalones_f ){
				
		  			
			 	case 1 :
			 		do{
					 
			 		
			 	printf ("\nCUANTOS PANTALONES FEMENINOS TALLA 14 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d \n ",RopaF_P.pantalonF_14 );
			    printf ("\n PRECIONE 0 PARA SALIR");
			 	scanf ("%d",& agg_p_14_f );
			 	
			 	RopaF_P.pantalonF_14 = RopaF_P.pantalonF_14 +agg_p_14_f;
			 	system("cls");
			 	
			 	
			 	
			 	
			 	
			 	
			 	} while (agg_p_14_f !=0);
			 		
			 		
			 		break;
			 			
			 	case 2 : 
			 	do{
				 
			 	
			 			printf ("\nCUANTOS PANTALONES FEMENINOS TALLA 16 DE SEA AGREGAR\n");
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 16 %d\n ",RopaF_P.pantalonF_16);
			 	 printf ("\n PRECIONE 0 PARA SALIR");
				 scanf ("%d",& agg_p_16_f );
			 		
			 		
			 		
			 		
			 		
			 	RopaF_P.pantalonF_16 = RopaF_P.pantalonF_16 +agg_p_16_f;
			 	
			 		system("cls");
			 		
			 		}while (agg_p_16_f!=0);
			 		break;
			 	case 3 :
			 		
			 		do{
					 
			 			printf ("\nCUANTOS PANTALONES FEMENINOS TALLA 18 DE SEA AGREGAR\n");
			 			
			 	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 18 %d \n ",RopaF_P.pantalonF_18 );
			    printf ("\n PRECIONE 0 PARA SALIR");
			    
			 	scanf ("%d",& agg_p_18_f );
			 	
			 	
			 	RopaF_P.pantalonF_18 = RopaF_P.pantalonF_18+  agg_p_18_f;
			 	
			 	
			 	system("cls");
			 	
			 	
			 } while (agg_p_18_f !=0);
			 		break;
		  
		  
	}
		  
		  
		  
	}	while(  agregar_pantalones_f  !=4   );
		
		
	
		
		
		
		
		
		
		
		
		
		
		break;
	
	
	
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}while(opp_agregar_productos_femeninos != 3);

	
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	











menu_principal(int op_menuprinsipal=0 ,int camisa_s=0 ,int Total_camisa_s=0 , int op_comprar =0 , int op_comprar_camisas_Masculinas =0 , int camisa_m = 0 ,int Total_camisa_m=0 , int camisa_m_l=0 , int Total_camisa_l=0,    int op_comprar_camisas_Femeninas =0, int camisa_s_F=-0 ,int Total_camisa_s_F=0  ,int camisa_m_F = 0 ,int Total_camisa_m_F=0 , int camisa_l_F =0 ,int Total_camisa_l_F=0 ,int op_comprar_pantalon_M=0 , int pantalon_m_14=0 ,int Total_pantalon_m_14=0, int pantalon_m_16=0 ,int Total_pantalon_m_16=0, int pantalon_m_18=0 ,int Total_pantalon_m_18=0 ,int op_comprar_pantalon_F =0 , int pantalon_f_14=0 ,int Total_pantalon_f_14=0, int pantalon_F_16=0 ,int Total_pantalon_F_16=0 , int pantalon_f_18 =0, int Total_pantalon_f_18=0 , int x =0 , int op_agregar_productos =0 , int agg_c_m_s =0,int agg_c_m_m =0 , int  agg_c_m_l =0 , int agg_c_f_s =0 , int agg_c_f_m =0 ,  int agg_c_f_l =0 , int agg_pantalos_m_14 = 0, int agg_pantalos_m_16 = 0 , int agg_pantalos_m_18 = 0  , int opp_agg =0 , int opp_agregar_camisas_m =0 , int agregar_pantalones_m  =0  , int  agregar_camisas_m =0, int  opp_agregar_productos_femeninos =0  , int agg_camisas_f  =0 ,  int agregar_pantalones_f =0 ,  int agg_p_14_f =0 , int agg_p_16_f=0 , int agg_p_18_f=0   )   
{
        
		 do {
    		printf ("\nMENU PRINSIPAL");
     	 
	       	printf("\n1) COMPRAR UN PRODUCTO\n");
	       	
            printf("\n2) AGREGAR MAS PRODUCTOS\n"); 
            
            printf("\n3) SALIDA DE INVENTARIO  \n");
            
            printf("\n4) SALIR DEL MENU PRINCIPAL\n");
            
            scanf ("%d", &op_menuprinsipal);

		  
			 system("cls");
		
    	switch (op_menuprinsipal){
    	
			case 1 : //comprar ropa
			
			  
			  printf ("\nQUE DESEA COMPRAR HOY\n");
			 printf ("\n");
					 printf ("\n 1) CAMISAS MASCULINAS   ");
					 printf ("\n");
             	     printf ("\n 2) CAMISAS FEMENINAS    ");
             	     printf ("\n");
             	     printf ("\n 3) PANTALONES MASCULINOS  ");
             	       printf ("\n");
             	     printf ("\n 4) PANTALONES FEMENINOS ");
             	     printf ("\n");
             	     printf ("\n 5) VOLVER AL MENU PRINSIPAL ");
             	      
			  scanf ("%d",&op_comprar);
			  
			  system("cls");
			   	
			  switch (op_comprar){
			  	
			
			  	 
			  	
			  	case 1 :
			  		
			    do{
			  		
			  		printf ("QUE TALLA DE CAMISAS MASCULINAS DESEA COMPRAR");
			     	printf ("\n");
				  	printf ("\n1)CAMISAS TALLA S  ++++10$++++ ");
			  		printf ("\n");
			  		printf ("\n2)CAMISAS TALLA M  ++++10$++++ ");
			  		printf ("\n");
			  		printf ("\n3)CAMISAS TALLA L  ++++10$++++");
			  		printf ("\n");
			  		printf ("\n4) SALIR DE AQUI   ");
			  		scanf ("%d", &op_comprar_camisas_Masculinas);
			  		 system("cls");
			
				  
					  switch (op_comprar_camisas_Masculinas){
					  	
					  	  	do{
			  		
					  
					  	case 1 :
					  	
					   comprar_CamisaS (camisa_s ,Total_camisa_s);
			  		 
					  	break;
					  	
					 
				          
					  	
					  	case 2:
					  		
					  comprar_CamisaM ( camisa_m = 0 ,Total_camisa_m=0 ) ;
					  		
					  	
					  		
					  		
			             break;
					  		
					  	case 3:
					  		
					  		 comprar_CamisaL ( camisa_m_l ,Total_camisa_l );
					  		
					  		
					  		break;
					  		
					  		
				
					  }while (op_comprar_camisas_Masculinas != 4);
					  
					  }
					  break ;
					  
					  case 2 :
					  do{
					  		
			  		printf ("QUE TALLA DE CAMISAS FEMENINAS DESEA COMPRAR");
			     	printf ("\n");
				  	printf ("\n1)CAMISAS FEMENINAS  TALLA S ++++10$++++");
			  		printf ("\n");
			  		printf ("\n2)CAMISAS FEMENINAS TALLA M  ++++10$++++");
			  		printf ("\n");
			  		printf ("\n3)CAMISAS FEMENINAS  TALLA L ++++10$++++");
			  		printf ("\n");
			  		printf ("\n4) SALIR DE AQUI   ");
			  		scanf ("%d", &op_comprar_camisas_Femeninas);
			  		 system("cls");
			
					  	
						  
					  	switch (op_comprar_camisas_Femeninas){
						  
					  	
					  	case 1 :
					  	 comprar_CamisaSf (camisa_s_F ,Total_camisa_s_F)  ;
					     break;
					     
					     case 2 :
					     	comprar_Camisa_m_F ( camisa_m_F ,Total_camisa_m_F=0) ;
					     	break ;
					     	
					     	case 3 :
					     		comprar_Camisa_l_F (camisa_l_F , Total_camisa_l_F=0);
					    
					}
					} while (op_comprar_camisas_Femeninas != 4);
						
						 	break ;	
					     case 3 :
					     	
					     	
					      do{	
					     	
					     		
			  		printf ("QUE TALLA DE PANTALON MASCULINO DESEA COMPRAR");
			     	printf ("\n");
				  	printf ("\n1)PANTALON TALLA 14 ++++18$++++ ");
			  		printf ("\n");
			  		printf ("\n2)PANTALON TALLA 16 ++++20$++++");
			  		printf ("\n");
			  		printf ("\n3)PANTALON TALLA 18 ++++20$++++");
			  		printf ("\n");
			  		printf ("\n4) SALIR DE AQUI   ");
			  		scanf ("%d", &op_comprar_pantalon_M);
			  		 system("cls");
			
					     	
					     switch (op_comprar_pantalon_M){
					     	case 1 :
					     	
					     		comprar_Pantalon_M_14 (pantalon_m_14 , Total_pantalon_m_14=0);  
					     		
					     		break;
					     		
					     	case 2 :
					     		 comprar_Pantalon_M_16 ( pantalon_m_16 , Total_pantalon_m_16=0)  ;
							 break;
							 
							case 3:
								comprar_Pantalon_M_18 ( pantalon_m_18 , Total_pantalon_m_18=0); 
							break ;	
						 }	
					     
					  	
					     } while (op_comprar_pantalon_M != 4);	
					     	break;
					     	
					   case 4 :
					   do {
					   
					   	printf ("QUE TALLA DE PANTALON FEMENINO DESEA COMPRAR");
			     	printf ("\n");
				  	printf ("\n1)PANTALON TALLA 14 ++++14$++++ ");
			  		printf ("\n");
			  		printf ("\n2)PANTALON TALLA 16 ++++20$++++");
			  		printf ("\n");
			  		printf ("\n3)PANTALON TALLA 18 ++++20$++++");
			  		printf ("\n");
			  		printf ("\n4) SALIR DE AQUI   ");
			  		scanf ("%d", &op_comprar_pantalon_F);
			  		 system("cls");
			
					     	
					     switch (op_comprar_pantalon_F){
					   
					   case 1 :
					   	comprar_Pantalon_F_14 ( pantalon_f_14 , Total_pantalon_f_14=0);
      
					   	break;
					   	
				 	case 2 :
				 		comprar_Pantalon_F_16 ( pantalon_F_16 , Total_pantalon_F_16=0)  ;

			 		break;
					   		
					case 3:
					  	comprar_Pantalon_F_18 ( pantalon_f_18 , Total_pantalon_f_18=0);
					 break;
					
					   
					   
					   
					   
					   
					   
				}
					   
					   
					   
					   
					    } while (op_comprar_pantalon_F!= 4);
					   break;  	
					     	
					     	
					     	
					
					  
					   system("cls");
				}while (op_comprar != 5 );
			   break;
			  	}  
			  		 system("cls");
			  		break;
			  		
		
			  
    		comprar_CamisaS ( camisa_s=0 , Total_camisa_s=0 ); 
			break;
    		
    		
    		case 2 :                  
			do  {
			
    			// AGREGAR MAS PRODUCTOS
    		 printf("A CUAL PRODUCTO DESEA AGREGARLE\n ");
    		 
    		 printf("\n1) ROPA MASCULINA               \n");
    		 printf("\n2) ROPA FEMENINA                \n");	
			 printf("\n3) VOLVER AL MENU PRINCIPAL     \n"); 
			 scanf ("%d", &opp_agg );	 
				 system ("cls");
			  switch (opp_agg){
			  	
			  	
			  	
			  	
			
			  	
			  	case 1 :
			  		
			  	  agregar_productos_masculinos(  agg_c_m_s, agg_c_m_m ,  agg_c_m_l ,  agg_pantalos_m_14,  agg_pantalos_m_16 ,  agg_pantalos_m_18  ,opp_agregar_camisas_m ,  agregar_camisas_m  ,  agregar_pantalones_m  );
	
			  	
				  
				  
				  
				    	 system ("cls");
				  
				  
				  	break;
			  		
		
			  		
			  	case 2 :
			  		

                 agregar_productos_femeninos (opp_agregar_productos_femeninos   ,  agg_camisas_f  ,  agg_c_f_s  ,  agg_c_f_m    ,  agg_c_f_l, agregar_pantalones_f,    agg_p_14_f ,  agg_p_16_f ,  agg_p_18_f   );
	



				  break;	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  	
			  }
			 
			
    			
    	
			}	while (opp_agg != 3);	
			 system ("cls");
    			break;
    		
    		
    	  	case 3 :
    		
    			break;
    			
    			case 4 :
    				break ;
    	
			
			default :
			break;	
    		
    		
    		
    		
    		
    }
    		
		}while (op_menuprinsipal != 4);	
	}






void Menu_Ayuda (int op_menu_de_ayuda){
	
	                     
						 
						 
						 do{         //menu de ayuda
		 	       		 printf ("BIENVENIDO AL MENU DE AYUDA\n");
		 	       		 printf ("\n\n");
		 	       		 printf ("\n1) VISUALIZAR EL NOMBRE DEL SISTEMA\n");
		 	       		 printf ("\n2) VISUALIZAR LOS NOMBRES DE LOS ESTUDIANTES \n");
		 	       		 printf ("\n3) VISUALIZAR LOS NUMEROS DE CEDULA DE LOS ESTUDIANTES \n");
		 	           	 printf ("\n4) VISUALIZAR EL AÑO \n");
					   	printf ("\n5) VISUALIZAR EL SEMESTRE \n");
					   	printf ("\n6) VOLVER AL MENU PRINCIPAL \n");
				
					   	scanf("%d",&op_menu_de_ayuda);
					   		 system("cls");
	                    switch (op_menu_de_ayuda){
	               
	                    	
	                    	case 1:
	                    		printf("\n\nEL NOMBRE DEL SISTEMA ES:#####FFMMA#####\n");
	                    		
	                    		system ("pause");
	                    		  system("cls");  
	                    		
	                    		break;
	                    		
	                    
							case 2:
							printf("\n\nLOS NOMBRES DE LOS ESTUDIANTES SON:\n");
							printf("\nFRANKLIN CHARAIMA\n");
						    printf("\nMAURICIO ARISMENDI\n");
						    printf("\nARNALDO PERDOMO\n");
						    printf("\nFRANCO TOBON\n");
						    printf("\nMIGUEL PEÑA\n");
							
	                    		system ("pause");
	                    		  system("cls");  
							break;
						
							case 3 :
						    printf("\n\nLOS NUMEROS DE CEDULA DE LOS ESTUDIANTES SON:\n");
						    printf("\n30791551\n");
						    printf("\n31781717\n");
						    printf("\n30820542\n");
						    printf("\n30943420\n");
						    printf("\n30735681\n");
						    system ("pause");
	                    	system("cls");  
							break;
						
							case 4 :
							printf("\n\n AñO 2022\n");
							system ("pause");
	                    	system("cls");  
							break;
						
							case 5:
							printf("\n\nINGENIERIA INFORMATICA SEMESTRE II\n");
							system ("pause");
	                    	system("cls");  
								break;
						
							case 6:
								
							break;	
	                    	
	                    	
	                    	
	                    	
	                    	
			default :
				printf("\nLA OPCION ELEGIDA NO ES VALIDA");
			break;	
    		
	                    	
	                    	
	                    	
	                    	
	                    	
	                    	
	                    	
	                    	 	
	                    	
						} 
	                  
	                    system("cls");   
	    
}while (op_menu_de_ayuda != 6);
}


void menu_archivo  ( int op_menu_archivo  , int x){
	do {
	
	
printf ("BIENVENIDO AL MENU DE ARCHIVO \n");
	
printf (" \n1) VISUALIZAR EL USUARIO   \n");

printf (" \n2) VISUALIZAR LOS CLIENTES   \n");
	
printf (" \n3) VISUALIZAR EL INVENTARIO   \n");	

printf (" \n4) CAMBIO DE CLAVE   \n");	

printf (" \n5) CREAR UN NUEVO USUARIO   \n");
	
printf (" \n6) CAMBIAR DE USUARIO   \n");

printf (" \n7) CERRAR SECION   \n");

printf (" \n8) VOLVER AL MENU PRINCIPAL   \n");

scanf ("%d", &op_menu_archivo);	
	
	switch (op_menu_archivo){
		
		
	case 1:
		// aqui va ver los usuarios
	break;	
		
			
	case 2:
		  // aqui va visualizar los clientes
	break;	
		
		
			
	case 3:
	mostrarinventario ( x);	// aqui va todo lo relacionado con el inventario
	break;	
		
	
				
	case 4:
			// aqui va el cambio de clave
		
	break;	
		
		
		
				
	case 5:
		// crear un nuevo usuario
	break;	
		
		
		
				
	case 6:
		 // cambiar de usuario
	break;	
		
		
		
				
	case 7:
		 // cerrar secion
	break;	
		
		
		
				
	case 8:
		
	break;	
	
	}
	
	

	
	  system("cls"); 
	
}while (op_menu_archivo != 8);
	
}






















int ComprarCamisa_M (int opCamisa_M ,	int camisa_s ,int camisa_M , int camisa_L ,	int  Total_camisa_s  ,int comprar_CamisaM , int camisa_m  , int Total_camisa_m )
{	
	

	
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
		do{
	 system ("cls");
	switch (opCamisa_M) 
	{        

	
             
				
	        case 1 : 
		       comprar_CamisaS ( camisa_s , Total_camisa_s=0 );
	          
  		 	break;
           
		  	case 2 :
		 	printf ("CUANTAS CAMISAS TALLA M DESEA COMPRA ?");
		
	  	 	
		 	break;
		
	 		case 3 :
	 		printf ("CUANTAS CAMISAS TALLA L DESEA COMPRA ?");
			
	  	  
	 		break;
		
	     	default :
		
            break;
           

	}	


	

	}while (opCamisa_M !=4);
}
int main ()
{
 	int op_menu_prinsipal;
 	int camisaM_S;
 	int camisaM_M;
 	int camisaM_L;
 	int camisa_m ;
     int  Total_camisa_m;
     int  camisa_l ;
   	int Total_camisa_l; 
     int  op_comprar;
     int camisa_m_F;
	 int Total_camisa_m_F=0;
	 int camisa_l_F ;
	 int Total_camisa_l_F=0;
   	camisaM_S=camisaM_S *10;
   	camisaM_M=camisaM_M *10; 
     camisaM_L=camisaM_L *10;
     int op_comprar_camisas_Masculinas =0;
    int  op_comprar_camisas_Femeninas = 0;
    int  op_comprar_pantalon_Masculino=0;
    int op_comprar_pantalon_F = 0;
    int pantalon_m_16 ;
	int Total_pantalon_m_16=0;
	int op_menu_de_ayuda =0 ;
    int	op_menu_archivo;
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
  
       	     printf ("\nBienvenido al programa de ventas   #####FFMMA#####");
 	         printf("\n");
	         printf ("\n%s " , &usuario);
	         printf("\n");
	         
	         
	         
	         
      while( eleccion!=6) {
               printf ("\nMENU DE OPERACIONES\n");

             printf("\n1) MENU PRINCIPAL \n ");
             
			 printf("\n2) MOSTRAR EL MENU DE ARCHIVO   \n"); 
			 
			  printf("\n3) MOSTRAR EL MENU DE MOVIMIENTOS  \n"); 
             
			 printf("\n4) MOSTRAR EL MENU DE AYUDA     \n");
             
			 printf("\n5) SALIR\n");
             
			 scanf("%d",&eleccion);
           system("cls");
             switch(eleccion){
			  
			 
             case 1 :
                
         menu_principal(op_menu_prinsipal ,   op_comprar =0 ,  op_comprar_camisas_Masculinas =0  );
			
			break;
		

			 case 2: 
			 
			 menu_archivo (op_menu_archivo , x);
			 
			 break ;
			 
	

		 	       	case 3 :
		 	       	   
		 	 	
		 	       	
		 	       		
		 	       		
		 	       		
		 	       	break;	
		 	       		
		 	       		
		  	system("cls");
             	    
						 
		 break;
		 
		 
		 	       	case 4 :
		 	       	   
		 	 	
		 	       		
		 	       		Menu_Ayuda ( op_menu_de_ayuda);
		 	       		
		 	       		
		 	       		
		 	       	break;	
		 	       		
		 	       		
		  	system("cls");
             	    
		 
		 
		 
		 
		 	

	 case 5:
	  printf("USTED A SALIDO DEL PROGRAMA DE VENTAS FFMMA");
						   exit (-1);
  				  
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
    
    
    
    
    
    
