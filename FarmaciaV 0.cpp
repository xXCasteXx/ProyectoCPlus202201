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
void AgM(string);
string LeM();


int main()
{
	string txt;
	txt=LeM();
	AgM(txt);

    return 0;
}
string LeM()
{
	string Linea, Texto;
	ifstream DataBaseL;
	DataBaseL.open("Medicamentos.txt",ios::in);
	while(getline(DataBaseL,Linea))
	{
		Texto=Texto+Linea+"\n";
	}
	DataBaseL.close();
	
	return Texto;
}
void AgM(string Texto)
{
	ofstream DataBaseM;
	NameM NM;
	CodeM CM;
	
	DataBaseM.open("Medicamentos.txt",ios::out);
	
	cout<<"Nombre del mediamento:\n";
	cin>>NM.Name;
	cout<<"Lote del mediamento:\n";
	cin>>NM.Batch;
	cout<<"Codigo del Medicamento:\n";
	cin>>CM.Code;
	DataBaseM<<Texto<<NM.Name<<" "<<NM.Batch<<"\n"<<CM.Code;
	
	DataBaseM.close();
}
