// Mohammad Samer AbuRoumi          ID:20250512     Section no.5

#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <windows.h>
using namespace std;

class Book {
	private:
	string title;
	string author;
	unsigned short numOfPages;
	string publisher;
public:
	Book(){
		title = "no title";
		author = "no author";
		numOfPages = 1;
		publisher = "No publisher";
	}
	void SetTitle(string intitle) {
		if (intitle == "") {
			cout << "Error\n";
			return;
		}
		else title = intitle;
	}
	void SetAuthor(string inAuthor) {
		if (inAuthor == "") {
			cout << "Error\n";
			author = "ANONYMOUS";
		}
		else author = inAuthor;

	}
	void SetNumOfPages(unsigned short inNumOfPages) {

		while (inNumOfPages < 1 || inNumOfPages > 2000) { 
			cout << "Error";
			cout << "Enter number of pages again: "; 
			cin >> inNumOfPages;                                                        
		}
		numOfPages = inNumOfPages;

	}
	void SetPublisher(string inPublisher) {
		if (inPublisher == "") {
			cout << "Error";
			publisher="UNKNOWN PUBLISHER";
		}
		else publisher=inPublisher;

	}

	string getTitle() const {
		return title;
	}
	string getAuthor() const {
		return author;
	}
	unsigned short getNumOfPages() const {
		return numOfPages;
	}
	string getPublisher() const {
		return publisher;
	}


	void show() const {
		cout << "Title :" << title << "\n";
		cout << "Author :" << author << "\n";
		cout << "Number of pages : " << numOfPages << "\n";
		cout << "Publisher : " << publisher << "\n";
	}


	
	void guess(){
		int randomNum = (rand() % 4) + 1;
		string userAns;
		if (randomNum == 1) {
			cout << "What was the title of the book??";
			getline(cin, userAns);
			if (is_Correct(userAns, 'T') == true) cout << "Wonderful! Your memory is a whole library";
			else cout << "Not quite, turn the page and try again next time";
		}
		else if (randomNum == 2) {
			cout << "Who wrote the book?";
			getline(cin, userAns);
			if (is_Correct(userAns,'A') == true) cout << "Wonderful! Your memory is a whole library";
			else cout << "Not quite, turn the page and try again next time";
		}
		else if (randomNum == 3) {
			cout << "How many pages did the book have???";
			getline(cin, userAns);
			if (is_Correct(userAns,'P') == true) cout << "Wonderful! Your memory is a whole library";
			else cout << "Not quite, turn the page and try again next time";
		}
		else if (randomNum == 4) {
			cout << ": Who published the book??";
			getline(cin, userAns);
			if (is_Correct(userAns,'U') == true) cout << "Wonderful! Your memory is a whole library";
			else cout << "Not quite, turn the page and try again next time";
		}

		
		




	}

	string toLowerString(string str) const {
		for (int i = 0; i < str.length(); i++) {
			str[i] = tolower(str[i]);
		}
		return str;
	}
	bool is_Correct(string ans, char mode) const {
		string lowString = toLowerString(ans);

		if (mode == 'T') {
			return lowString == toLowerString(title);
		}
		else if (mode == 'A') {
			return lowString == toLowerString(author);
		}
		else if (mode == 'P') {
			return lowString == to_string(numOfPages);
		}
		else if (mode == 'U') {
			return lowString == toLowerString(publisher);
		}
		else
		return false;



	}

};





int main() {
	int x;
	srand(time(0)); 

	Book myBook; 

	string tempTitle, tempAuthor, tempPublisher; 
	unsigned short tempPages;
	cout << "Enter book title: "; 
	getline(cin, tempTitle);      
	myBook.SetTitle(tempTitle);   
	cout << "Enter book author: "; 
	getline(cin, tempAuthor);     
	myBook.SetAuthor(tempAuthor);  

	cout << "Enter number of pages: "; 
	cin >> tempPages;                  
	myBook.SetNumOfPages(tempPages);   

	cout << "Enter book publisher: "; 
	getline(cin, tempPublisher);       
	if (tempPublisher == "") {         
		getline(cin, tempPublisher);   // this one is a solution to an error that occured me while running the program because sometimes it has an empty string
	}
	myBook.SetPublisher(tempPublisher);

	cout << "Book Details :::: \n"; 
	myBook.show();                    

	Sleep(5000);    
	system("CLS");  

	myBook.guess(); 

	return 0;
}
