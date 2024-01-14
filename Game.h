#pragma once
#include <fstream>
#include <random>
#include <time.h>
#include <string>
using namespace std;

class Game // класс Игра
{
private:
	int fieldSize; // размер поля
	int btnSize; // размер кнопки
	int size; // количество элементов (fieldSize^2)
	bool gameOver; // игра закончена или нет

	struct Options // структура Опции
	{
		bool show_stopwatch; // показывать секундомер или нет
		bool save_unfinished_game; // сохранять незаконченную игру или нет

		Options() // конструктор по умолчанию
		{
			show_stopwatch = true;
			save_unfinished_game = true;
		}
	};

	// функция, которая проверяет возможно ли решить головоломку
	bool IsSolvable(); 

	// функция, которая перемешивает массив целых чисел
	void shuffle();

	// функция, которая считывает массив с лучшим временем с файла
	void ReadBestTimeFromFile();

	// функция, которая считывает сохранённую игру с файла
	void LoadGame();

	// функция, которая считывает массив с сохранёнными играми с файла
	void ReadSavedGamesFromFile();

	// функция, которая считывает опции с файла
	void ReadOptionsFromFile();

public:
	struct Point // структура Точка
	{
		int x; // координата x
		int y; // координата y

		Point() // конструктор по умолчанию
		{
			x = y = 0;
		}

		Point(int _x, int _y) // конструктор с параметрами
		{
			x = _x;
			y = _y;
		}
	};

	int* nums; // массив целых чисел
	Point blankPos; // позиция пустого квадрата
	Options options; // опции
	int stopwatch; // секундомер
	int bestTime[4] = { 3599, 3599, 3599, 3599 }; // массив с лучшим временем
	bool savedGames[4] = { false, false, false, false }; // массив с сохранёнными играми

	// конструктор с параметром
	// параметр fieldSize - размер поля
	Game(int fieldSize);

	// деструктор
	~Game();

	// геттер для fieldSize
	int getFieldSize();

	// сеттер для fieldSize
	// параметр fieldSize - размер поля
	void setFieldSize(int fieldSize);

	// геттер для btnSize
	int getBtnSize();

	// геттер для size
	int getSize();

	// функция, которая создаёт игру
	// параметр new_game - новая игра или нет
	void CreateGame(bool new_game);

	// функция, которая проверяет головоломка решена или нет
	bool IsSolved();

	// геттер для gameOver
	bool GameIsOver();

	// функция, которая записывает массив с лучшим временем в файл
	void WriteBestTimeToFile();

	// функция, которая сохраняет игру в файл
	void SaveGame();

	// функция, которая записывает массив с сохранёнными играми в файл
	void WriteSavedGamesToFile();

	// функция, которая записывает опции в файл
	void WriteOptionsToFile();
};
