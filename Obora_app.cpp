
#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <winsock.h>
#include <vector>
#include <locale>
#include <sstream>
#include <filesystem>
#include "Obora_app.h"
#include <stdexcept>
#include "mysql-connector-c++-8.2.0-winx64/include/jdbc/mysql_connection.h"
#include "mysql-connector-c++-8.2.0-winx64/include/jdbc/cppconn/driver.h"
#include "mysql-connector-c++-8.2.0-winx64/include/jdbc/cppconn/exception.h"
#include "mysql-connector-c++-8.2.0-winx64/include/jdbc/cppconn/resultset.h"
#include "mysql-connector-c++-8.2.0-winx64/include/jdbc/cppconn/statement.h"
#include "lib/mysql-connector-c++-8.2.0-winx64/include/jdbc/cppconn/prepared_statement.h"
#include "lib/chilkat-9.5.0-x86-vc2022/include/CkHttp.h"
#include "lib/chilkat-9.5.0-x86-vc2022/include/CkHttpRequest.h"
#include "lib/chilkat-9.5.0-x86-vc2022/include/CkHttpResponse.h"
#include "lib/chilkat-9.5.0-x86-vc2022/include/CKGlobal.h"


#define e  aserror

#define EXAMPLE_HOST "localhost"
#define EXAMPLE_USER "root"
#define EXAMPLE_PASS ""
#define EXAMPLE_DB "dane"
// #include <>

using namespace std;

int main() {
	int pick;
	int pick1;
	cout << "Wybierz gdzie chcesz przej?? " << endl;
	cin >> pick;
	cin >> pick1;
	if (pick == 1 && pick1 == 1)
	{
		logowanie_online(); // w trakcie robienia 
	}
	if (pick == 1 && pick1 == 2)
	{
		rejestracja(); // w trakcie 

	}
	if (pick == 2 && pick1 == 1)
	{
		logowanie_lokalne();
	}
	if (pick == 2 && pick1 == 2)
	{
		rejestracja();
	}
	else {
		return 0;
	}
}
void logowanie_lokalne() {
	string password;
	string password_r;
	string email;
	cout << "Witaj w logowaniu do aplikacji obora" << endl;
	cout << "Wpisz email" << endl;
	cin >> email;
	cout << "Wpisz has?o" << endl;
	cin >> password;
	cout << "Powt?rz has?o " << endl;
	cin >> password_r;
	if (password == password_r)
	{
		program();
	}
}
void logowanie_online(void)
{
	
		// This example requires the Chilkat API to have been previously unlocked.
		// See Global Unlock Sample for sample code.

		CkHttp http;

		// Let's begin by building an HTTP request to mimic the form.  
		// We must add the parameters, and set the path.
		CkHttpRequest req;
		req.AddParam("username", "mylogin");
		req.AddParam("password", "mypassword");
		req.AddParam("redirectto", "/panel.php");

		// The path part of the POST URL is obtained from the "action" attribute of the HTML form tag.
		req.put_Path("/checker.php");

		req.put_HttpVerb("POST");
		http.put_FollowRedirects(true);

		// Collect cookies in-memory and re-send in subsequent HTTP requests, including any redirects.
		http.put_SendCookies(true);
		http.put_SaveCookies(true);
		http.put_CookieDir("memory");

		CkHttpResponse* resp = 0;
		resp = http.SynchronousRequest("localhost", 443, true, req);
		if (http.get_LastMethodSuccess() != true) {
			cout << http.lastErrorText() << "\r\n";
			return;
		}

		// The HTTP response object can be examined.
		// To get the HTML of the response, examine the BodyStr property (assuming the POST returns HTML)
		const char* strHtml = resp->bodyStr();

		delete resp;
	


}
	
void rejestracja_lokalne() {
	string password;
	string password_r;
	string email;
	cout << "Wpisz adres mailowy " << endl;
	cin >> email;
	cout << "Wpisz has?o " << endl;
	cin >> password;
	cout << "Powt?rz has?o" << endl;
	cin >> password_r;
	while (password != password_r)
	{
		cout << "Has?a nie s? takie same " << endl;

		cin >> password;
		cin >> password_r;
	}
	if (password == password_r)
	{
		logowanie();
	};
}
	
	void program()
	{
		int pick1;
		cout << "Jeste? nowym u?ytkownikiem ? " << endl;
		cout << "Chcesz zaimportowa? swoje dane z IRZ plus ? " << endl;
		cin >> pick1;
		if (pick1 == 1)
		{
			data_from_irz_plus_to_sql();

		}
		if (pick1 == 2)
		{
			docx_or_else_to_sql();
		}
		if (pick1 == 3)
		{
			
		};
	}
	void docx_or_else_to_sql() // to p?niej
	{
		cout << "Zostanie to dodane w p?niejszej wersji programu" << endl;
	}
	void data_from_irz_plus_to_sql()
	{
		cout << "Zostanie to dodane w p?niejszej wersji programu" << endl;
	}
	void wpisz()
	{
		string url;
	};
	void mam_juz_dane(int argc, const char** argv)
	{


	};
	int connect_to_database(int argc, const char** argv)
	{
	
	}
	void rejestracja_online()
	{

	}
	void rejestracja()
		{

		);
		void check_that_library_is_ok(); 
		{

			
			
				// The Chilkat API can be unlocked for a fully-functional 30-day trial by passing any
				// string to the UnlockBundle method.  A program can unlock once at the start. Once unlocked,
				// all subsequently instantiated objects are created in the unlocked state. 
				// 
				// After licensing Chilkat, replace the "Anything for 30-day trial" with the purchased unlock code.
				// To verify the purchased unlock code was recognized, examine the contents of the LastErrorText
				// property after unlocking.  For example:
				CkGlobal glob;
				bool success = glob.UnlockBundle("Anything for 30-day trial");
				if (success != true) {
					cout << glob.lastErrorText() << "\r\n";
					return;
				}

				int status = glob.get_UnlockStatus();
				if (status == 2) {
					cout << "Unlocked using purchased unlock code." << "\r\n";
				}
				else {
					cout << "Unlocked in trial mode." << "\r\n";
				}

				// The LastErrorText can be examined in the success case to see if it was unlocked in
				// trial more, or with a purchased unlock code.
				cout << glob.lastErrorText() << "\r\n";

		}



		// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
		// Debug program: F5 or Debug > Start Debugging menu

		// Tips for Getting Started: 
		//   1. Use the Solution Explorer window to add/manage files
		//   2. Use the Team Explorer window to connect to source control
		//   3. Use the Output window to see build output and other messages
		//   4. Use the Error List window to view errors
		//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
		//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
			;
