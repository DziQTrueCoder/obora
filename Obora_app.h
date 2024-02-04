void logowanie();

void rejestracja();

 int main()
{
	int pick;
	bool pick1;
	cout << "Witam w programie obora" << endl;
	cout << "Wybierz czy chcesz byæ w trybie demo" << endl;
	cin >> pick1;
	if (pick1 = 'F')
	{
		logowanie_online();
	}
	if (pick == 'T')
	{
		logowanie_lokalne();
	}

	cin >> pick;
	if (pick == 1)
	{
		logowanie_lokalne();
	}
	if (pick != 1 && pick == 2)
	{
		rejestracja_lokalne();
	}
	if (pick == 3)
	{
		connect_to_database();
	}


}

void program();

void docx_or_else_to_sql();

void data_from_irz_plus_to_sql();
