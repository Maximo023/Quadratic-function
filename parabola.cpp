
#include <iostream>
#include <cmath>

using namespace std;

float coef,a,b,c;

void pedirDatos(){

    do{
    cout << "\n Digite el coeficiente = ";
    cin >> coef;

    if(coef == 0){
        cout << "\n Digite un numero valido!";
    }
    }while(coef == 0);

    cout << "\n Digite a = ";
    cin >> a;

    cout << "\n Digite b = ";
    cin >> b;

    cout << "\n Digite c = ";
    cin >> c;

    if(coef != 0){
        a *= coef;
        b *= coef;
        c *= coef;
    }
}

void parabola(float,float,float,float);

int main(){

    pedirDatos();
    parabola(coef,a,b,c);
  

    return 0;
}

void parabola(float coef, float a, float b, float c){
    float d, x1,x2, d1,d2;
    float xv, yv;

    if(((b*b)-4*a*c) > 0){
       x1 = (-b + sqrt((b*b)-4*a*c))/2*a;
       x2 = (-b - sqrt((b*b)-4*a*c))/2*a;
    } else {
        cout << "\n No toca el eje x";
    }

    cout << x1 << endl;
    cout << x2 << endl;
    
     d =  (abs(x2  - x1)) / 2;

    if(x1 > 0){
        d1 = x1 - d;
    } else {
        d1 = x1 + d;
    }

    if(x2 > 0){
        d2 = x2 - d;
    } else {
        d2 = x2 + d;
    }

    if(d1 == d2){
        xv = d1;
    }

    yv = a*(xv*xv)+b*xv+c;

    cout << "\n Ecuacion de la parabola = (" << a << ")x^2 + (" << b << ")x + (" << c << ")";
    cout << "\n Canonica de la parabola = " << coef << "(x - " << xv << ")^2+ (" << yv << ")";
    cout << "\n Forma factorizada de la parabola = " << coef << "( x - (" << x1 << "))( x - (" << x2 << "))";

    cout << "\n Intersecciones de x = ";
    cout << "\n X1 = " << x1;
    cout << "\n X2 = " << x2;

    cout << "\n Intersecciones de y = ";
    cout << "\n y = " << c;

    cout << "\n Vertice de la parabola = ";
    cout << "\n Xv = " << xv;
    cout << "\n Yv = " << yv;

    cout << "\n Estado de la parabola = ";

    if(a < 0){
        cout << "\n decreciente";
    } else {
        cout << "\n creciente";
    }
    
   
}
