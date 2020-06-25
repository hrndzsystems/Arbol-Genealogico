//Nombre: Hernandez Hernandez Emilio Alonzo.// 
//Profesor: Sergio Manuel Martinez Chavez.//
//Grupo: ISCO2AA.//
//Escuela: Universidad de Ciencias y Administracion UCAD.//
//Fecha: 25/03/20.//
#include<stdio.h>//Se inserta la Libreria de Cabecera de Entrada/Salida//
int main(){ //Se declara la Funcion Principal con el tipo de dato que se va a declarar que en este caso seria un entero y asimismo empieza el programa//. 
	int mes, dia, enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre; //Se insertan las variables que llevan por nombre los meses con nombre, el mes y el dia, de tipo entero// 
	printf("Programa signo zodiacal\n"); //Imprime El contexto del programa sera que pida al usuario su dia y mes de nacimiento, señale su signo zodiacal y muestre en pantalla un mensaje los astros//
	printf("Ingresa tu dia: "); //Pide que el usuario ingrese su dia de nacimiento//
	scanf("%d",&dia); //guarda el dia en especifico que puso el usuario//
	printf("\n Mes \n"); //Aqui muestra el inicio de mi lista de los meses que van a estar almacenados en cada caso del ciclo//
	printf("1. Enero \n"); //Designa Enero al valor de 1//
	printf("2. Febrero \n"); //Designa Febrero al valor de 2//
	printf("3. Marzo \n"); //Designa Marzo al valor de 3//
	printf("4. Abril\n"); //Designa Abril al valor de 4//
	printf("5. Mayo \n"); //Designa Mayo al valor de 5//
	printf("6. Junio \n"); //Designa Junio al valor de 6//
	printf("7. Julio \n"); //Designa Julio al valor de 7//
	printf("8. Agosto \n"); //Designa Agosto al valor de 8//
	printf("9. Septiembre \n"); //Designa Septiembre al valor de 9//
	printf("10. Octubre\n"); //Designa Octubre al valor de 10//
	printf("11. Noviembre\n"); //Designa Noviembre al valor de 11//
	printf("12. Diciembre\n"); //Designa Diciembre al valor de 12//
	printf("Escoje el mes: "); //Pide al usuario que escoja su mes de nacimiento//
	scanf("%d",&mes); //guarda el mes que el usuario ingreso//
	switch (mes) //Se dara el nombre de la variable que en este caso es el mes que escogio el usuario//
	{ //Aqui dara el inicio a la sintaxis de switch//
	    case 1: //Inicia el bloque de Instrucciones del caso 1// 
	    if(dia<20){ //Marca la condicion de que si la fecha que introdujo el usuario es menor a 20 ¿porqué 20? Bueno para que agarre todos los numeros y agarre hasta el 19 de Enero que es su ultimo dia, su signo zodiacal es Capricornio//
	    printf("Tu signo es Capricornio y el mensaje que te mandan los astros es: El 80% del exito es mostrarse. "); //Aqui indica al usuario que su signo zodiacal es Capricornio y muestra un mensaje emotivo//
	    }//Termina condicion if//
	    else{//Aqui la condicion else explica que no se cumple el dia establecido en el rango de Capricornio que marco el usuario y es mayor a 19 de Enero, entonces su signo es Acuario//
	    printf("Tu signo es Acuario y el mensaje que te mandan los astros es: Sin continuo crecimiento y perseverancia, palabras como mejora, logro y exito no tienen significado."); //Aqui indica la condicion al usuario que su signo zodiacal es Acuario y muestra un mensaje emotivo//
	    } //Acaba el bloque de Instrucciones del caso 1//
	    break; //Aqui señala que solo se ejecutara el Case 1, sirve como un limite para que el programa no ejecute todos los casos y en este caso sea erroneo y el usuario no sabra cual es su signo//
        case 2: //Inicia el bloque de instrucciones del caso 2//
	    if(dia<19){ //Marca la condicion de que si la fecha que introdujo el usuario es menor a 19, obvio para que agarre hasta el 18 de Febrero que es su dia ultimo, su signo zodiacal es Acuario//
	    printf("Tu signo es: Acuario y el mensaje que te mandan los astros es: Sin continuo crecimiento y perseverancia, palabras como mejora, logro y exito no tienen significado."); //Indica al usuario que su signo zodiacal es Acuario y muestra un mensaje emotivo//
	    } //Termina condicion if//
	    else{ //Aqui else indica que si no se cumple el dia que marco el usuario y es mayor a 18 de Febrero, entonces es Piscis//
	    printf("Tu signo es Piscis y el mensaje que te mandan los astros es: No conozco la clave del exito, pero se que la clave del fracaso es tratar de complacer a todo el mundo."); //indica la condicion al usuario que su signo zodiacal es Piscis y muestra un mensaje emotivo//
	    } //Acaba el bloque de Instrucciones del caso 2//
	    break; //Aqui señala que solo se ejecuta el caso 2 en caso de que se cumplan las caracteristicas//
        case 3://Incia el bloque de instrucciones del caso 3//
	    if(dia<21){ //Marca la condicion que si la fecha que introdujo el usuario es menor a 21, el 21 sirve para que alcanze hasta el numero 20 de Marzo que es su ultimo dia, y señala que su signo es Piscis//
	    printf("Tu signo es Piscis y el mensaje que te mandan los astros es: No conozco la clave del exito, pero se que la clave del fracaso es tratar de complacer a todo el mundo."); //Indica al usuario que su signo zodiacal es Piscis y muestra un mensaje emotivo//
	    } //Termina condicion If//
	    else{ //Condicion else indica que si no se cumple el dia que marco el usuario y es mayor a 20 de Marzo, entonces es Aries//
	    printf("Tu signo es Aries y el mensaje que te mandan los astros es: El exito es gustarte a ti mismo, gustarte lo que haces y gustarte como lo haces."); //Indica la condicion al usuario que su signo zodiacal es Aries y muestra un mensaje emotivo//
	    } //Acaba el bloque de Instrucciones del caso 3//
	    break; //Señala que solo se ejecuta el caso 3 en caso de que se cumplan las caracteristicas//
	    case 4://Incia el bloque de instrucciones del caso 4//
	    if(dia<20){ //Marca la condicion que si la fecha que introdujo el usuario es menor a 20, osea para que abarque hasta el 19 de Abril (su ultimo dia), entonces su signo zodiacal es Aries//
	    printf("Tu signo es Aries y el mensaje que te mandan los astros es: El exito es gustarte a ti mismo, gustarte lo que haces y gustarte como lo haces."); //Indica al usuario que su signo zodiacal es Aries y muestra un mensaje emotivo//
	    } //Termina condicion if//
	    else{ //Else indica que si el dia que indico el usuario es mayor a 19 de Abril, entonces su signo zodiacal es Tauro//
	    printf("Tu signo es Tauro y el mensaje que te mandan los astros es: La llave del exito es el conocimiento del valor de las cosas"); //Indica al usuario que su signo zodiacal es Tauro y muestra un mensaje emotivo//
	    } //Termina bloque de Instrucciones del caso 4//
	    break; //Señala que solo se ejecutara el caso 4 en caso de que se cumplan las caracteristicas//
	    case 5: //Inicia el bloque de instrucciones del caso 5//
	    if(dia<21){ //La condicion dice que si el dia que indica el usuario es menor a 21, 21 para que abarque tambien el 20 de Mayo (ultimo dia de Tauro) entonces su signo zodiacal es Tauro//
	    printf("Tu signo es Tauro y el mensaje que te mandan los astros es: La llave del exito es el conocimiento del valor de las cosas"); //Indica al usuario su signo zodiacal que es Tauro y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //Esta condicion indicia que si el dia que ingreso el usuario es mayor a 20 de Mayo, entonces sera Geminis//
		printf("Tu signo es Geminis y el mensaje que te mandan los astros es: El exito es la suma de pequeños esfuerzos repetidos dia tras dia."); //Indica al usuario que su signo zodiacal es Geminis y muestra un mensaje emotivo//
		} //Termina bloque de Instrucciones del caso 5//
		break; //Indica que solo se ejecutara el caso 5 en caso de que se cumplan las caracteristicas//
		case 6: //Inicia el bloque de instrucciones del caso 6//
		if(dia<21){ //La condicion menciona que si el dia que ingreso el usuario es menor a 21, 21 para que abarque hasta el 20 de Junio (ultimo dia de Geminis), entonces ese es su signo zodiacal//
		printf("Tu signo es Geminis y el mensaje que te mandan los astros es: El exito es la suma de pequeños esfuerzos repetidos dia tras dia."); //Indica al usuario que su signo zodiacal es Geminis y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //La condicion marca que si el dia que ingreso el usuario es mayor a 20 de Junio, entonces sera Cancer//
		printf("Tu signo es Cancer y el mensaje que te mandan los astros es: No mido el exito de una persona por lo alto que escala, sino por lo rapido que se levanta al caerse."); //Indica al usuario que su signo zodiacal es Cancer y muestra un mensaje emotivo//
		} // Termina bloque de Instrucciones del caso 6//
		break; //Indica que solo se ejecutara el caso 6 en caso de que se cumplan las caracteristicas//
		case 7: //Inicia el bloque de instrucciones del caso 7//
		if(dia<23){ //La condicion menciona que si el dia que ingreso el usuario es menor a 23, 23 para que abarque hasta el 22 de Julio (ultimo dia de Cancer), entonces ese es su signo zodiacal//
		printf("Tu signo es Cancer y el mensaje que te mandan los astros es: No mido el exito de una persona por lo alto que escala, sino por lo rapido que se levanta al caerse.");  //Indica al usuario que su signo zodiacal es Cancer y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //La condicion marca que si el dia que ingreso el usuario es mayor a 22 de Julio, entonces sera Leo//
		printf("Tu signo es Leo y el mensaje que te mandan los astros es: El requisito del exito es la prontitud en las decisiones."); //Indica al usuario que su signo zodiacal es Leo y muestra un mensaje emotivo//
		} // Termina bloque de Instrucciones del caso 7//
		break; //Indica que solo se ejecutara el caso 7 en caso de que se cumplan las caracteristicas//
		case 8: //Inicia el bloque de instrucciones del caso 8//
		if(dia<23){ //La condicion menciona que si el dia que ingreso el usuario es menor a 23, 23 para que abarque hasta el 22 de Agosto (ultimo dia de Leo), entonces ese es su signo zodiacal//
		printf("Tu signo es Leo y el mensaje que te mandan los astros es: El requisito del exito es la prontitud en las decisiones."); //Indica al usuario que su signo zodiacal es Leo y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //La condicion marca que si el dia que ingreso el usuario es mayor a 22 de Agosto, entonces sera Virgo//
		printf("Tu signo es Virgo y el mensaje que te mandan los astros es: La distancia entre locura y genio solo se mide con el exito."); //Indica al usuario que su signo zodiacal es Virgo y muestra un mensaje emotivo//
		}  // Termina bloque de Instrucciones del caso 8//
		break; //Indica que solo se ejecutara el caso 8 en caso de que se cumplan las caracteristicas//
		case 9: //Inicia el bloque de instrucciones del caso 9//
		if(dia<23){ //Marca la condicion que si la fecha que introdujo el usuario es menor a 23, osea para que abarque hasta el 22 de Septiembre (su ultimo dia), entonces su signo zodiacal es Virgo//
		printf("Tu signo es Virgo y el mensaje que te mandan los astros es: La distancia entre locura y genio solo se mide con el exito."); //Indica al usuario que su signo zodiacal es Virgo y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //La condicion marca que si el dia que ingreso el usuario es mayor a 22 de Septiembre, entonces sera Libra//
		printf("Tu signo es Libra y el mensaje que te mandan los astros es: Es dificil fallar, pero es peor nunca haber intentado tener exito."); //Indica al usuario que su signo zodiacal es Libra y muestra un mnensaje emotivo//
		} // Termina bloque de Instrucciones del caso 9//
		break;  //Indica que solo se ejecutara el caso 9 en caso de que se cumplan las caracteristicas//
		case 10: //Inicia el bloque de instrucciones del caso 10//
		if(dia<23){ //Marca la condicion que si la fecha que introdujo el usuario es menor a 23, el 23 sirve para que alcanze hasta el numero 22 de Octubre que es su ultimo dia, y señala que su signo es Libra//
		printf("Tu signo es Libra y el mensaje que te mandan los astros es: Es dificil fallar, pero es peor nunca haber intentado tener exito."); //Indica al usuario su signo zodiacal que es Libra y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //La condicion marca que si el dia que ingreso el usuario es mayor a 22 de Octubre, entonces Escorpio//
		printf("Tu signo es Escorpio y el mensaje que te mandan los astros es: Para tener exito debes aceptar todos los desafios que se cruzan en tu camino. No puedes aceptar solo las que mas te gustan."); //Indica al usuario que su signo zodiacal es Escorpio y muestra un mensaje emotivo//
		} // Termina bloque de Instrucciones del caso 10//
		break;  //Indica que solo se ejecutara el caso 10 en caso de que se cumplan las caracteristicas//
		case 11: //Inicia el bloque de instrucciones del caso 11//
		if(dia<22){ //Marca la condicion que si la fecha que introdujo el usuario es menor a 22, 22 sirve para que alcanze hasta el numero 21 de Noviembre que es su ultimo dia, y señala que su signo es Escorpio//
		printf("Tu signo es Escorpio y el mensaje que te mandan los astros es: Para tener exito debes aceptar todos los desafios que se cruzan en tu camino. No puedes aceptar solo las que mas te gustan."); //Indica al usuario su signo zodiacal que es Escorpio y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //La condicion marca que si el dia que ingreso el usuario es mayor a 21 de Noviembre, entonces Sagitario//
		printf("Tu signo es Sagitario y el mensaje que te mandan los astros es: Juzga tu éxito por lo que tienes que sacrificar para conseguirlo."); //Indica al usuario que su signo zodiacal es Sagitario y muestra un mensaje emotivo//
		} // Termina bloque de Instrucciones del caso 11//
		break; //Indica que solo se ejecutara el caso 11 en caso de que se cumplan las caracteristicas//
		case 12: //Inicia el bloque de instrucciones del caso 12//
		if(dia<22){ //Marca la condicion que si la fecha que introdujo el usuario es menor a 22, osea para que abarque hasta el 21 de Diciembre (su ultimo dia), entonces su signo zodiacal es Sagitario//
		printf("Tu signo es Sagitario y el mensaje que te mandan los astros es: Juzga tu exito por lo que tienes que sacrificar para conseguirlo."); //Indica al usuario su signo zodiacal que es Sagitario y muestra un mensaje emotivo//
		} //Termina condicion if//
		else{ //La condicion marca que si el dia que ingreso el usuario es mayor a 21 de Diciembre, entonces Capricornio//
		printf("Tu signo es Capricornio y el mensaje que te mandan los astros es: Un Capricornio siempre necesita pruebas y comprobaciones."); //Indica al usuario que su signo zodiacal es Capricornio y le muestra un mensaje emotivo//
		} // Termina bloque de Instrucciones del caso 12//
		break; //Indica que solo se ejecutara el caso 12 en caso de cumplirse la fecha y seria el ultimo caso de nuestro programa de signos zodiacales//
		default: printf("Gracias\n"); // se ejecuta el bloque de instrucciones por defecto ultimo, que indica que la fecha no corresponda con ninguna de las registradas en este caso la cantidad nomral de dias de un mes//
        } //Termina este bloque de instruccion Default//
		return 0; //Finaliza la ejecucion de la funcion que cumple el ciclo switch y permite a que se repita de nuevo correr y hacer compilar el programa//
        } //Con esto termina nuestro programa//
