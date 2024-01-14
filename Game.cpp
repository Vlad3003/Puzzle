#include "Game.h"

Game::Game(int fieldSize)
{
	setFieldSize(fieldSize);
	ReadBestTimeFromFile();
	ReadSavedGamesFromFile();
	ReadOptionsFromFile();
}

Game::~Game()
{
	if (nums)
	{
		delete[] nums;
	}
}

int Game::getFieldSize()
{
	return fieldSize;
}

void Game::setFieldSize(int fieldSize)
{
	this->fieldSize = fieldSize;
	btnSize = 540 / fieldSize;
	size = fieldSize * fieldSize;
}

int Game::getBtnSize()
{
	return btnSize;
}

int Game::getSize()
{
	return size;
}

bool Game::IsSolvable()
{
	int countInversions = 0; // количество инверсий

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size - 1; j++)
		{
			if (nums[i] > nums[j])
			{
				countInversions++;
			}
		}
	}

	return countInversions % 2 == 0;
}

bool Game::IsSolved()
{
	for (int i = 0; i < size - 1; i++)
	{
		if (nums[i + 1] < nums[i])
		{
			return false;
		}
	}

	gameOver = true;

	return true;
}

void Game::CreateGame(bool new_game)
{
	stopwatch = 0;
	gameOver = false;

	if (nums)
	{
		delete[] nums;
	}

	nums = new int[size];

	if (new_game)
	{

		for (int i = 0; i < size; i++)
		{
			nums[i] = i + 1;
		}

		do
		{
			shuffle();
		} while (!IsSolvable());
	}

	else
	{
		LoadGame();
	}
}

void Game::shuffle()
{
	srand(time(NULL));

	int n = size - 1, tmp;

	while (n > 1)
	{
		int i = rand() % n--; // индекс

		tmp = nums[i];
		nums[i] = nums[n];
		nums[n] = tmp;
	}
}

bool Game::GameIsOver()
{
	return gameOver;
}

void Game::WriteBestTimeToFile()
{
	FILE* f;
	f = fopen("info.dat", "wb");

	fwrite(&bestTime, sizeof(int), 4, f);
	fclose(f);
}

void Game::ReadBestTimeFromFile()
{
	FILE* f;
	f = fopen("info.dat", "rb");

	if (f)
	{
		fread(&bestTime, sizeof(int), 4, f);
		fclose(f);
	}
}

void Game::SaveGame()
{
	FILE* f;
	string filename = to_string(fieldSize) + ".dat"; // имя файла

	int numbers[36]; // массив целых чисел

	for (int i = 0; i < size; i++)
	{
		numbers[i] = nums[i];
	}
	
	f = fopen(filename.c_str(), "wb");

	fwrite(&numbers, sizeof(int), size, f);
	fwrite(&stopwatch, sizeof(int), 1, f);
	fclose(f);
}

void Game::LoadGame()
{
	FILE* f;
	string filename = to_string(fieldSize) + ".dat"; // имя файла

	int numbers[36]; // массив целых чисел

	f = fopen(filename.c_str(), "rb");

	fread(&numbers, sizeof(int), size, f);
	fread(&stopwatch, sizeof(int), 1, f);
	fclose(f);

	for (int i = 0; i < size; i++)
	{
		nums[i] = numbers[i];
	}
}

void Game::WriteSavedGamesToFile()
{
	FILE* f;
	f = fopen("data.dat", "wb");

	fwrite(&savedGames, sizeof(bool), 4, f);
	fclose(f);
}

void Game::ReadSavedGamesFromFile()
{
	FILE* f;
	f = fopen("data.dat", "rb");

	if (f)
	{
		fread(&savedGames, sizeof(bool), 4, f);
		fclose(f);
	}
}

void Game::WriteOptionsToFile()
{
	FILE* f;
	f = fopen("options.dat", "wb");

	fwrite(&options, sizeof(Game::Options), 1, f);
	fclose(f);
}

void Game::ReadOptionsFromFile()
{
	FILE* f;
	f = fopen("options.dat", "rb");

	if (f)
	{
		fread(&options, sizeof(Options), 1, f);
		fclose(f);
	}
}
