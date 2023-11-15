#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double addition(double _premierNombre, double _secondNombre);
double soustraction(double _premierNombre, double _secondNombre);
double multiplication(double _premierNombre, double _secondnombre);
double division(double _premierNombre, double _secondnombre);
int modulo(int _premierNombre, int _secondnombre);
void affichage(void);
void close(void);
double puissance(double _base, double _exp);
long int factorielle(long int _nombre);
int PGCD(long int _premier_nombre, long int _second_nombre);
int PPCM(long int _premier_nombre, long int _second_nombre);

int main (void)
{

    affichage();

    int _first, _second;
    char _operateur;

    while(1){
       //affichage();
       printf("> ");
       scanf("%d %d %c", &_first, &_second, &_operateur);

       if (_operateur == 'Q' || _operateur == 'q'){
            close();
            break;
       }

       switch((signed char)_operateur){
           case '+':
               printf("%.2f\n", addition((double)_first, (double)_second));
               break;
           case '-':
               printf("%.2f\n", soustraction((double)_first, (double)_second));
               break;
           case '*':
               printf("%.2f\n", multiplication((double)_first, (double)_second));
               break;
           case '/':
               printf("%.3f\n", division((double)_first, (double)_second));
               break;
           case '%':
               printf("%d\n", modulo(_first, _second));
               break;
           case 'g':
               printf("%d\n", PGCD(_first, _second));
               break;
           case 'p':
               printf("%d\n", PPCM(_first, _second));
               break;
           case '!':
               printf("%ld\n", factorielle(_first));
               break;
           case '^':
               printf("%.2f\n", puissance((double)_first, (double)_second));
               break;

           default:
               printf("Veillez recommence tout en verifiant votre entre !\n");
               break;

           }

   }

    return 0;
}

void affichage(void){
    printf("***************************************************************\n");
    printf("***************************************************************\n");
    printf("***************************************************************\n");
    printf("***************************************************************\n");
    printf("***************\t\t\t\t\t***************\n");
    printf("***************\t\t\t\t\t***************\n");
    printf("***************\t\tBien\t\t\t***************\n");
    printf("***************\t\tDans ma calculatrice\t***************\n");
    printf("***************\t\tVeillez saisir\t\t***************\n");
    printf("***************\t\tvos elements de calcul\t***************\n");
    printf("***************\t\t\t\t\t***************\n");
    printf("***************\t\t\t\t\t***************\n");
    printf("***************************************************************\n");
    printf("***************************************************************\n");
    printf("***************************************************************\n");
    printf("***************************************************************\n");
}

double puissance(double _base, double _exp){
    return pow(_base, _exp);
}

long int factorielle(long int _nombre){

    //Algo de la factorielle
    //Factorielle
    long int _fact = 1.0;
    //Verifi si le nombre entre est negatif
    if(_nombre < 0)
        printf("Imposible de faire la factorielle d'un nombre negatif\n");

    //Verifi si le nombre entre est egale a 0
    if(_nombre == 0)
        return _fact;

    //Algo de la factorielle
    for (long int i = 1.; i <= _nombre; i++){
        _fact *= i;
    }
    return _fact;
}

int PGCD(long int _premier_nombre, long int _second_nombre){

    //Valeur qui contient le PGCD
    int _rest = 0;

    //Si les deux nomres entrer valent tous 0
    if(_premier_nombre == 0 && _second_nombre == 00)
        return _rest = 0;

    //Si l'un des nombres valent 0
    if (_premier_nombre == 0)
        return _second_nombre;
    if (_second_nombre == 0)
        return _premier_nombre;

    //Algo du PGCD
    //Reste de la division du premier nombre avec le second
    _rest = (_premier_nombre % _second_nombre);
    while (_rest != 0){
        //gcd = _rest;
        _premier_nombre = _second_nombre;
        _second_nombre = _rest;
        _rest = _premier_nombre % _second_nombre;
    }
    return _second_nombre;
}

int PPCM(long int _premier_nombre, long int _second_nombre){

    if (_premier_nombre == 0 || _second_nombre == 0)
        return 0;

    long int _max = (_premier_nombre > _second_nombre) ? _premier_nombre : _second_nombre;
    long int i = _max;

    //Algo du PPCM
    while (i % _premier_nombre != 0 || i % _second_nombre != 0)
        ++i;

    return i;
}

double addition(double _premierNombre, double _secondNombre){
    return _premierNombre + _secondNombre;
}

double soustraction(double _premierNombre, double _secondNombre){
    return _premierNombre - _secondNombre;
}

double multiplication(double _premierNombre, double _secondNombre){
    return _premierNombre * _secondNombre;
}

double division(double _premierNombre, double _secondNombre){
    return _premierNombre / _secondNombre;
}

int modulo(int _premierNombre, int _secondNombre){
    return _premierNombre % _secondNombre;
}

void close(void){
    printf("***************************************************************\n");
    printf("\t Merci d'avoire utiliser ma calculatrice !\n");
    printf("***************************************************************");
}
