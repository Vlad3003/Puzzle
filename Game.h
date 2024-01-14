#pragma once
#include <fstream>
#include <random>
#include <time.h>
#include <string>
using namespace std;

class Game // ����� ����
{
private:
	int fieldSize; // ������ ����
	int btnSize; // ������ ������
	int size; // ���������� ��������� (fieldSize^2)
	bool gameOver; // ���� ��������� ��� ���

	struct Options // ��������� �����
	{
		bool show_stopwatch; // ���������� ���������� ��� ���
		bool save_unfinished_game; // ��������� ������������� ���� ��� ���

		Options() // ����������� �� ���������
		{
			show_stopwatch = true;
			save_unfinished_game = true;
		}
	};

	// �������, ������� ��������� �������� �� ������ �����������
	bool IsSolvable(); 

	// �������, ������� ������������ ������ ����� �����
	void shuffle();

	// �������, ������� ��������� ������ � ������ �������� � �����
	void ReadBestTimeFromFile();

	// �������, ������� ��������� ���������� ���� � �����
	void LoadGame();

	// �������, ������� ��������� ������ � ����������� ������ � �����
	void ReadSavedGamesFromFile();

	// �������, ������� ��������� ����� � �����
	void ReadOptionsFromFile();

public:
	struct Point // ��������� �����
	{
		int x; // ���������� x
		int y; // ���������� y

		Point() // ����������� �� ���������
		{
			x = y = 0;
		}

		Point(int _x, int _y) // ����������� � �����������
		{
			x = _x;
			y = _y;
		}
	};

	int* nums; // ������ ����� �����
	Point blankPos; // ������� ������� ��������
	Options options; // �����
	int stopwatch; // ����������
	int bestTime[4] = { 3599, 3599, 3599, 3599 }; // ������ � ������ ��������
	bool savedGames[4] = { false, false, false, false }; // ������ � ����������� ������

	// ����������� � ����������
	// �������� fieldSize - ������ ����
	Game(int fieldSize);

	// ����������
	~Game();

	// ������ ��� fieldSize
	int getFieldSize();

	// ������ ��� fieldSize
	// �������� fieldSize - ������ ����
	void setFieldSize(int fieldSize);

	// ������ ��� btnSize
	int getBtnSize();

	// ������ ��� size
	int getSize();

	// �������, ������� ������ ����
	// �������� new_game - ����� ���� ��� ���
	void CreateGame(bool new_game);

	// �������, ������� ��������� ����������� ������ ��� ���
	bool IsSolved();

	// ������ ��� gameOver
	bool GameIsOver();

	// �������, ������� ���������� ������ � ������ �������� � ����
	void WriteBestTimeToFile();

	// �������, ������� ��������� ���� � ����
	void SaveGame();

	// �������, ������� ���������� ������ � ����������� ������ � ����
	void WriteSavedGamesToFile();

	// �������, ������� ���������� ����� � ����
	void WriteOptionsToFile();
};
