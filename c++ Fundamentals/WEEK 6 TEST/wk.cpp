#include<iostream>
#include<string>
//#include<vector>
using namespace std;

class Book{
    public:
    string book_title;
    string Author;
    int number_of_copies;

    
    

    
    void inputDetails(){
        cout<<"WELCOME TO OUR BOOK SYSTEM"<<endl;
        cout<<"============================"<<endl;
        cout<<"enter the book title"<<endl;
        getline(cin>>ws, book_title);
        cout<<"enter the book author"<<endl;
        getline(cin, Author);
        cout<<"enter the number of copies available"<<endl;
        cin>>number_of_copies;
        if (number_of_copies <=0)
        {
            cout<<"invalid number of copies"<<endl;
        }else{
            cout<<"books added successfully"<<endl;
        }
        


        
    }
 void borrowBook(){
        int books_borrowed;

         cout<<"enter the amount of books you want to borrow"<<endl;
        cin>>books_borrowed;

        if (books_borrowed > number_of_copies || books_borrowed<=0)
        {
            cout<<"you cannot borrow more than this no of copies:"<<number_of_copies<<endl;
            
        }else{
            number_of_copies-=books_borrowed;

            cout<<"number of copies available: "<<number_of_copies<<endl;
            
        }
        
    
    }
    void displayBookDetails(){
        cout<<"BOOK SYSTEM DETAILS OF A BOOK"<<endl;
        cout<<"============================="<<endl;
        cout<<"Book title: "<<book_title<<endl;
        cout<<"Book Author: "<<Author<<endl;
        if(number_of_copies==0){
            cout<<"no copies available"<<endl;
        }else{
            
            cout<<"number of copies available: "<<number_of_copies<<endl;
        }
        cout<<"============================="<<endl;
    }
        

};

int main(){
    Book book1;
    int choices;

     do
         {
            cout<<"WELCOME DEAR GUEST TO OUR BOOK SYSTEM"<<endl;
            cout<<"1.register_books"<<endl;
            cout<<"2.borrow_books"<<endl;
            cout<<"3.display_book_details"<<endl;
            cout<<"4.exit"<<endl;
            
            cin>>choices;

            switch (choices)
            {
            case 1:
               book1.inputDetails();
               break;
            case 2:
               book1.borrowBook(); 
               break;
            case 3:
               book1.displayBookDetails();
               break;
            case 4:
              cout<<"thank you for joining the book sysytem we are happy to join you again"<<endl;
              break;   
        
            default:
             cout<<"invalid response"<<endl;
                break;
            }
            
         } while (choices!=4);
}

