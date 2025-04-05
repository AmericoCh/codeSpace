#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

#include <cmath>

using namespace std;

int main(){

    
    srand(x)   // Inicializa el generador de números aleatorios con una "semilla"
    rand()     // Genera un número entero aleatorio


    int num = 5; // Inicialización por copia

    int num; // Variable sin inicializar
    num = 5; // Asignación del valor 5 a num

    double x = 1.5;​
    int n = 3*x;​
    int num{5};
    int num1{}; // Inicializa a 0
    int num2{3.3};  // Error

    int x = 10;
    x += 5;  // equivale a x = x + 10;
    x *= 2;  // equivale a x = x * 10;
    x -= 10; // equivale a x = x - 10;
    x /= 2;  // equivale a x = x/2; 

    double x;
    x = 1 / 2;
    1 % 2.0;  // Error

    i++;
    j--;
   

+  // Suma  
-  // Resta  
*  // Multiplicación  
/  // División  
%  // Módulo (residuo)

int a = 10, b = 3;
int suma = a + b;
int resto = a % b;


==  // Igual  
!=  // Diferente  
>   // Mayor  
<   // Menor  
>=  // Mayor o igual  
<=  // Menor o igual


&&  // Y lógico (AND)  
||  // O lógico (OR)  
!   // Negación lógica (NOT)

int a = 10, b = 5;
(a == b)  // false (0)  
(a != b)  // true  (1)  
(a > b)   // true  (1)  
(a < b)   // false (0)  
(a >= 10) // true  (1)  
(b <= 4)  // false (0)

bool x = true;
bool y = false;
(x && y) // false (0)  
(x || y) // true  (1)  
(!x)     // false (0)  



int edad;
cout << "Ingresa tu edad: ";
cin >> edad;

cout << "Tu edad es: " << edad << endl;


sqrt(x)     // raíz cuadrada  
pow(a, b)   // potencia a^b  
abs(x)      // valor absoluto  
sin(x), cos(x), tan(x)  // funciones trigonométricas  
log(x), log10(x)        // logaritmos


}