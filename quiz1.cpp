#include <string>
#include <iostream>
using namespace std;

//Se crea la estructura fecha
struct fecha {
	int svasquez_intdia;
	int svasquez_intmes;
	int svasquez_intyear;
};

//Se crea la estructura principal que es cliente
struct cliente {
	fecha svasquez_fecfecha_ingreso;
	string svasquez_strnombre;
	string svasquez_strapellido;
	string svasquez_strtelefono;
	string  svasquez_strcargo;
};

//Se crea una función el cual tiene como objetivo poder cambiar el cargo del cliente ingresado por el usuario
//Se le pone a la variable el signo & para que tenga acceso directo a la variable original declarada en el main
void vasquezsantiago_cambiarCargo(cliente& svasquez_clicliente){
	string svasquez_strcambiarcargo;
	cout << "Persona a la cual se le cambiara el cargo: " << svasquez_clicliente.svasquez_strnombre << " " <<svasquez_clicliente.svasquez_strapellido<<"\n";
	cout << "Ingrese el nuevo cargo:  ";
	cin >> svasquez_strcambiarcargo;
	svasquez_clicliente.svasquez_strcargo = svasquez_strcambiarcargo;
}

int main() {
	
	//Se crea una variable llamada "svasquez_clicliente" que me servira para almacenar los datos que el usuario ingresa
	
	cliente svasquez_clicliente;
	
	//Se solicitan los datos para la fecha de ingreso
	
	cout<<"Ingrese el dia de ingreso: ";
	cin>>svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intdia;
	cout<<"Ingrese el mes de ingreso: ";
	cin>>svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intmes;
	cout<<"Ingrese el año de ingreso: ";
	cin>>svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intyear;
	
	//Se solicitan los datos como tal del usuario
	
	cout<<"Ingrese el nombre del cliente: ";
	cin>>svasquez_clicliente.svasquez_strnombre;
	cout<<"Ingrese el apellido del cliente: ";
	cin>>svasquez_clicliente.svasquez_strapellido;
	cout<<"Ingrese el telefono del cliente: ";
	cin>>svasquez_clicliente.svasquez_strtelefono;
	cin.ignore();
	cout<<"Ingrese el cargo del cliente: ";
	getline(cin, svasquez_clicliente.svasquez_strcargo);
	
	//Imprime los datos
	
	cout<<"Fecha de ingreso: "<<svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intdia<<"/"<<svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intmes<<"/"<<svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intyear<<"\n";
	cout<<"Nombre: "<<svasquez_clicliente.svasquez_strnombre<<"\n";
	cout<<"Apellido: "<<svasquez_clicliente.svasquez_strapellido<<"\n";
	cout<<"Telefono: "<<svasquez_clicliente.svasquez_strtelefono<<"\n";
	cout<<"Cargo: "<<svasquez_clicliente.svasquez_strcargo<<"\n";
	
	//Llama a la función vasquezsantiago_cambiarCargo
	
	vasquezsantiago_cambiarCargo(svasquez_clicliente);
	
	//Imprime nuevamente los datos con los cambios realizados
	
	cout<<"Fecha de ingreso: "<<svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intdia<<"/"<<svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intmes<<"/"<<svasquez_clicliente.svasquez_fecfecha_ingreso.svasquez_intyear<<"\n";
	cout<<"Nombre: "<<svasquez_clicliente.svasquez_strnombre<<"\n";
	cout<<"Apellido: "<<svasquez_clicliente.svasquez_strapellido<<"\n";
	cout<<"Telefono: "<<svasquez_clicliente.svasquez_strtelefono<<"\n";
	cout<<"Cargo: "<<svasquez_clicliente.svasquez_strcargo<<"\n";
	
	
	
}