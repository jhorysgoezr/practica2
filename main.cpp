#include <iostream>
#include<cstdlib>

using namespace std;

bool compararpalabra(const char* pal1, const char* pal2);
int cadenaAentero(char cadena[]);
void enteroACadena(int num, char*& arreglo);
void PasarAmayus (char cad[]);
void eliminarPalabras (char* cadena);
void separarNumeros(const char* cadena, char* texto, char* numeros);

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

            enteroACadena(a, cad);

            cout<<"el numero es: "<<cad<<endl;

            delete [] cad;
        }
        break;
        case 6:
        {
            char cadena[]= "Man-zana";

            cout<<"Original: " <<cadena<< ". ";
            PasarAmayus(cadena);
            cout<<"En mayuscula: "<<cadena<<endl;


        }
        break;
        case 7:
        {
            char palabra[50];
            cout<<"Ingresa una palabra: ";
            cin>>palabra;
            eliminarPalabras(palabra);

        }
        break;
        case 8:
        {
            cout<<"ingrese una palabra: ";
            char input[100];
            cin>>input;

            int longitud = 0;
            while (input[longitud] != '\0' ){
                ++longitud;
            }
            char* texto = new char [longitud + 1];
            char* numeros = new char[longitud +1];

            separarNumeros(input,texto,numeros);

            cout<<"Original: "<<input<<endl;
            cout<<"Texto: "<<texto<<" numero: "<<numeros<<endl;

            delete[] texto;
            delete[] numeros;
        }
        break;
        case 9:
        {
            int n;
            cout<<"ingrese un numero n: ";
            cin>>n;

            char cadena[100];
            cout<<"ingrese una cadena de caracteres numericos: ";
            cin>>cadena;

            cout<<"Original: "<<cadena<<endl;

            int cadena_longitud = 0;
            while (cadena[cadena_longitud] != '\0'){
                cadena_longitud++;
            }

            while (cadena_longitud % n != 0 ){
                for (int i = cadena_longitud; i>0; i--){
                    cadena[i]= cadena[i-1];
                }
                cadena[0] = '0';
                cadena_longitud++;
            }

            int suma = 0;
            cout<<"Suma: ";
            for (int i=0; i<cadena_longitud; i += n ){
                char subcadena [10];
                for (int j = 0; j<n; j++){
                    subcadena[j] = cadena[i + j];
                }
                int numero = cadenaAentero(subcadena);
                suma += numero;
                if (numero == 0 && i>0 ){
                    cout<<"0";
                }
                else
                    cout<<numero;
                if (i<cadena_longitud - n)
                    cout<<"+";
            }
            cout<<" = "<<suma<<endl;
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



void enteroACadena(int num, char*& arreglo) {
    int tama = 1;
    int temp = num;

    while (temp /= 10) {
        tama++;
    }

    arreglo = new char[tama + 1];

    int i = tama - 1;

    do {
        arreglo[i--] = num % 10 + '0';
        num /= 10;
    } while (num != 0);

    arreglo[tama] = '\0';
}

void PasarAmayus (char cad[]){
    int i = 0;
    while (cad[i] != '\0' ){
        if (cad[i]>= 'a' && cad[i] <= 'z'){
            cad[i] = cad[i]-('a' -'A' );
        }
        i++;
    }
}

void eliminarPalabras (char* cadena){
    if (!cadena)
        return;

    int longitud = 0;
    char* temp = cadena;
    while (*temp){
        ++longitud;
        ++temp;
    }

    char* resultado = new char[longitud +1];
    char* tempResultado = resultado;
    char* ptr = cadena;

    while (*ptr){
        char* encontrado = resultado;
        bool repetido = false;

        while (*encontrado){
            if (*encontrado == *ptr){
                repetido = true;
                break;
            }
            ++encontrado;
        }
        if (!repetido){
            *tempResultado = *ptr;
            ++tempResultado;
        }
        ++ptr;
    }
    *tempResultado = '\0';
    cout<<"original: "<<cadena<<endl;
    cout<<"sin repeticiones: "<<resultado<<endl;

    delete[] resultado;
}

void separarNumeros(const char* cadena, char* texto, char* numeros){
    while (*cadena){
        if (*cadena >='0' && *cadena<= '9'){
            *numeros = *cadena;
            ++numeros;
        }
        else {
            *texto = *cadena;
            ++texto;
        }
        ++cadena;
    }
    *texto = '\0';
    *numeros = '\0';
}
