#include <iostream>
using namespace std;
main(){
	
	
	int fil=0,col=0;
	cout<<"Ingresar el numero de filas: ";
	cin>>fil;
	cout<<"Ingresar el numero de columnas: ";
	cin>>col;
	
	int matriz[fil][col];
	cout<<"-------------Ingresar-----------"<<endl;
	/* FOR PARA MOSTRAR MATRIZ*/
	for (int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<i<<","<<ii<<": ";
			cin>>matriz
			[i][ii];
		}
		cout<<"_____"<<endl;
	}
	cout<<"-------------Mostrar-----------"<<endl;
	/* SEGUNDO FOR*/
	for (int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
		}
	}
	system("pause");
}
