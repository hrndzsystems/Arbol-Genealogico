//ARBOL GENEALOGICO
#include<stdio.h>
#include<stdlib.h>
int main(){
	int opc;
	int Martha, Maria, Leopoldo, Jose, Polo, Luis, Victoria, Enrique, Miranda, Kenneth, Mailen, Yeny, Jacaranda, Amaya, Yo;
	printf("Sistema de Nomina: ");
	printf("\n1. Abuelos paternos");
	printf("2. Abuelos Maternos\n");
	printf("3. Papas\n");
	printf("4. Tios\n");
	printf("5. Tias\n");
	printf("6. Primos\n");
	printf("7. Familia de mi papa \n");
	printf("8. Yo\n");
	printf("\n Elija la opcion \n");
	scanf("%d", &opc);
	switch(opc){
	case 1: 
	printf("Quienes son tus abuelos paternos?: ");
    printf("\nMaria y Jose son mis abuelos paternos");
	break;
	case 2: 
	printf("Quienes son tus abuelos maternos?: ");
	printf("\nMartha Y Leopoldo son mis abuelos maternos");
	break;
	case 3:
	printf("Quienes son tus papas: ");
	printf("\n Mis papas son Victoria y Enrique");
	break;
	case 4:
		printf("Cuantos tios tienes en total: ");
		printf("\n 2, por parte de mi mama y se llaman Polo y Luis");
		break;
	case 5: 
	printf("Cuantas tias tienes en total: ");
	printf("\n 2, por parte de mi mama y se llaman Yeny y Jacaranda");
	break;
	case 6: 
	printf("Cuantos primos tienes en total: ");
	printf("\n3, por parte de la famiia de mi mama, se llaman miranda, kenneth y mailen");
	break;
	case 7:
		printf("Mi papa tiene familia aparte: ");
		printf("\nSi, tengo una media hermana llamada Amaya");
		break;
	case 8:
		printf("Como me llamo siendo yo el propietario de este arbol genealogico: ");
		printf("\n Emilio Alonzo, tengo 20 años y estudio una ingenieria actualmente");
		break;
		default:
			return 0;
}
}
