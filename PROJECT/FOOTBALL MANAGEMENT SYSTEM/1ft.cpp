#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Player{
publiv:
    int id;
    string name;
    string position;
    int goals;
    int assists;

    Player(int id, string name, string position, int goals, int assists)
}


class FootballTeam{
private:
    vector<Player> roster;
    int nextId;
};



int main() {
    FootballTeam team;
    int choice;

    do{
        cout<<"\nFootball Team Management System\n";
        cout<<"1. Add Player\n";
        cout<<"2. Remove Player\n";
        cout<<"3. Display Team Roster\n";
        cout<<"4. Search by Position\n";
        cout<<"5. Save Team to file\n";
        cout<<"6. Load Team from File\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:{
                string name, position;
                int goals, assists;
                cout<< "Enter Player Name: ";
                cin>>name;
                cout<< "Enter Player Position: ";
                cin>>position;
                cout<<"Enter goals: ";
                cin>>goals;
                cout<<"Enter Assists: ";
                cin>>assists;
                team.addPlayer(name, position, goals, assists);
                break;
            }
            case 2:{
                int id;
                cout<<"Enter Player ID to Remove: ";
                cin>>id;
                team>removePlayer(id);
                break;
            }
            case 3: {
                team.displayRoster();
                break;
            }
            case 4: {
                string position;
                cout<< "Enter Position to Search: ";
                cin>>position;
                team.searchByPosition(position);
                break;
            }
            case 5: {
                team.saveTofile();
                break;
            }
            case 6: {
                team.loadtoFIle();
                break;
            }
            case 7: {
                cout<<"Exiting Program.\n";
                break;
            }
            default:
            cout<<"Invalid choice! Please try again.\n";
        }
    }
    while(choice != 7);
    return 0;
} 