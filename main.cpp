#include "Evaluador.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 1 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Devuelve true si letra (dado) es mayuscula, de lo contrario devuelve false
//Sugerencia, usar tabla ascii:
//http://www.cdrummond.qc.ca/cegep/informat/professeurs/alain/images/ASCII1.GIF
bool esMayuscula(char letra)
{
//EL ISUPPER LO LEI EN: http://www.cplusplus.com/reference/cctype/isupper/
//el isupper lee si el char que tenemos es una mayuscula
    if (isupper(letra))
    {
    //de ser asi devolvemos true
    return true;
    }
    else
    {
    //de lo contrario false
    return false;
    }
}

//Devuelve true si todas las letras de palabra (dado) son mayusculas
//Sugerencia, usar string.length() para saber la longitud de la palabra
bool sonMayusculas(string palabra)
{
return false;
}

//Desreferencia num (dado), eleva al cuadrado el numero resultante y lo asigna a la posicion donde num esta apuntando
void elevarAlCuadrado(int* num)
{
int cuadrado;
{
cuadrado = *num * *num;
*num = cuadrado;
}

}

//Desreferencia a (dado), b (dado) y c (dado) y devuelve el numero mayor
int getMayor(int* a, int* b, int* c)
{
//PRIMERO VEMOS SI A ES EL MAYOR
if(*a>*b && *a>*c)
{
//DE SER ASI DEVUELVE A
return *a;
}
//CON OTRO IF VEMOS SY B ES EL MAYOR
if (*b>*a && *b>*c)
{
//DE SER ASI DEVUELVE B
return *b;
}
//DE LO CONTRARIO EL MAYOR ES C
else
{
return *c;
}

    return -1;
}

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 2 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Realizar las clases Padre e Hijo dado el diagrama de clases adjunto
//Los contructores inicializan los atributos de las clases, las funciones set los establecen y get los obtienen.

class Padre
{
public:
    int num;
    char letra;
    //agregamos el constructor vacio
    Padre ()
    {

    }
    // agregamos el char a la clase padre
    Padre(int num, char letra)
    {
        this->num = num;
        this->letra= letra;
    }
    //el el get num devuelde la variable num
    int getNum()
    {
        return num;
    }
    //en el get letra devuelve la variable letra
    char getLetra()
    {
        return letra;
    }
    //creamos un void para el num y para la letra
    void setNum(int num)
    {
        this->num = num;
    }

    void setLetra(char letra)
    {
        this->letra = letra;
    }
};

//aqui hacemos la herencia
class Hijo : public Padre
{
public:
//le agregamos los parametros
    Hijo(int num, char letra)
    {
        setNum(num);
        setLetra(letra);
    }

};
///////////////////////////////////////////////////////////////////
////////////////////////////// Main ///////////////////////////////
///////////////////////////////////////////////////////////////////

void evaluar2();

int main ()
{
    //Funcion evaluadora parte 1
    cout<<"Evaluador parte 1"<<endl<<"================="<<endl;
    evaluar();


    //Evaluacion parte 2
    //Descomentar para evaluar
    cout<<"Evaluador parte 2"<<endl<<"================="<<endl;
    evaluar2();


    return 0;
}


///////////////////////////////////////////////////////////////////////
///////////////////////////// Evaluador 2 /////////////////////////////
///////////////////////////////////////////////////////////////////////

void evaluar2()
{
    double nota = 0;
    Hijo a(10,'a');
   Hijo b(20,'b');
    Hijo c(30,'c');
    c.setNum(40);
    cout<<"Herencia:\t\t";
    if(a.getNum()==10
        && b.getNum()==20
        && c.getNum()==40
        )
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    c.setLetra('z');
    cout<<"Get y sets:\t\t";
    if(a.getLetra()=='a'
        && b.getLetra()=='b'
        && c.getLetra()=='z'
        )
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    if(a.getNum()==10 && a.getLetra()=='a'
        && b.getNum()==20 && b.getLetra()=='b'
        && c.getNum()==30 && c.getLetra()=='c'
        )
    {
        nota+=0.5;
    }

    cout<<endl<<"Nota: "<<nota<<"/5"<<endl;
}
