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
        void    setLastName(string LastName)
        void    setNickName(string NickName);
        void    setPhoneNumber(string PhoneNumber);
        void    setDarkestsecret(string Darkestsecret);
        /*geters*/
        string  getFirstName();
        string  getLastName();
        string  getNickName();
        string  getPhoneNumber();
        string  getDarkestsecret();
    

}
class PhoneBook
{
    public:
    

    public: PhoneBook(int a, int b){
            this->a = a;
            this->b = b;
        }
    int geta()
    {
        return a;
    }
};

int  main()
{
    cout << "__welcome to My the awesome phonebook__" << endl;
    
}