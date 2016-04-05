//Arredondo Noyola Juan Carlos
//Piña Pacheco Eduardo
//Grupo 9

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define ELEMS 3
//Trabajamos con estructura
typedef struct producto
{
	char nombre[50];
	float precio[5];
	int cantidad[2000];
	int id;
}PRODUCTO;

typedef struct producto1
{
	char nombre[50];
	float precio[5];
	int cantidad[2000];
	int id;
}PRODUCTO1;

typedef struct producto2
{
	char nombre[50];
	float precio[5];
	int cantidad[2000];
	int id;
}PRODUCTO2;

typedef struct producto3
{
	char nombre[50];
	float precio[5];
	int cantidad[2000];
	int id;
}PRODUCTO3;
typedef struct producto4
{
	char nombre[50];
	float precio[5];
	int cantidad[2000];
	int id;
}PRODUCTO4;
int main()
{
PRODUCTO pro[ELEMS];
PRODUCTO1 pro1[ELEMS];
PRODUCTO2 pro2[ELEMS];
PRODUCTO2 pro3[ELEMS];
PRODUCTO2 pro4[ELEMS];//Con esto trabajaremos arrays de estructuras
int menu=1, opci=0, pos=0, key, count;
int opcion,opcion1,x=1,y=1;
while(x!=0)
	{
		printf("\t\t ---------------------------\n");
		printf("\t\t *****TIENDA APRUEBEME***** \n\t\t");
		printf(" ---------------------------\t\t\n");
    	printf(" 1 Inventario\n 2 Venta\n 3 Estado de resultados\n 4 Salir\t\n ");
    	scanf("%i",&opcion);

		switch(opcion)
		{
		case 1:
			printf("\t\n Elige departamento");
   			printf("\n 1 Abarrotes\n 2 Ferreteria\n 3 Electronica\n 4 Jugueteria\n 5 Oficina\n 6 Salir\t\n ");
   			scanf("%i",&opcion1);
   			while(y!=0)
		   {
		   	switch(opcion1)
		   	{
				case 1:
				while(menu!=0)
				{	
					printf("\n\t -----ABARROTES-----");
					printf("\n Elige la operacion a realizar");
					printf("\n 1 Agregar producto\n 2 Buscar producto\n 3 Modificar producto\n 4 Borrar producto\n 5 Inventario\n 6 Salir\n ");
					scanf("%i",&menu);
					printf("\n\t Escogiste: %i \n",menu);
					if(menu==1)
					{//incio agregar producto
						printf("\n Ingresa nombre del producto: ");
						scanf("%49s",pro[pos].nombre);
						printf("\n Ingresa el precio: ");
						scanf("%s",pro[pos].precio);
						printf("\n Ingresa disponibilidad: ");
						scanf("%19s",pro[pos].cantidad);
						pro[pos].id=pos;
						printf("\n Su id es: %d\n",pos);
						pos=pos+1;
					}//end if agregar producto
					else if(menu==2)
					{
						printf("\n Ingresa Id(clave) a buscar: ");
						scanf("%d",&key);
						bool ban;
						for(count=0;count<pos;count++)
						{
							if(key==pro[count].id)
							{
								printf("\n Nombre: %c",pro[key].nombre);
								printf("\n Precio: %f",pro[key].precio);
								printf("\n Cantidad: %i",pro[key].cantidad);
								printf("\n Id: %d\n",pro[key].id);
								ban=true;
								break;
							}	
						}
							if(ban==false)printf("\n ERROR: El producto que busca no existe");
					}//end if search
					else if(menu==3)
					{
						printf("\n Ingresa Id(clave) a buscar: ");
						scanf("%d",&key);
						bool ban;
						for(count=0;count<pos;count++)
						{
							if(key==pro[count].id)
							{
								printf("\n Modificaras el producto: ");
								printf("\n Nombre: %c",pro[key].nombre);
								printf("\n Ingresa el nombre nuevo: ");
								scanf("%c",pro[key].nombre);
								printf("\n	Precio: %f",pro[key].precio);
								printf("\n Ingresa el precio nuevo: ");
								scanf("%i",pro[key].precio);
								printf("\n Disponiblidad: %i",pro[key].cantidad);
								printf("\n Ingresa la nueva cantidad de productos en existencia: ");
								scanf("%i",pro[key].cantidad);
								pro[key].id=key;
								printf("\n Su id es: %d\n",key);
								ban=true;
								break;
							}
						}
						if(ban==false)printf("\n ERROR: El producto que busca no existe");
					}//end if edit
					else if(menu==4){
						printf("\n Ingresa Id(clave) del producto a eliminar ");
						scanf("%d",&key);
						bool ban;
						for(count=0;count<pos;count++)
						{
							if(key==pro[count].id)
							{
								int count2;
								for(count2=count+1;count2<pos;count2++)
								{
									//sobreescribimos el registro siguiente para eliminar los registros
									pro[count2-1]=pro[count2];
									//así mismo sobreescribimos el id que disminuye en 1
									pro[count2-1].id=pro[count2-1].id-1;
								}//end for
//eliminamos una posicion
								pos=pos-1;
								ban=true;
								printf("\n Se elimino el registro con exito");
								break;
							}//end if
						}//end for
						if(ban==false)printf("\n ERROR: El producto que busca no existe");
					}//end if delete
					else if(menu==5){
						printf("\n Id\tNombre\tPrecio\tDisponibilidad");
						for(count=0;count<pos;count++)
						{
							printf("\n %d",pro[count].id);
							printf("\t %s",pro[count].nombre);
							printf("\t %s",pro[count].precio);
							printf("\t %s\n",pro[count].cantidad);
						}//end for
					}//end if inventario
					else if(menu==6){
						printf("Hasta pronto");
						menu=0;
						return 0;
					}
				}
				break;
				case 2:
					while(menu!=0)
					{
						printf("\n\t -----FERRETERIA-----");
						printf("Elige la operacion a realizar\n");
						printf("\n 1 Agregar producto\n 2 Buscar producto\n 3 Modificar producto\n 4 Borrar producto\n 5 Inventario\n 6 Salir\n ");
						scanf("%i",&menu);
						printf("Escogiste: %i \n",menu);
						if(menu==1)
						{//incio agregar producto
							printf("\n Ingresa nombre: ");
							scanf("%c",pro1[pos].nombre);
							printf("\n Ingresa el precio: ");
							scanf("%f",pro1[pos].precio);
							printf("\n Ingresa disponibilidad ");
							scanf("%i",pro1[pos].cantidad);
							pro1[pos].id=pos;
							printf("\n Su id es: %d\n",pos);
							pos=pos+1;
						}//end if agregar producto
						else if(menu==2){
							printf("\n Ingresa Id(clave) a buscar: ");
							scanf("%d",&key);
							bool ban;
							for(count=0;count<pos;count++)
							{
								if(key==pro[count].id)
								{
									printf("\n Nombre: %c",pro1[key].nombre);
									printf("\n Precio: %f",pro1[key].precio);
									printf("\n Disponibilidad: %i",pro1[key].cantidad);
									printf("\n Id: %d\n",pro1[key].id);
									ban=true;
									break;
								}
							}
							if(ban==false)printf("\nERROR: El producto que busca no existe.\n");
						}//end if search
						else if(menu==3){
							printf("\nIngresa Id(clave) a buscar: ");
							scanf("%d",&key);
							bool ban;
							for(count=0;count<pos;count++)
							{
								if(key==pro1[count].id)
								{
									printf("Modificaras al siguiente producto: ");
									printf("\nNombre: %c",pro1[key].nombre);
									printf("\nIngresa nombre nuevo: ");
									scanf("%c",pro1[key].nombre);
									printf("\nprecio: %f",pro1[key].precio);
									printf("\nIngresa el precio nuevo: ");
									scanf("%f",pro1[key].precio);
									printf("\ncantidad: %i",pro1[key].cantidad);
									printf("\nIngresa la nueva cantidad de productos ");
									scanf("%i",pro1[key].cantidad);
									pro1[key].id=key;
									printf("\nSu id es: %d\n",key);
									ban=true;
									break;
								}
							}
							if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if edit
						else if(menu==4){
							printf("\nIngresa Id(clave) del producto a eliminar ");
							scanf("%d",&key);
							bool ban;
							for(count=0;count<pos;count++)
							{
								if(key==pro1[count].id)
								{
									int count2;
									for(count2=count+1;count2<pos;count2++)
									{
		//sobreescribimos el registro siguiente para eliminar los registros
										pro1[count2-1]=pro1[count2];
		//así mismo sobreescribimos el id que disminuye en 1
										pro1[count2-1].id=pro1[count2-1].id-1;
									}//end for
		//eliminamos una posicion
								pos=pos-1;
								ban=true;
								printf("\nSe elimino al registro con exito\n");
								break;
								}//end if
							}//end for
							if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if delete
						else if(menu==5){
							printf("\nId\tNombre\tPrecio\tCantidad");
							for(count=0;count<pos;count++)
							{
								printf("\n %d",pro1[count].id);
								printf("\t%c",pro1[count].nombre);
								printf("\t%f",pro1[count].precio);
								printf("\t%i\n",pro1[count].cantidad);
							}//end for
						}//end if display
						else if(menu==6){
							printf("Hasta pronto");
							menu=0;
							return 0; //
						}
		  	}
				break;
				case 3:
					while(menu!=0)
					{
						printf("\n\t -----ELECTRONICA-----");
						printf("Elige la operacion a realizar?\n");
						printf("\n 1 Agregar producto\n 2 Buscar producto\n 3 Modificar producto\n 4 Borrar producto\n 5 Inventario\n 6 Salir\n ");
						scanf("%i",&menu);
						printf("Escogiste: %i \n",menu);
						if(menu==1)
						{//incio agregar producto
							printf("\nIngresa nombre: ");
							scanf("%c",pro2[pos].nombre);
							printf("\nIngresa el precio: ");
							scanf("%f",pro2[pos].precio);
							printf("\nIngresa la cantidad ");
							scanf("%i",pro2[pos].cantidad);
							pro2[pos].id=pos;
							printf("\nSu id es: %d\n",pos);
							pos=pos+1;
						}//end if agregar producto
						else if(menu==2){
							printf("\nIngresa Id(clave) a buscar: ");
							scanf("%d",&key);
							bool ban;
							for(count=0;count<pos;count++)
							{
								if(key==pro2[count].id)
								{
									printf("\nNombre: %c",pro2[key].nombre);
									printf("\nprecio: %f",pro2[key].precio);
									printf("\ncantidad: %i",pro2[key].cantidad);
									printf("\nId: %d\n",pro2[key].id);
									ban=true;
									break;
								}
							}
							if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if search
						else if(menu==3){
						printf("\nIngresa Id(clave) a buscar: ");
						scanf("%d",&key);
						bool ban;
						for(count=0;count<pos;count++)
						{
							if(key==pro2[count].id)
							{
								printf("Modificaras al siguiente producto: ");
								printf("\nNombre: %c",pro2[key].nombre);
								printf("\nIngresa nombre nuevo: ");
								scanf("%c",pro[key].nombre);
								printf("\nprecio: %f",pro2[key].precio);
								printf("\nIngresa el precio nuevo: ");
								scanf("%c",pro2[key].precio);
								printf("\ncantidad: %i",pro2[key].cantidad);
								printf("\nIngresa la nueva cantidad de productos ");
								scanf("%c",pro[key].cantidad);
								pro2[key].id=key;
								printf("\nSu id es: %d\n",key);
								ban=true;
								break;
							}
						}
						if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if edit
						else if(menu==4){
						printf("\nIngresa Id(clave) del producto a eliminar ");
						scanf("%d",&key);
						bool ban;
						for(count=0;count<pos;count++)
						{
							if(key==pro2[count].id){
							int count2;
							for(count2=count+1;count2<pos;count2++)
							{
		//sobreescribimos el registro siguiente para eliminar los registros
								pro2[count2-1]=pro2[count2];
		//así mismo sobreescribimos el id que disminuye en 1
								pro2[count2-1].id=pro2[count2-1].id-1;
							}//end for
		//eliminamos una posicion
								pos=pos-1;
								ban=true;
								printf("\nSe elimino al registro con exito\n");
								break;
							}//end if
						}//end for
						if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if delete
						else if(menu==5){
							printf("\nId\tNombre\tPrecio\tCantidad");
							for(count=0;count<pos;count++)
							{
								printf("\n %d",pro2[count].id);
								printf("\t%c",pro2[count].nombre);
								printf("\t%f",pro2[count].precio);
								printf("\t%i\n",pro2[count].cantidad);
							}//end for
						}//end if display
						else if(menu==6){
							printf("Hasta pronto");
							menu=0;
							return 0;
						}
					}
				break;
				case 4:
					while(menu!=0)
					{
						printf("\n\t -----JUGUETERIA-----");
						printf("\n 1 Agregar producto\n 2 Buscar producto\n 3 Modificar producto\n 4 Borrar producto\n 5 Inventario\n 6 Salir\n ");
						scanf("%i",&menu);
						printf("Escogiste: %i \n",menu);
						if(menu==1)
						{//incio agregar producto
							printf("\nIngresa nombre: ");
							scanf("%c",pro3[pos].nombre);
							printf("\nIngresa el precio: ");
							scanf("%f",pro3[pos].precio);
							printf("\nIngresa la cantidad ");
							scanf("%i",pro3[pos].cantidad);
							pro3[pos].id=pos;
							printf("\nSu id es: %d\n",pos);
							pos=pos+1;
						}//end if agregar producto
						else if(menu==2){
							printf("\nIngresa Id(clave) a buscar: ");
							scanf("%d",&key);
							bool ban;
							for(count=0;count<pos;count++)
							{
								if(key==pro3[count].id)
								{
									printf("\nNombre: %c",pro3[key].nombre);
									printf("\nprecio: %f",pro3[key].precio);
									printf("\ncantidad: %i",pro3[key].cantidad);
									printf("\nId: %d\n",pro3[key].id);
									ban=true;
									break;
								}
							}
							if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if search
						else if(menu==3){
							printf("\nIngresa Id(clave) a buscar: ");
							scanf("%d",&key);
							bool ban;
							for(count=0;count<pos;count++)
							{
								if(key==pro3[count].id)
								{
									printf("Modificaras al siguiente producto: ");
									printf("\nNombre: %c",pro3[key].nombre);
									printf("\nIngresa nombre nuevo: ");
									scanf("%c",pro3[key].nombre);
									printf("\nprecio: %f",pro3[key].precio);
									printf("\nIngresa el precio nuevo: ");
									scanf("%c",pro3[key].precio);
									printf("\ncantidad: %i",pro3[key].cantidad);
									printf("\nIngresa la nueva cantidad de productos ");
									scanf("%c",pro3[key].cantidad);
									pro3[key].id=key;
									printf("\nSu id es: %d\n",key);
									ban=true;
									break;
								}
							}
							if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if edit
						else if(menu==4){
							printf("\nIngresa Id(clave) del producto a eliminar ");
							scanf("%d",&key);
							bool ban;
							for(count=0;count<pos;count++)
							{
								if(key==pro3[count].id)
								{
									int count2;
									for(count2=count+1;count2<pos;count2++)
									{
		//sobreescribimos el registro siguiente para eliminar los registros
										pro3[count2-1]=pro3[count2];
		//así mismo sobreescribimos el id que disminuye en 1
										pro3[count2-1].id=pro3[count2-1].id-1;
									}//end for
		//eliminamos una posicion
									pos=pos-1;
									ban=true;
									printf("\nSe elimino al registro con exito\n");
									break;
								}//end if
							}//end for
							if(ban==false)printf("\nError: El producto que busca no existe.\n");
						}//end if delete
						else if(menu==5){
							printf("\nId\tNombre\tPrecio\tCantidad");
							for(count=0;count<pos;count++)
							{
								printf("\n %d",pro[count].id);
								printf("\t%c",pro[count].nombre);
								printf("\t%f",pro[count].precio);
								printf("\t%i\n",pro[count].cantidad);
							}//end for
						}//end if display
						else if(menu==6)
						{
							printf("Hasta pronto");
							menu=0;
							return 0;
						}
			}
				break;
				case 5:
					while(menu!=0)
					{
						printf("\n\t -----ABARROTES-----");
						printf("Elige la operacion a realizar?\n");
						printf("\n 1 Agregar producto\n 2 Buscar producto\n 3 Modificar producto\n 4 Borrar producto\n 5 Inventario\n 6 Salir\n ");
						scanf("%i",&menu);
						printf("Escogiste: %i \n",menu);
						if(menu==1)
						{//incio agregar producto
							printf("\nIngresa nombre: ");
							scanf("%c",pro4[pos].nombre);
							printf("\nIngresa el precio: ");
							scanf("%f",pro4[pos].precio);
							printf("\nIngresa disponibilidad ");
							scanf("%i",pro4[pos].cantidad);
							pro4[pos].id=pos;
							printf("\nSu id es: %d\n",pos);
							pos=pos+1;
						}//end if agregar producto
						else if(menu==2){
						printf("\nIngresa Id(clave) a buscar: ");
						scanf("%d",&key);
						bool ban;
						for(count=0;count<pos;count++)
						{
							if(key==pro4[count].id)
							{
								printf("\nNombre: %c",pro4[key].nombre);
								printf("\nprecio: %f",pro4[key].precio);
								printf("\ncantidad: %i",pro4[key].cantidad);
								printf("\nId: %d\n",pro4[key].id);
								ban=true;
								break;
							}
						}
					if(ban==false)printf("\nError: El producto que busca no existe.\n");
				}//end if search
				else if(menu==3){
					printf("\nIngresa Id(clave) a buscar: ");
					scanf("%d",&key);
					bool ban;
					for(count=0;count<pos;count++)
					{
						if(key==pro4[count].id)
						{
							printf("Modificaras al siguiente producto: ");
							printf("\nNombre: %s",pro4[key].nombre);
							printf("\nIngresa nombre nuevo: ");
							scanf("%c",pro4[key].nombre);
							printf("\nprecio: %s",pro4[key].precio);
							printf("\nIngresa el precio nuevo: ");
							scanf("%f",pro4[key].precio);
							printf("\ncantidad: %s",pro4[key].cantidad);
							printf("\nIngresa la nueva cantidad de productos ");
							scanf("%i",pro4[key].cantidad);
							pro4[key].id=key;
							printf("\nSu id es: %d\n",key);
							ban=true;
							break;
						}
					}
						if(ban==false)printf("\nError: El producto que busca no existe.\n");
				}//end if edit
				else if(menu==4){
					printf("\nIngresa Id(clave) del producto a eliminar ");
					scanf("%d",&key);
					bool ban;
					for(count=0;count<pos;count++)
					{
						if(key==pro4[count].id)
						{
							int count2;
							for(count2=count+1;count2<pos;count2++)
							{
//sobreescribimos el registro siguiente para eliminar los registros
								pro4[count2-1]=pro4[count2];
//así mismo sobreescribimos el id que disminuye en 1
								pro4[count2-1].id=pro4[count2-1].id-1;
							}//end for
//eliminamos una posicion
							pos=pos-1;
							ban=true;
							printf("\nSe elimino al registro con exito\n");
							break;
						}//end if
					}//end for
						if(ban==false)printf("\nError: El producto que busca no existe.\n");
				}//end if delete
				else if(menu==5){
					printf("\nId\tNombre\tPrecio\tCantidad");
					for(count=0;count<pos;count++)
					{
						printf("\n %d",pro4[count].id);
						printf("\t%c",pro4[count].nombre);
						printf("\t%f",pro4[count].precio);
						printf("\t%i\n",pro4[count].cantidad);
					}//end for
				}//end if display
				else if(menu==6){
					printf("Hasta pronto");
					menu=0;
					return 0;
				}
	}
		break;
		case 6:
		y=0;
		break;
		default:
			printf("Error dato incorrecto\n");
			y=0;
			break;
			   
		}
	}
	break;
		case 2:
			printf("Sistema de Ventas\n");
			break;
		case 3:
			printf("\nId\tNombre\tPrecio\tCantidad\n");
			for(count=0;count<pos;count++)
			{
				printf("\n %d",pro[count].id);
				printf("\t%c",pro[count].nombre);
				printf("\t%f",pro[count].precio);
				printf("\t%i\n",pro[count].cantidad);
			}
			break;
		case 4:
			x=0;
			printf("Hasta luego");
			break;
	default:
	printf("\n\t ERROR: Dato incorrecto");
	x=0;	
	break;
	}
}

return 0;

}
