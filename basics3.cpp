#include <iostream>
using namespace std;

//Class
class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

};

int main()
{
    
    //Objects
    Book book1("Harry Potter","JK rowling", 500);
    Book book2("LODR","Tolkein", 700);

    cout << book1.title << endl;
    cout << book2.title << endl;
    cout << book2.pages << endl;

    return 0;
}


