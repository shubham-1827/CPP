#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

class CricketTeam {
 private:
  string team_name;
  int team_position;
  float team_value;

  class Cricketer {
   private:
    string name;
    int age;
    int no_of_matches;
    int total_runs;
    float avg_runs;
    string team;

   public:
    Cricketer(string name, int age, int matches, int total_runs, int avg_runs,
              string team)
        : name(name),
          age(age),
          no_of_matches(matches),
          total_runs(total_runs),
          avg_runs(avg_runs),
          team(team) {}

    void cricketer_info() {
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Matches Played : " << no_of_matches << endl;
      cout << "Total Runs : " << total_runs << endl;
      cout << "Average Runs : " << avg_runs << endl;
      cout << "Plays for : " << team << endl;
    }
  };
  vector<Cricketer> *players;

 public:
  CricketTeam(string team_name, int team_position, float team_value)
      : team_name(team_name),
        team_position(team_position),
        team_value(team_value) {
    players = new vector<Cricketer>();
    add_cricketers();
  }
  void add_cricketers() {
    int n;
    cout << "Enter the Number of Cricketers to add to the team : ";
    cin >> n;

    string name;
    int age;
    int matches;
    int total_runs;
    float avg_runs;
    for ( int i = 1; i <= n; i++ ) {
      cout << "Enter name of Cricketer " << i << " : ";
      // this clear the whole line which may have \n if cin is called before getline() anywhere
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      getline(cin, name);
      cout << "Enter the age : ";
      cin >> age;
      cout << "Enter the total matches played : ";
      cin >> matches;
      cout << "Enter the Total Runs : ";
      cin >> total_runs;
      cout << "Enter the Avg Runs : ";
      cin >> avg_runs;
      Cricketer c(name, age, matches, total_runs, avg_runs, team_name);
      players->push_back(c);
      cout << endl;
    }
  }

  void team_info() {
    cout << "The team information for Team " << team_name << endl << endl;
    cout << "Team Name : " << team_name << endl;
    cout << "Team Position in league : " << team_position << endl;
    cout << "Team Value : Rs. " << team_value << endl;
    cout << endl << "All the Cricketers in the Team : " << endl;
    for ( int i = 0; i < players->size(); i++ ) {
      // dereference first then access
      (*players)[i].cricketer_info();
      cout << "------------------------------" << endl;
    }
  }
};
int main() {
  CricketTeam india("India", 2, 1200000);

  cout << endl;
  india.team_info();

  return 0;
}
