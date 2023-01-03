#include <iostream>

using namespace std;

double suma(double x, double y);
double resta(double x, double y);

int main(){
    double number1, number2;
    int opcion;

    cout<<"digite un numero"<<endl;
    cin>>number1;
    cout<<"digite otro numero"<<endl;
    cin>>number2;
    cout<<"1-para sumar 2-para restar"<<endl;
    cin>>opcion;

    if(opcion == 1){
        cout<<"la suma es: "<<suma(number1,number2);
    }
    if(opcion == 2){
        cout<<"la resta es: "<<resta(number1,number2);
    }


    return 0;
}

double suma(double x, double y){
    double adicion;
    adicion = x+y;
    return adicion;
}
double resta(double x, double y){
    double substraccion;
    substraccion = x+y;
    return substraccion;
}