#include <iostream>
#include <limits>
using namespace std;

float celsiusToFahrenheit(float celsius){
  return (celsius * 9.0/5.0)+32.0;
}

float celsiusToKelvin(float celsius){
  return celsius+273.15;
}

float fahrenheitToCelsius(float fahrenheit){
  return (fahrenheit - 32.0)*5.0/9.0;
}

float kelvinToCelsius(float kelvin){
  return (kelvin - 273.15);
}

float fahrenheitToKelvin(float fahrenheit){
  return (fahrenheit - 32.0)*5.0/9.0 + 273.15;
}

float kelvinToFahrenheit(float kelvin){
  return (kelvin - 273.15)*9.0/5.0+32.0;
}

int displayMenu(){
  int choice;
  cout<<"\nWelcome!, To Temperature Converter: Here you can converte Temparature"<<endl;
  cout<<"Choose the conversion you want to perform:"<<endl;
  cout<<"1. Celsius to Fahrenheit" << endl;
  cout<<"2. Celsius to Kelvin";
  cout<<"3. Fahrenheit to Celsisus" << endl;
  cout<<"4. Kelvin to Celsius" << endl;
  cout<<"5. Fahrenheit to Kelvin" << endl;
  cout<<"6. Kelvin to Fahrenheit" << endl;
  cout<<"7. Exit " << endl;
  cout<<"Enter your choice (1-7): ";

  while(true){
    cin>>choice;
    if(cin.fail() || choice < 1 || choice > 7){
      cout<< " Invalid choice! Please enter a number between 1 & 7 : ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else{
        break;
    }
  }

  return choice;
}


float Temperature(){
  float temperature;
  cout<<"Enter the temperature: ";

  while(true){
    cin>>temperature;
    if(cin.fail()){
      cout<<"Invalid input! Please enter a valid temperature: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else{
        break;
    }
  }
  return temperature;
}

int main(){
  int choice;

  do{
    choice = displayMenu();
    if(choice==7){
      cout<<"Exiting the program. Thank you for using the Temparature Converter! "<<endl;
      break;
    }

    float temp = Temperature();

    switch(choice){
      case 1:
        cout << temp << " °C = " << celsiusToFahrenheit(temp) << " °F" << endl;
        break;
      case 2:
        cout << temp << " °C = " << celsiusToKelvin(temp) << " K" << endl;
        break;
      case 3:
        cout << temp << " °F = " << fahrenheitToCelsius(temp) << " °C" << endl;
        break;
      case 4:
        cout << temp << " K = " << kelvinToCelsius(temp) << " °C" << endl;
        break;
      case 5:
        cout << temp << " °F = " << fahrenheitToKelvin(temp) << " K" << endl;
        break;
      case 6:
        cout << temp << " K = " << kelvinToFahrenheit(temp) << " °F" << endl;
        break;
    }
  }while(true);
  return 0;
}