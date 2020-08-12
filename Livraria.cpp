
#include <iostream>
#include<stdio.h>
#include <sstream>
#include <clocale>
#include <windows.h>
using namespace std;
struct Livro{

	char titulo[30];
	char autor[30];
	int numreg;
	double preco;
	Livro *anterior;
};
class Lista_ligada
{


	private:
		Livro *fim;
	public:
		Lista_ligada(){fim=(Livro *)NULL;}
	
		void novonome();
		void print();
};
void Lista_ligada::novonome(){
setlocale(LC_ALL, "Portuguese_brazil.1252");
	Livro *novolivro=new Livro;
	
	
	cout<<"\nDigite titulo\n";

	cin.getline(novolivro->titulo,30);

	cout<<"\nDigite autor\n";
	
		cin.getline(novolivro->autor,30);

	cout<<"\nDigite preço\n";

		cin>>novolivro->preco;

	cout<<"\nDigite o numero de registro\n";

		cin>>novolivro->numreg;

	novolivro->anterior=fim;
	fim=novolivro;
}
void Lista_ligada::print(){
	Livro *atual=fim;
setlocale(LC_ALL, "Portuguese_brazil.1252");
	while(atual!=NULL)
	{
	
		cout<<"\n\nTitulo\n"<< atual->titulo;
		
		cout<<"\n\nAutor\n"<< atual->autor;
	
		cout<<"\n\npreço\n"<< atual->preco;
		
		cout<<"\n\nnumero de Registro\n"<< atual->numreg;
		atual=atual->anterior;
	}
}

int main()
{
	system("chcp 1252");
setlocale(LC_ALL, "Portuguese_brazil.1252");
	Lista_ligada li;
	char opcao;


	do{
		
	li.novonome();
	cout<<"\nInserir outro Livro?";
	cin>>opcao;
	cin.ignore();
	}while(opcao=='s');
	
	li.print();
    return 0;
}
