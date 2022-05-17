#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

struct NameM
{
  string Name;
  int Batch;
};
struct CodeM
{
   int Code;
   char Symbol;
};
struct IndicM
{
    string Func;
    float Dose;
    int Freq;
};
struct CounterInd
{
    string Risk;
    float OverDose;
};
struct Use
{
    string I_V, Oral, Injec;
    
};
struct AntiPar
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct AntiPla
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct AntiEne
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct AntiInf
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct Analgesicos
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct Anestesicos
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct AntiBact
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct AntiConv
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct AntiDep
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
struct VasoDil
{
    NameM Name, Batch;
    CodeM Code, Symbol;
    IndicM Func, Freq, Dose;
    CounterInd Risk, OverDose;
    Use I_V, Oral, Injec;
};
void AgM(string, string);
string LeM(string);


int main()
{
	string txt, TipoMed;
	int opt, opt1,opt2;
    float codigo,codmed,eliminado,medeliminado,busq,busqfin;
    cout<<"________________________________\n";
	cout<<"\tInventario Farmacia"<<endl;
    cout<<"1. Agregar medicamento"<<endl;
    cout<<"2. Quitar medicamento"<<endl;
    cout<<"3. Buscar medicamento"<<endl;
    cout<<"4. Mas informacion"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"________________________________\n";
    cin>>opt;
    
    switch(opt)
	{
        case 1:
			cout<<"¿Que tipo de medicamento desea ingresar?\n";
			cout<<"1. Anti Parasitario\n";
			cout<<"2. Anti Pla\n";
			cout<<"3. AntiEne\n";
			cout<<"4. AntiInf\n";
			cout<<"5. Analgesicos\n";
			cout<<"6. Anestesicos\n";
			cout<<"7. AntiBact\n";
			cout<<"8. AntiConv\n";
			cout<<"9. AntiDep\n";
			cout<<"10. VasoDil\n";
			cin>>opt1;
			if(opt1==1)
			{
				TipoMed="AntiPar.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);				
			}
			if(opt1==2)
			{
				TipoMed="AntiPla.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}
			if(opt1==3)
			{
				TipoMed="AntiEne.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			 }
			if(opt1==4)
			{
				TipoMed="AntiInf.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}
		    if(opt1==5)
			{
				TipoMed="Analgesicos.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}
			if(opt1==6)
			{
				TipoMed="Anestesicos.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}
			if(opt1==7)
			{
				TipoMed="AntiBact.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}
			if(opt1==8)
			{
				TipoMed="AntiConv.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}
			if(opt1==9)
			{
				TipoMed="AntiDep.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}
			if(opt1==10)
			{
				TipoMed="VasoDil.txt";
				txt=LeM(TipoMed);
				AgM(txt,TipoMed);
			}	 
        break; 
        case 2: 
	    case 3:
        cout<<"¿Que medicamento desea eliminar? :";
        break;
        case 4:
        cout<<"Ingrese el codigo del medicamento a buscar: ";
        break;
    }
    return 0;
}
string LeM(string TipoMed)
{
	string Linea, Texto;
	ifstream DataBaseL;
	DataBaseL.open(TipoMed.c_str(),ios::in);
	while(getline(DataBaseL,Linea))
	{
		Texto=Texto+Linea+"\n";
	}
	DataBaseL.close();
	
	return Texto;
}
void AgM(string Texto, string TipoMed)
{
	ofstream DataBaseM, Codigos;
	NameM NM;
	CodeM CM;
	
	DataBaseM.open(TipoMed.c_str(),ios::out);
	Codigos.open("Codigos.txt",ios::out);
	
	cout<<"Nombre del Medicamento:\n";
	cin>>NM.Name;
	cout<<"Lote del Medicamento:\n";
	cin>>NM.Batch;
	cout<<"Codigo del Medicamento:\n";
	cin>>CM.Code;
	cout<<"Simbolo del Medicamento:\n";
	cin>>CM.Symbol;
	DataBaseM<<Texto<<NM.Name<<" "<<NM.Batch<<"\n"<<CM.Code<<CM.Symbol;
	Codigos<<CM.Code;
	
	DataBaseM.close();
}
