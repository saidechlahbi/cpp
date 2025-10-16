#include <iostream>
#include <string>

using namespace std;

class Contact {
    private:
        string FirstName;
        string LastName;
        string NickName;
        string PhoneNumber;
        string DarkestSecret;
    public:
        /*constructor*/
        Contact(string FirstName, string LastName, string NickName, string PhoneNumber, 
                string Darkestsecret);
        /*seters*/
        void    setFirstName(string FirstName);
        void    setLastName(string LastName);
        void    setNickName(string NickName);
        void    setPhoneNumber(string PhoneNumber);
        void    setDarkestsecret(string Darkestsecret);
        /*geters*/
        string  getFirstName();
        string  getLastName();
        string  getNickName();
        string  getPhoneNumber();
        string  getDarkestsecret();
    

};
// class PhoneBook
// {
//     public:
    

//     public: PhoneBook(int a, int b){
//             this->a = a;
//             this->b = b;
//         }
//     int geta()
//     {
//         return a;
//     }
// };

int  main()
{
    // cout << "__welcome to My the awesome phonebook__" << endl;
    string a = "aaaaaaaaaaa";
    string b = "bbbbbbbbbbbbbb";
    string c = "cccccccccccccccc";
    string d = "ddddddddddddddd";
    string& ref = a;  // ref is another name for name
    ref = b; 
    ref = c; 
    ref = d; 

    cout << a<< endl; 
    cout <<  b  << endl;
     cout <<  c  << endl;
    cout <<  d  << endl;


}