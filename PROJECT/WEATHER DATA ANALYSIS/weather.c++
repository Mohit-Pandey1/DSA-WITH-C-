#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct WeatherData{
    string city;
    int temperature;
    int humidity;
};

void displayWeather(const vector<WeatherData>& data){
    cout<<" \nCity\tTemperature\tHumidity\n";
    for(const auto& entry : data){
        cout<< entry.city << "\t" << entry.temperature <<"\t\t" << entry.humidity << "\n";
    }
}

double calculateAvgTemp(const vector<WeatherData>& data){
    int sum = 0;
    for(const auto& entry : data){
        sum += entry.temperature;
    }
    return static_cast<double>(sum) / data.size();
}

void sortByTemp(vector<WeatherData>& data){
    sort(data.begin(), data.end(), [](const WeatherData& a, const WeatherData& b){
        return a.temperature < b.temperature;
    });
}

void searchCity(const vector<WeatherData>& data, const string& city){
    auto it = find_if(data.begin(), data.end(), [&](const WeatherData& entry) {
        return entry.city == city;
    });
    if(it != data.end()) {
        cout<< "City: " << it->city << ", Temperature: "<< it->temperature << ", Humidity: "<< it->humidity << "\n";
    }
    else{
        cout<< "City not found in the records." << endl;
    }
}

int main(){
    vector<WeatherData> weatherData;
    int choice;

    do{
        cout<< "\nWeather Data Analysis\n";
        cout<<"1. Add Weather Data\n";
        cout<<"2. Display All Weather Data\n";
        cout<<"3. Calculate Average Temperature\n";
        cout<<"4. Sort by Temperature\n";
        cout<<"5. Search for a City\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1: {
                WeatherData entry;
                cout<< "Enter city name: ";
                cin>>entry.city;
                cout<< "Enter temperature: ";
                cin>>entry.temperature;
                cout<<"Enter humidity: ";
                cin>>entry.humidity;
                weatherData.push_back(entry);
                break;
            }

            case 2: {
                displayWeather(weatherData);
                break;
            }

            case 3: {
                double avgTemp = calculateAvgTemp(weatherData);
                cout<< "Average Temperature: " << avgTemp<< "\n";
                break;
            }

            case 4:{
                sortByTemp(weatherData);
                cout<<"Data sorted by temperature."<<endl;
                break;
            }

            case 5: {
                string city;
                cout<<"Enter city name to search: ";
                cin>>city;
                searchCity(weatherData, city);
                break;
            }

            case 6: {
                cout<< "Exiting..."<<endl;
                break;
            }

            default:
                cout<<"Invalid choice. Try again." << endl;
        }
    } while(choice != 6);
    return 0;
}