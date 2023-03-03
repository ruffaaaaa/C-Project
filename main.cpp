#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string username, username_login;
    string password, password_login;
    string description, command, command2;
    int login_times = 3;

        cout << "\t || WELCOME! || \t";
        cout << endl;
        cout << "|| REGISTER || LOGIN || LOGOUT ||"<<endl<<"Choose: ";
        getline(cin, command);

        if(command == "REGISTER"){
          cout <<endl<<"--------------------"<<endl;
          cout << " || REGISTRATION || "<<endl<<"--------------------"<<endl;
          cout <<"Username: ";
          getline(cin, username);
          cout <<"Password  : ";
          getline(cin,password);
          cout <<"Description: ";
          getline(cin,description);

          cout << "\n\n";
          cout << "Successfully Registered!\n"<<endl;

          ofstream File("record_data.txt");
          File << "Username: " + username << "\n";
          File << "Password " + password << "\n";
          File << "Description: " + description << "\n";
          File.close();

          main ();


            while(login_times > 0){
              cout << endl<<"-------------"<<endl;
              cout << " || LOGIN || "<<endl<<"-------------"<<endl;
              cout << "\n";

              cout << "Username: ";
              cin >> username_login;
              cout << "Password: ";
              cin >> password_login;

              if(username_login == username && password_login == password){
              cout << "\n\n";
              cout << "Logged in Successfully!"<<endl;
              cout << "\n\n";
              cout << "Welcome "<<username<<"!\n";

              break;
              }

              else{
              cout << "Everything is Incorrect!"<<endl;
              login_times--;
              }

          }

        }
}
