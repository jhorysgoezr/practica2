#include <iostream>
#include<cstdlib>

using namespace std;

bool compararpalabra(const char* pal1, const char* pal2);
int cadenaAentero(char cadena[]);
void enteroAcadena(int num,char*& arreglo);

int main()
{
    int opcion=1;
    cout<<endl;
    cout<<"***Bienvednido a la practica 1***"<<endl;
    while (opcion!=0){
        cout<<"seleccione una opcion"<<endl;
        cout<<"1) Contador de fectivo"<<endl;
        cout<<"2) Generador de letras"<<endl;
        cout<<"3) Comparador de cadenas de caracteres"<<endl;
        cout<<"4) Convertir cadena de caracteres a numeros"<<endl;
        cout<<"5) Convertir numero a cadena de caracteres"<<endl;
        cout<<"6) Convertir caracteres minuscula a mayuscula"<<endl;
        cout<<"7) Eliminar caracteres repetidos"<<endl;
        cout<<"8) Separador de cadena de caracteres y numeros"<<endl;
        cout<<"9) Separador de cadena de caracteres numericos"<<endl;
        cout<<"10) Convertidor de numero romano a aragbico"<<endl;
        cout<<"11) Reservas de cine"<<endl;
        cout<<"12) Verificador matriz cuadrado magico"<<endl;
        cout<<"13) Encontrar estrellas"<<endl;
        cout<<"14) Rotador de matriz"<<endl;
        cout<<"15) Interseccion entre rectangulos"<<endl;
        cout<<"16) Calculador de caminos en una cuadricula"<<endl;
        cout<<"17) Numeros amigables"<<endl;
        cout<<"17) Permutaciones lexicograficas"<<endl;
        cin>>opcion;
        switch(opcion){
        case 1:
        {
            int valores[10]= {50000,20000,10000,5000,2000,1000,500,200,100,50};
            int cantidad[10]={};

            int cantidad_ing;
            cout<<"Porfavor ingrese una cantidad de dinero"<<endl;
            cin>> cantidad_ing;

            for (int i=0; i<10; i++){
                if (cantidad_ing >= valores[i]){
                    cantidad[i]= cantidad_ing/ valores[i];
                    cantidad_ing %= valores[i];
                }
            }
                for (int i=0; i<10; i++){
                    cout<<valores[i]<<": "<<cantidad[i]<<endl;
                }

                if (cantidad_ing>0){
                    cout<<"faltante: "<< cantidad_ing<<endl;
                }
        }
        break;
        case 2:{
            const int tamaño = 200;
            char letras[tamaño];

            srand(static_cast<unsigned int>(time(nullptr)));
            for (int i=0; i<tamaño; i++){
                letras[i] = 'A' + rand() % 26;
            }

            cout<<"Arreglo de letras ";
            for (int i=0; i<tamaño; i++){
                cout<<letras[i];
            }
            cout<<endl;

            int repeteciones[26]= {0};

            for (int i=0; i<tamaño; i++){
                ++repeteciones[letras[i]-'A'];
            }

            for (int i=0; i<26; i++){
                if (repeteciones[i]>0){
                    cout<<static_cast<char>('A'+i)<<": "<<repeteciones[i]<<endl;
                }
            }
        }
        break;
        case 3:
        {
            const char* cadena1="hola";
            const char* cadena2="hola";
            if (compararpalabra(cadena1,cadena2)){
                cout<<"las cadenas 1 y 2 son iguales."<<endl;
            }
            else {
                cout<<"Las cadenas 1 y 2 son diferentes."<<endl;
            }

        }
        break;
        case 4:
        {
            char cad[]= "123";
            int a = cadenaAentero(cad);
            cout<<"el numero es: "<<a<<endl;

        }
        break;
        case 5:
        {
            int a = 13342;
            char* cad;

            enteroAcadena(a, cad);

            cout<<"el numero es: "<<cad<<endl;

            delete [] cad;
        }
        break;
        case 6:
        {

        }
        break;
        case 7:
        {

        }
        break;
        case 8:
        {

        }
        break;
        case 9:
        {

        }
        break;
        case 10:
        {

        }
        break;
        case 11:
        {

        }
        break;
        case 12:
        {

        }
        break;
        case 13:
        {

        break;
        case 14:
        {

        }
        break;
        case 15:
        {

        }
        break;
        case 16:
        {

        }
        break;
        case 17:
        {

        }
        break;
        case 18:
        {

        }
        break;
        default:
            if (opcion!=0)
                cout<<"opcion no valida"<<endl;
            break;
        }
    }
    return 0;
    }
}


bool compararpalabra(const char* pal1, const char* pal2) {
    for (; *pal1 && *pal2 && *pal1 == *pal2; pal1++, pal2++) {
    }
    return (*pal1 == '\0' && *pal2 == '\0');
}

int cadenaAentero(char cadena[]){
    int i=0, n=0;
    while (cadena[i] != '\0'){
        n = 10*n + (cadena[i]- '0' );
        i++;
    }
    return n;
}

void enteroAcadena(int num,char*& arreglo){
    int tama = 0;

    int temp = num;
    while (temp /= 10){
        tama++;
    }

    arreglo = new char [tama + 1];
    int i = 0;

    do{
        arreglo[i++] = num % 10 + '0';
        num /= 10;
    }
    while (num != 0);
    arreglo[i] ='\0';

}
