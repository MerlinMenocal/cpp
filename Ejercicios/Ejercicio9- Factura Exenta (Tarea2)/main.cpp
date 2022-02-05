#include <iostream>
//#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//Datos de entrada
    double subtotal =0, total = 0;
    double impuesto = 0.15;  //constante
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char facturaExenta = 'S';
    
    cout<<"Ingrese el subtotal de la factura: ";
    cin>>subtotal;
    
    cout<<"Ingrese el Descuento (0,10, 15, 20): ";
    cin>>descuento;
    cout<<endl;

    cout<<"La factura esta Exenta de de Impuesto?"<<endl<<endl;
    cout<<"Si la respuesta es SI, escriba S/s"<<endl;
    cout<<"Si la respuesta es NO, escriba N/n"<<endl;
    cin>>facturaExenta;
    
if (facturaExenta =='s' || facturaExenta == 'S')
{
    calculoImpuesto = 0;
    total = subtotal;
}else{
    if (facturaExenta =='n'|| facturaExenta == 'N')
    {
       cout<<fixed<<setprecision(4);
       calculoDescuento = (subtotal * descuento) / 100;
       calculoImpuesto = (subtotal - calculoDescuento ) * 0.15;
       total = subtotal - calculoDescuento + calculoImpuesto;
       cout<<"Su Descuento es de: "<<calculoDescuento<<endl;
       cout<<"Total Impuesto es: "<<calculoImpuesto;
     }else{
        cout<<"Ingreso un valor no Válido!"; //si ingresa una letra diferente a S/s o N/n
        }
     }
        
    //salida
    cout<<endl;
    cout<<"Total a pagar es: "<<total;
    
	return 0;
}
