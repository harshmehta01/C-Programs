#include<iostream>
#include<string.h>
using namespace std;
class books
{
    char title[30],tit[30];
    char author[30],aut[30];
    char publisher[30];
    float price;
    int stock;
    
    public: 
    void getdata();
    void display();
    void buybook();
    int search(char[],char[]);
};
void books::getdata()
{
    cin.ignore();
    cout<<"\nEnter Title of the book: "; 
    cin.getline(title,30);
    cout<<"Enter name of the Author: "; 
    cin.getline(author,30);
    cout<<"Enter name of the Publisher: "; 
    cin.getline(publisher,30); 
    cout<<"Enter the Price: "; 
    cin>>price; 
    cout<<"Enter stock available: "; 
    cin>>stock;
}
void books::display()
{
    cout<<"\nTitle: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Publisher: "<<publisher<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Stock Available: "<<stock<<endl;
}
void books::buybook()
{
    int num;
    cout<<"Enter the number of copies you want to buy: ";
    cin>>num;
    if(num<=stock)
    {
        cout<<"\nBook is available";
        cout<<"\nCost of "<<num<<" books is Rs."<<(price*num)<<endl;
        cout<<"Updated stock is: "<<stock-num<<endl;
        stock=stock-num;
    }
    else
    {
        cout<<"\nRequired copies are not in stock\n";
    }
}
int books::search(char tit[30], char aut[30])
{
    if (strcmp(tit,title)==0 && strcmp(aut,author)==0)
    {
        return 1; 
    }
    else
    {
        return 0;
    }
}
int main()
{
    books b[50];
    int i,j,n,num,stock,choice;
    char title[30],author[30];
    cout<<"Enter the number of entries you want to do: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        b[i].getdata();
    }
    while(1)
    {
        cout << "\nMENU"
        << "\n1. Display the details"
        << "\n2. Search for book"
        << "\n3. Exit"
        << "\nEnter your Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            for(i=0;i<n;i++)
            {
                b[i].display();
            }
            break;
            case 2:
            cin.ignore();
            cout<<"\nEnter the following details to search for book:\n";
            cout<<"Enter the title of book: ";
            cin.getline(title,30);
            cout<<"Enter the name of author: ";
            cin.getline(author,30);
            for(i=0;i<n;i++)
            {
                j=b[i].search(title,author);
                if(j==1)
                {
                    b[i].buybook();
                    b[i].display();
                }
            }
            break;
            case 3:
            exit(0);
            default:
            cout << "\nInvalid choice entered";
        }
    }
    return 0; 
}
