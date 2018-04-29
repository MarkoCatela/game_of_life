#include "Game_of_life.h"
#include <string>
#include <ctime>

bool game_of_life::slucajna_vrijednost()
{
	int n = rand() % (4 - 1 + 1) + 1;
	if (n == 2)
	{
		return true;
	}
	return false;
}

bool game_of_life::celija_zauzeta(int i, int j)
{
	return _generacija[i][j];
	celija_zauzeta(i + 1, j + 1);
}

game_of_life::game_of_life()
{
	srand(time(nullptr));

	for (int i = 0; i < REDAKA; i++)
	{
		for (int j = 0; j < STUPACA; j++)
		{

			if (slucajna_vrijednost())
			{
				_generacija[i][j] = true;

			}

			else
			{
				_generacija[i][j] = false;
			}

		}
	}

}

void game_of_life::sljedeca_generacija()
{
	for (int i = 0; i < REDAKA; i++)
	{
		for (int j = 0; j < STUPACA; j++)
		{
			if (celija_zauzeta(i, j))
			{
				if (i == 0 && j == 0)
				{

					int brojac = 0;

					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}
				}
				
				else if (i == 0 && j == 39)
				{
					int brojac = 0;

					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}
				
				else if (i == 19 && j == 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}
				
				else if (i == 19 && j == 39)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}
				
				else if (i == 0 && j > 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}
				
				else if (i == 19 && j > 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}
				
				else if (i > 0 && j == 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}
				
				else if (i > 0 && j == 39)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 2 || brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}
				}
			}
			else
			{
				if (i == 0 && j == 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}

				else
					{
						_generacija[i][j] = false;
					}
				}

				else if (i == 0 && j == 39)
				{
					int brojac = 0;

					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else if (i == 19 && j == 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else if (i == 19 && j == 39)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else if (i == 0 && j > 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else if (i == 19 && j > 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else if (i > 0 && j == 0)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else if (i > 0 && j == 39)
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}

				}

				else
				{
					int brojac = 0;

					if (celija_zauzeta(i - 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						brojac++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						brojac++;
					}
					if (brojac == 3)
					{
						_generacija[i][j] = true;
					}
				else
					{
						_generacija[i][j] = false;
					}
				}

			}
		}

	}
}

void game_of_life::iscrtaj()
{
	for (int i = 0; i < REDAKA; i++)
	{
		for (int j = 0; j < STUPACA; j++)
		{

			if (_generacija[i][j])
			{
				cout << "*";
			}

			else
			{
				cout << "-";
			}
		}

		cout << endl;
	}

}
