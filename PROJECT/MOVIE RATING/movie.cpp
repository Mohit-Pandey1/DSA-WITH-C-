#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


struct Movie{
    string name;
    string director;
    float rating;
};

void displayMovies(const vector<Movie>& movies){
    if(movies.empty()){
        cout<< "No movies available!\n";
        return;
    }
    cout<<"\nMovies list:\n";
    for(const auto& movie : movies){
        cout<<"Name: " << movie.name <<", Director: "<< movie.director<< ", Rating: " << movie.rating << endl;
    }
}

void addMovie(vector<Movie>& movies){
    Movie newMovie;
    cout<<"Enter movie name: ";
    cin.ignore();
    getline(cin, newMovie.name);
    cout<<"Enter director name: ";
    getline(cin, newMovie.director);
    cout<<"Enter movie rating (0 to 10): ";
    cin>> newMovie.rating;

    if(newMovie.rating < 0 || newMovie.rating > 10){
        cout<< "Invalid rating! Please enter a rating between 0 and 10.\n";
        return;
    }

    movies.push_back(newMovie);
    cout<< "Movie added successfully!";
}

void sortMoviesByRating(vector<Movie>& movies){
    sort(movies.begin(), movies.end(), [](const Movie& a, const Movie& b) {
        return a.rating > b.rating;
    });
    cout<< "Movies sorted by rating!\n";
}

void sortMoviesByname(vector<Movie>& movies){
    sort(movies.begin(), movies.end(), [](const Movie& a, const Movie& b){
        return a.name < b.name;
    });
    cout<< "Movies sorted by name!\n";
}

void searchMovies(const vector<Movie>& movies){
    if(movies.empty()) {
        cout<< "No movies available to search!\n";
        return;
    }

    cout<< "Enter the movie name to search: ";
    cin.ignore();
    string searchName;
    getline(cin, searchName);

    auto it = find_if(movies.begin(), movies.end(), [&searchName](const Movie& movie) {
        return movie.name == searchName;
    });

    if(it != movies.end()) {
        cout<< "Movie found!\n";
        cout<< "Name: "<< it->name<< ", Director: " << it->director << ", Rating: " << it->rating << endl;
    } 
    else{
        cout<< "Movie not found!\n";
    }
}

int main(){
    vector<Movie> movies;
    int choice;

    do{
        cout<<"\n-- Movie Rating and Sorting System --\n";
        cout<<"1. Add Movie\n";
        cout<<"2. Display Movies\n";
        cout<<"3. Sort Movies by Rating\n";
        cout<<"4. Sort Movies by Name\n";
        cout<<"5. Search for a Movie\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>> choice;

        switch( choice){
            case 1:
                addMovie(movies);
                break;
            case 2:
                displayMovies(movies);
                break;
            case 3:
                sortMoviesByRating(movies);
                break;
            case 4:
                sortMoviesByname(movies);
                break;
            case 5:
                searchMovies(movies);
                break;
            case 6:
                cout<<" Exiting the program. Goodbye!\n";
                break;
            default:
                cout<<"Invalid choice! Please try again.\n";
        }
    }while (choice!= 6);
    return 0;
}