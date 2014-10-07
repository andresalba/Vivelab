#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x;//variable que contiene el numero ingresado
    cout<<"Ingrese un a\xA4o entre 0 y 3000"<<endl;//pedimos ingresar un año entre 0 y 3000
    cin>>x;
  if((x<1)||(x>3000))
       cout<<"El a\xA4o esta fuera de rango"<<endl;//si el año no está entre 0 y 3000, lo informamos
  else
   {//aplicamos las reglas de los números romanos
        if(x==3000)//si es 3000
        {
        cout<<"M";//escribimos una M
        x=x-1000; //restamos 1000 y quedan 2000, en este caso entrará a la condicíón de ser 2000 y escribe el resto del número
        } 
        if(x>=2000)//si es 2000 o mayor
        {
        cout<<"M";//escribimos una M
        x=x-1000;//restamos mil y entrará a un caso en que el número sea menora 2000 o 0 y escribirá según ese caso  
        }   
        if(x>=1000)//si es 1000 o mayor 
        {
        cout<<"M";//sigue la misma lógica que con 3000, 2000 y los otros números hasta llegar a 0
        x=x-1000; 
        }
        if(x>=900)   
        {
        cout<<"CM";
        x=x-900; 
        }
        if(x>=500)   
        {
        cout<<"D";
        x=x-500; 
        }
        if(x>=400)   
        {
        cout<<"CD";
        x=x-400; 
        }
        if(x>=300)   
        {
        cout<<"C";
        x=x-100; 
        }
        if(x>=200)   
        {
        cout<<"C";
        x=x-100; 
        }
        if(x>=100)   
        {
        cout<<"C";
        x=x-100; 
        }
        if(x>=90)    
        {
        cout<<"XC";
        x=x-90;  
        }
        if(x>=50)    
        {
        cout<<"L";
        x=x-50;  
        }
        if(x>=40)    
        {
        cout<<"XL";
        x=x-40;  
        }
        if(x>=30)    
        {
        cout<<"X";
        x=x-10;  
        }
        if(x>=20)    
        {
        cout<<"X";
        x=x-10;  
        }
        if(x>=10)    
        {
        cout<<"X";
        x=x-10;  
        }
        if(x>=9) 
        {
        cout<<"IX";
        x=x-9;   
        }
        if(x>=5) 
        {
        cout<<"V";
        x=x-5;   
        }
        if(x>=4) 
        {
        cout<<"IV";
        x=x-4;   
        }
        if(x>=3) 
        {
        cout<<"III";
        x=x-3;     
        }
        if(x>=2) 
        {
        cout<<"II";
        x=x-2;   
        }
        if(x>=1) 
        {
        cout<<"I";
        x=x-1;   
        }
    }
   cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
