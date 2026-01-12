#include <iostream>
using namespace std;

class MobileUser{
    public :
        string username;
        long mobileNum;
        string address;

        void accept();
        void display();
};

void MobileUser::accept(){
    cout << "Enter Username: ";
    cin >> username;
    
    cout << "Enter Mobile number: ";
    cin >> mobileNum;

    cout << "Enter Address: ";
    cin >> address;

    cout << "\n";
}

void MobileUser::display(){
    cout << "Username: " << username;
    cout << "\nMobile Number: " << mobileNum;
    cout << "\nAddress: " << address << "\n\n";
}

void linearSearch(MobileUser db[], int n, string key){
    for(int i = 0; i < n; i++){
        if(db[i].username == key){
            cout << "User Exists\n";
            db[i].display();
            return;
        }
    }

    cout << "User does not exist\n";
}

void bubble(MobileUser db[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(db[j].username > db[j + 1].username){
                MobileUser t = db[j];
                db[j] = db[j + 1];
                db[j + 1] = t;
            }
        }
    }
}

int main(){
    cout << "Hello World\n";
    int n;
    cout << "Enter number of users: ";
    cin >> n;
    MobileUser db[n];

    for(int i = 0; i < n; i++){
        db[i].accept();
    }

    for(int i = 0; i < n; i++){
        db[i].display();
    }

    cout << "Enter Username to search: ";
    string key;
    cin >> key;
    linearSearch(db, n, key);

    return(0);
}
