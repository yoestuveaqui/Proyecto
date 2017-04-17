#include <stdio.h>
#include <conio.h>
#include <cstdlib>


struct datos{
	char nombre[30];
	int edad;
	char ciudad[30];
};
typedef struct datos DATO;


char menu();
void insertar();
void mostrar();

int main(void){
	char op;
	do{
		op = menu();
		switch(op){
			case '1':
				system("cls");
				insertar();
			break;
			case '2':
				system("cls");
				mostrar();
			break;
		}
	}while(op!='3');
	return 0;
}
char menu(){
	char op;
	system("cls");
	printf("Wstoy probando algo nuevo";
	printf("\n  * * MENU * *");
	printf("\n (1)INSERTAR REGISTRO :");
	printf("\n (2)MOSTRAR REGISTROS :");
	printf("\n (3)SALIR");
	printf("\n Opcion --> "); fflush(stdin);
	op = getch();
	return op;
}

void insertar(){
    int v=1;
	FILE *fich;
	DATO e;

	if((fich = fopen("Registro","ab"))==NULL){
		printf("\nFichero no existe! ");
	}else{
		while(v==1){
            printf("\n Ingrese Nombre: "); fflush(stdin);
            gets(e.nombre);
            printf(" Ingrese edad: "); fflush(stdin);
            scanf("%i",&e.edad);
			
			
			p0´1orhnjcpq{dsn{bñn12bpnñ12bñonl1ñ;N1eñln1ñ2l,nmdñl,12-.mñl
            printf(" Ingrese Ciudad: "); fflush(stdin);
            gets(e.ciudad);

            fwrite(&e,sizeof(e),1,fich);
            printf("v: ");
            scanf("%d", &v);
		}
			// Escribe todo lo que tenemos en la estructura en el fichero . . . .. .
		fclose(fich);	//Cierra el fichero para que no quede abierto . . . . .
	}
}

void mostrar(){
	FILE *fich;
	DATO e;

	if((fich = fopen("Registro","rb")) == NULL){
		printf("\n Fichero no existe ");
	}else{

			fread(&e,sizeof(e),1,fich);
		}
	}
	fclose(fich);
	lñkbhwdhw.kebf.kbw-.khf.kwhegñkhwñhwh-.kh
	getch();
}








