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





int comprar_Pantalon_M_14 (int pantalon_m_14 ,int Total_pantalon_m_14=0)  
{       	do{
						
		printf ("\nCUANTAS PANTALONES TALLA 14 DESEA COMPRAR ?\n");
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d ",RopaM_P.pantalonM_14 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_m_14);	
			              if(RopaM_P.pantalonM_14 != NULL) {  
		  if (pantalon_m_14 <=RopaM_P.pantalonM_14){
		  	
                         Total_pantalon_m_14 = pantalon_m_14*18;
                       
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
		  	
                         Total_pantalon_m_16 = pantalon_m_16*20;
                       
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
		  	
                         Total_pantalon_m_18 = pantalon_m_18*20;
                       
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
		  	
                         Total_pantalon_f_14 = pantalon_f_14*18;
                       
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
	      	           
							
	  	               	printf ("\nACTUALMENTE SE TIENEN ESTE NUMERO DE PANTALONES TALLA 14 %d ",RopaF_P.pantalonF_16 );
	                     printf ("\n");  
                         printf ("\n0)PRESIONE PARA SALIR : ");
					
			              scanf ("%d",&pantalon_f_16);	
			              if(RopaF_P.pantalonF_16 != NULL) {  
		  if (pantalon_f_16<=RopaF_P.pantalonF_16) {
		  	
                         Total_pantalon_f_16= pantalon_f_16*18  ;
                       
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
		  	
                         Total_pantalon_f_18= pantalon_f_18*20  ;
                       
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
		  	
                         Total_camisa_s = camisa_s*10;
                       
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
		  	
                         Total_camisa_m = camisa_m*10;
                       
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
		  	
                         Total_camisa_l = camisa_l*10;
                       
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
		  	
                         Total_camisa_s_F = camisa_s_F*10;
                       
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
		  	
                         Total_camisa_m_F = camisa_m_F*10;
                       
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
		  	
                         Total_camisa_l_F = camisa_l_F*10;
                       
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


menu_principal(int op_menuprinsipal=0 ,int camisa_s=0 ,int Total_camisa_s=0 , int op_comprar =0 , int op_comprar_camisas_Masculinas =0 , int camisa_m = 0 ,int Total_camisa_m=0 , int camisa_m_l=0 , int Total_camisa_l=0,    int op_comprar_camisas_Femeninas =0, int camisa_s_F=-0 ,int Total_camisa_s_F=0  ,int camisa_m_F = 0 ,int Total_camisa_m_F=0 , int camisa_l_F =0 ,int Total_camisa_l_F=0 ,int op_comprar_pantalon_M=0 , int pantalon_m_14=0 ,int Total_pantalon_m_14=0, int pantalon_m_16=0 ,int Total_pantalon_m_16=0, int pantalon_m_18=0 ,int Total_pantalon_m_18=0 ,int op_comprar_pantalon_F =0 , int pantalon_f_14=0 ,int Total_pantalon_f_14=0, int pantalon_F_16=0 ,int Total_pantalon_F_16=0 , int pantalon_f_18 =0, int Total_pantalon_f_18=0)
	{
    	 do {
    		printf ("\nMENU PRINSIPAL");
     	 
	       	printf("\n1) comprar un producto\n");
	       	
            printf("\n2) Buscar producto\n"); 
            
            printf("\n3) Lista de inventario \n");
            
            printf("\n4) salir\n");
            
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
     int	op_comprar_camisas_Masculinas =0;
    int     op_comprar_camisas_Femeninas = 0;
    int     op_comprar_pantalon_Masculino=0;
    int op_comprar_pantalon_F = 0;
    int pantalon_m_16 ;
	int Total_pantalon_m_16=0;
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
               printf ("\nMENU DE OPERACIONES\n");

             printf("\n1) MENU PRINCIPAL \n ");
             
			 printf("\n2) MOSTRAR EL MENU DE ARCHIVO   \n"); 
             
			 printf("\n3) MOSTRAR EL MENU DE AYUDA     \n");
             
			 printf("\n4) SALIR\n");
             
			 scanf("%d",&eleccion);
           system("cls");
             switch(eleccion){
			  
			 
             case 1 :
                
        menu_principal(op_menu_prinsipal ,   op_comprar =0 ,  op_comprar_camisas_Masculinas =0  );
			
			break;
		

			 case 2: 
			 break ;
			 
	

		 	       	case 3 :
		 	       	
		 	       		 mostrarinventario (x);
		  	system("cls");
             	    
						 
		 break;
		 
		 
		 	

	 case 4:
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
    
