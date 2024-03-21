#include <iostream>
using namespace std;
main (){
	
	/*
	int tam=0,
	suma=0,
	promedio=0;
	
	cout<<"Ingrese el numero de notas: ";
	cin>>tam;
	int notas[tam]; 
	for(int i=0;i<tam;i++){
	
		cout<<"Ingresar calificacion "<<i+1<<":";
		cin>>notas[i];	
	}
	
	for(int i=0;i<tam;i++){
		suma += notas[i];
	}
	
	promedioTotal = suma / tam;
	cout<<"El promedio es: "
	<<promedioTotal<<endl;
	*/
	
	/* SEGUNDO PROGRAMA*/
	/* 
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{       
		tam++;
		cout<<"Ingrese la calificacion "<<tam<<":";
		cin>>notas[tam-1];
		
		cout<<"Desea ingresar otra calificacion(s/n):";
		cin>>res;
		
	}while(res=='s' || res=='S');
	
	for(int i=0;i<tam;i++){
		suma+=notas[i];
	}
	promedioTotal = suma / tam;
	cout<<"El promedio es: "<<promedioTotal<<endl;
	*/
	
	
	
	/* */
	char nombre[30];
	cout<<"Ingresar nombre completo: "<<endl;
	cin.get(nombre,30);
	cout<<nombre<<endl;
	system("pause");
}   
