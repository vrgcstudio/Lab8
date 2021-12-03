#include <iostream>
using namespace std;

int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;

    cout << "?????: ";
    string name;
    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;

    cout << name << ": ";
    int id;
    cin >> id;

    int gen_result;
    gen_result = (id - 120000000) / 10000000;

    cout << "Fahsai: I think you may be GEAR " << gen_result << ". I have a free movie ticket for you." << endl;

    cout << "Fahsai: Let's go to the cinema together!!!" << endl;

    cout << "Fahsai: What movie do you want to watch?" << endl;

    cin.ignore();

    cout << name << ": ";
    string movie;
    getline(cin, movie);

    cout << "Fahsai: So....which day are you free to go with me?" << endl;

    cout << name << ": ";
    string movie_date;
    getline(cin, movie_date);

    cout << "Fahsai: " << movie_date << "....that is OK!!! I'm looking forward to watching ";
    cout << movie << " with you." << endl;

    cout << name << ": ";
    string saybye;
    getline(cin, saybye);

    cout << "Fahsai: 555+ see you " << movie_date << ". Bye Bye " << "\\" << "(^ ^)/";

    return 0;
}
