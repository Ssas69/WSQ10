#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

float getTotal(float numbers[], int numNumbers){
    float answer=0.0;
    for(int i = 0; i < numNumbers; i++){
      answer += numbers[i];
    }
    return answer;
}
 float getAverage(float numbers[], int numNumbers){
      float answer=0.0;
    for(int i = 0; i < numNumbers; i++ ){
      answer += numbers[i];
    }
    answer = answer / numNumbers;
    return answer;
}
float getStdDev(float numbers[], int numNumbers){
    float varianza=0.0, answer=0.0, prom=0.0, dev=0.0;
    for(int i = 0; i < numNumbers; i++){
      answer += numbers[i];
    }
    prom = answer / numNumbers;
    for(int i = 0; i < numNumbers; i++){
      varianza = varianza + pow((numbers[i]-prom),2);
    }
   dev = sqrt(varianza/numNumbers);
  return dev;
}
    int main(){
      const int NUM_NUMBERS=10;
      float x[NUM_NUMBERS];
      for (int i = 0; i < NUM_NUMBERS; i++){
        cout << "Dame un número ";
        cin >> x[i];
      }
      float total = getTotal(x,10);
      float average = getAverage(x,10);
      float stdev = getStdDev(x,10);
    cout << "El total es: " << total << endl;
    cout << "El promedio es: " << average << endl;
    cout << "La desviación estándar es: " << stdev << endl;
}
