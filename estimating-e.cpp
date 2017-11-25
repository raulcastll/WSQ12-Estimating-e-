#include <iostream>
#include <cmath>
using namespace std;
#define _USE_MATH_DEFINES

void pregunta_Precision (float& Precision){
  cout<<"porfavor dime cuantos decimales de precision quieres: "<<endl;
  cin>>Precision;
   if(Precision<=0){
     cout<<"no puedo darte una precision igual a sero o menor a eso, mete de nuevo que valor quieres"<<endl;
     pregunta_Precision(Precision);
   }
}

float factorial(float numerofactorial){
  float resultado=1;
  if(numerofactorial==0){
    resultado=1;
  }else{
    resultado=numerofactorial;
    numerofactorial-=1;
    for(;numerofactorial>0;--numerofactorial){
      resultado=resultado*numerofactorial;
    }
  }

return resultado;
}

float calculate_e (float Precision){
    float nloops=Precision+4, resultado=0, proceso=0;
    for(;nloops>=0;--nloops){
      proceso=1/factorial(nloops);
      resultado=resultado+proceso;
    }
return resultado;
}

int main(){
  float Precision=0, resultado=0;
  pregunta_Precision(Precision);
  resultado=calculate_e(Precision);
  cout.precision(Precision);
  cout<<"El valor de euler con el numero que pides es: "<<resultado<<endl;
}
