#include<iostream>
using namespace std;
class Personal_Record
{
    protected:
    char name[30],address[100],email[50];
    long int phone_no;
    
    public:
    void getdata1()
    {
        cout<<"------Enter your personal record------";
        cout<<"\nEnter your name: ";
        cin.getline(name,30);
        cout<<"Enter you address: ";
        cin.getline(address,100);
        cout<<"Enter your email address: ";
        cin.getline(email,50);
        cout<<"Enter your phone number: ";
        cin>>phone_no;
    }
    void display1()
    {
        cout<<"\n\n------Personal Record------";
        cout<<"\nName: "<<name;
        cout<<"\nAddress: "<<address;
        cout<<"\nEmail: "<<email;
        cout<<"\nPhone number: "<<phone_no;
    }
};
class Professional_Record
{
    protected:
    char cname[30],caddress[100];
    long int cphone_no;
    int experience;
    
    public:
    void getdata2()
    {
        cin.ignore();
        cout<<"\n------Enter your professional record------";
        cout<<"\nEnter your company name: ";
        cin.getline(cname,30);
        cout<<"Enter your company address: ";
        cin.getline(caddress,100);
        cout<<"Enter your company phone number: ";
        cin>>cphone_no;
        cout<<"Enter the year of your experience in field: ";
        cin>>experience;
    }
    void display2()
    {
        cout<<"\n\n------Professional Record------";
        cout<<"\nCompany Name: "<<cname;
        cout<<"\nCompany Address: "<<caddress;
        cout<<"\nCompany Phone number: "<<cphone_no;
        cout<<"\nExperience: "<<experience;
    }
};
class Academic_Record
{
    protected:
    char qualification[50],University_name[50];
    int percentage,passing_year;
    
    public:
    void getdata3()
    {
        cin.ignore();
        cout<<"\n------Enter your academic record------";
        cout<<"\nEnter your qualifications: ";
        cin.getline(qualification,50);
        cout<<"Enter your university name: ";
        cin.getline(University_name,50);
        cout<<"Enter your percentage: ";
        cin>>percentage;
        cout<<"Enter your passing year: ";
        cin>>passing_year;
    }
    void display3()
    {
        cout<<"\n\n------Academic Record------";
        cout<<"\nQualifications: "<<qualification;
        cout<<"\nUniversity Name: "<<University_name;
        cout<<"\nPercentage: "<<percentage;
        cout<<"\nPassing year: "<<passing_year;
    }
};
class Biodata:public Personal_Record,public Professional_Record,public Academic_Record
{
    public:
    void accept()
    {
        Personal_Record::getdata1();
        Professional_Record::getdata2();
        Academic_Record::getdata3();
    }
    void display()
    {
        Personal_Record::display1();
        Professional_Record::display2();
        Academic_Record::display3();
    }
};
int main()
{
    Biodata b1;
    b1.accept();
    b1.display();
}