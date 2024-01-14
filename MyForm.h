#pragma once
#include "Game.h"

Game game(3);

namespace Puzzle 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			addToolTips();
			mainScreen();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ main_container; // �������� ���������
	private: System::Windows::Forms::Panel^ puzzle_container; // ��������� ��� �����������
	private: System::Windows::Forms::Timer^ stopwatch; // ����������
	private: System::Windows::Forms::Label^ stopwatch_label; // ������� ��� �����������
	private: System::Windows::Forms::Button^ button_play; // ������ ������ ����
	private: System::Windows::Forms::Button^ button_home; // ������ �� ������� �����
	private: System::Windows::Forms::Button^ button_new_game; // ������ ����� ����
	private: System::Windows::Forms::Button^ active_btn; // �������� ������ ��� ������� ����
	private: System::Windows::Forms::Button^ btn_settings; // ������ ���������
	private: System::Windows::Forms::Button^ btn_back; // ������ �����
	private: System::Windows::Forms::Button^ btn_reset; // ������ �������� ����������
	private: System::Windows::Forms::CheckBox^ timer_checkBox; // ������ ���������� ���������� ��� ���
	private: System::Windows::Forms::CheckBox^ save_game_checkBox; // ������ ��������� ������������� ���� ��� ���
	private: System::Windows::Forms::Button^ btn_view_statistics; // ������ ���������� ����������
	private: System::Windows::Forms::Button^ btn_reference; // ������ �������
	private: System::Windows::Forms::Label^ label_section; // ������� �������� �������
	private: System::Windows::Forms::Label^ label_reference; // ����� �������
	private: System::Windows::Forms::Label^ label_field_size; // ������� ������ ����
	private: System::Windows::Forms::Button^ btn_field_size1; // ������ � �������� ���� 3x3
	private: System::Windows::Forms::Button^ btn_field_size2; // ������ � �������� ���� 4x4
	private: System::Windows::Forms::Button^ btn_field_size3; // ������ � �������� ���� 5x5
	private: System::Windows::Forms::Button^ btn_field_size4; // ������ � �������� ���� 6x6

	private: System::ComponentModel::IContainer^ components; // ����������
	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->main_container = (gcnew System::Windows::Forms::Panel());
			this->label_section = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->label_reference = (gcnew System::Windows::Forms::Label());
			this->btn_view_statistics = (gcnew System::Windows::Forms::Button());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->timer_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->save_game_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->label_field_size = (gcnew System::Windows::Forms::Label());
			this->btn_field_size4 = (gcnew System::Windows::Forms::Button());
			this->btn_field_size3 = (gcnew System::Windows::Forms::Button());
			this->btn_field_size2 = (gcnew System::Windows::Forms::Button());
			this->btn_field_size1 = (gcnew System::Windows::Forms::Button());
			this->button_play = (gcnew System::Windows::Forms::Button());
			this->btn_settings = (gcnew System::Windows::Forms::Button());
			this->btn_reference = (gcnew System::Windows::Forms::Button());
			this->stopwatch = (gcnew System::Windows::Forms::Timer(this->components));
			this->button_home = (gcnew System::Windows::Forms::Button());
			this->button_new_game = (gcnew System::Windows::Forms::Button());
			this->stopwatch_label = (gcnew System::Windows::Forms::Label());
			this->main_container->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_container
			// 
			this->main_container->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->main_container->Location = System::Drawing::Point(50, 37);
			this->main_container->Name = L"main_container";
			this->main_container->Size = System::Drawing::Size(684, 684);
			this->main_container->TabIndex = 0;
			// 
			// label_section
			// 
			this->label_section->AutoSize = true;
			this->label_section->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_section->ForeColor = System::Drawing::Color::White;
			this->label_section->Location = System::Drawing::Point(231, 36);
			this->label_section->Name = L"label_section";
			this->label_section->Size = System::Drawing::Size(0, 61);
			this->label_section->TabIndex = 1;
			this->label_section->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_back
			// 
			this->btn_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_back->ForeColor = System::Drawing::Color::Navy;
			this->btn_back->Location = System::Drawing::Point(30, 38);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(85, 47);
			this->btn_back->TabIndex = 0;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &MyForm::button_back_Click);
			// 
			// label_reference
			// 
			this->label_reference->AutoSize = true;
			this->label_reference->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_reference->ForeColor = System::Drawing::Color::White;
			this->label_reference->Location = System::Drawing::Point(30, 200);
			this->label_reference->MaximumSize = System::Drawing::Size(624, 0);
			this->label_reference->Name = L"label_reference";
			this->label_reference->Size = System::Drawing::Size(619, 468);
			this->label_reference->TabIndex = 4;
			this->label_reference->Text = resources->GetString(L"label_reference.Text");
			// 
			// btn_view_statistics
			// 
			this->btn_view_statistics->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_view_statistics->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_view_statistics->ForeColor = System::Drawing::Color::Navy;
			this->btn_view_statistics->Location = System::Drawing::Point(177, 363);
			this->btn_view_statistics->Name = L"btn_view_statistics";
			this->btn_view_statistics->Size = System::Drawing::Size(330, 47);
			this->btn_view_statistics->TabIndex = 3;
			this->btn_view_statistics->Text = L"���������� ����������";
			this->btn_view_statistics->UseVisualStyleBackColor = true;
			this->btn_view_statistics->Click += gcnew System::EventHandler(this, &MyForm::btn_view_statistics_Click);
			// 
			// btn_reset
			// 
			this->btn_reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_reset->ForeColor = System::Drawing::Color::Navy;
			this->btn_reset->Location = System::Drawing::Point(177, 430);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(330, 47);
			this->btn_reset->TabIndex = 4;
			this->btn_reset->Text = L"�������� ����������";
			this->btn_reset->UseVisualStyleBackColor = true;
			this->btn_reset->Click += gcnew System::EventHandler(this, &MyForm::button_reset_Click);
			// 
			// timer_checkBox
			// 
			this->timer_checkBox->AutoSize = true;
			this->timer_checkBox->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->timer_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->timer_checkBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timer_checkBox->ForeColor = System::Drawing::Color::White;
			this->timer_checkBox->Location = System::Drawing::Point(115, 207);
			this->timer_checkBox->Name = L"timer_checkBox";
			this->timer_checkBox->Size = System::Drawing::Size(387, 43);
			this->timer_checkBox->TabIndex = 1;
			this->timer_checkBox->Text = L"���������� ����������";
			this->timer_checkBox->UseVisualStyleBackColor = true;
			this->timer_checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::timer_checkBox_CheckedChanged);
			this->timer_checkBox->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::checkBox_KeyUp);
			// 
			// save_game_checkBox
			// 
			this->save_game_checkBox->AutoSize = true;
			this->save_game_checkBox->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->save_game_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_game_checkBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_game_checkBox->ForeColor = System::Drawing::Color::White;
			this->save_game_checkBox->Location = System::Drawing::Point(115, 270);
			this->save_game_checkBox->Name = L"save_game_checkBox";
			this->save_game_checkBox->Size = System::Drawing::Size(497, 43);
			this->save_game_checkBox->TabIndex = 2;
			this->save_game_checkBox->Text = L"��������� ������������� ����";
			this->save_game_checkBox->UseVisualStyleBackColor = true;
			this->save_game_checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::save_game_checkBox_CheckedChanged);
			this->save_game_checkBox->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::checkBox_KeyUp);
			// 
			// label_field_size
			// 
			this->label_field_size->AutoSize = true;
			this->label_field_size->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_field_size->ForeColor = System::Drawing::Color::White;
			this->label_field_size->Location = System::Drawing::Point(300, 30);
			this->label_field_size->Name = L"label_field_size";
			this->label_field_size->Size = System::Drawing::Size(277, 61);
			this->label_field_size->TabIndex = 2;
			this->label_field_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_field_size4
			// 
			this->btn_field_size4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_field_size4->BackColor = System::Drawing::Color::Navy;
			this->btn_field_size4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_field_size4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_field_size4->ForeColor = System::Drawing::Color::Navy;
			this->btn_field_size4->Location = System::Drawing::Point(272, 270);
			this->btn_field_size4->Name = L"btn_field_size4";
			this->btn_field_size4->Size = System::Drawing::Size(110, 65);
			this->btn_field_size4->TabIndex = 3;
			this->btn_field_size4->Text = L"6x6";
			this->btn_field_size4->UseVisualStyleBackColor = true;
			this->btn_field_size4->Click += gcnew System::EventHandler(this, &MyForm::button_fieldsize_Click);
			// 
			// btn_field_size3
			// 
			this->btn_field_size3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_field_size3->BackColor = System::Drawing::Color::Navy;
			this->btn_field_size3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_field_size3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_field_size3->ForeColor = System::Drawing::Color::Navy;
			this->btn_field_size3->Location = System::Drawing::Point(152, 270);
			this->btn_field_size3->Name = L"btn_field_size3";
			this->btn_field_size3->Size = System::Drawing::Size(110, 65);
			this->btn_field_size3->TabIndex = 2;
			this->btn_field_size3->Text = L"5x5";
			this->btn_field_size3->UseVisualStyleBackColor = true;
			this->btn_field_size3->Click += gcnew System::EventHandler(this, &MyForm::button_fieldsize_Click);
			// 
			// btn_field_size2
			// 
			this->btn_field_size2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_field_size2->BackColor = System::Drawing::Color::Navy;
			this->btn_field_size2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_field_size2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_field_size2->ForeColor = System::Drawing::Color::Navy;
			this->btn_field_size2->Location = System::Drawing::Point(272, 195);
			this->btn_field_size2->Name = L"btn_field_size2";
			this->btn_field_size2->Size = System::Drawing::Size(110, 65);
			this->btn_field_size2->TabIndex = 1;
			this->btn_field_size2->Text = L"4x4";
			this->btn_field_size2->UseVisualStyleBackColor = true;
			this->btn_field_size2->Click += gcnew System::EventHandler(this, &MyForm::button_fieldsize_Click);
			// 
			// btn_field_size1
			// 
			this->btn_field_size1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_field_size1->BackColor = System::Drawing::Color::Navy;
			this->btn_field_size1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_field_size1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_field_size1->ForeColor = System::Drawing::Color::Navy;
			this->btn_field_size1->Location = System::Drawing::Point(152, 195);
			this->btn_field_size1->Name = L"btn_field_size1";
			this->btn_field_size1->Size = System::Drawing::Size(110, 65);
			this->btn_field_size1->TabIndex = 0;
			this->btn_field_size1->Text = L"3x3";
			this->btn_field_size1->UseVisualStyleBackColor = true;
			this->btn_field_size1->Click += gcnew System::EventHandler(this, &MyForm::button_fieldsize_Click);
			// 
			// button_play
			// 
			this->button_play->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_play->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_play.BackgroundImage")));
			this->button_play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_play->Location = System::Drawing::Point(392, 195);
			this->button_play->Name = L"button_play";
			this->button_play->Size = System::Drawing::Size(140, 140);
			this->button_play->TabIndex = 4;
			this->button_play->UseVisualStyleBackColor = true;
			this->button_play->Click += gcnew System::EventHandler(this, &MyForm::button_play_Click);
			// 
			// btn_settings
			// 
			this->btn_settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_settings->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_settings->ForeColor = System::Drawing::Color::Navy;
			this->btn_settings->Location = System::Drawing::Point(202, 375);
			this->btn_settings->Name = L"btn_settings";
			this->btn_settings->Size = System::Drawing::Size(280, 47);
			this->btn_settings->TabIndex = 5;
			this->btn_settings->Text = L"���������";
			this->btn_settings->UseVisualStyleBackColor = true;
			this->btn_settings->Click += gcnew System::EventHandler(this, &MyForm::button_settings_Click);
			// 
			// btn_reference
			// 
			this->btn_reference->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reference->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_reference->ForeColor = System::Drawing::Color::Navy;
			this->btn_reference->Location = System::Drawing::Point(202, 442);
			this->btn_reference->Name = L"btn_reference";
			this->btn_reference->Size = System::Drawing::Size(280, 47);
			this->btn_reference->TabIndex = 6;
			this->btn_reference->Text = L"�������";
			this->btn_reference->UseVisualStyleBackColor = true;
			this->btn_reference->Click += gcnew System::EventHandler(this, &MyForm::btn_reference_Click);
			// 
			// stopwatch
			// 
			this->stopwatch->Interval = 1000;
			this->stopwatch->Tick += gcnew System::EventHandler(this, &MyForm::stopwatch_Tick);
			// 
			// button_home
			// 
			this->button_home->BackColor = System::Drawing::Color::Navy;
			this->button_home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_home.BackgroundImage")));
			this->button_home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_home->Location = System::Drawing::Point(72, 30);
			this->button_home->Name = L"button_home";
			this->button_home->Size = System::Drawing::Size(50, 50);
			this->button_home->TabIndex = 0;
			this->button_home->UseVisualStyleBackColor = false;
			this->button_home->Click += gcnew System::EventHandler(this, &MyForm::button_home_Click);
			// 
			// button_new_game
			// 
			this->button_new_game->BackColor = System::Drawing::Color::Navy;
			this->button_new_game->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_new_game.BackgroundImage")));
			this->button_new_game->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_new_game->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_new_game->Location = System::Drawing::Point(130, 30);
			this->button_new_game->Name = L"button_new_game";
			this->button_new_game->Size = System::Drawing::Size(50, 50);
			this->button_new_game->TabIndex = 1;
			this->button_new_game->UseVisualStyleBackColor = false;
			this->button_new_game->Click += gcnew System::EventHandler(this, &MyForm::button_new_game_Click);
			// 
			// stopwatch_label
			// 
			this->stopwatch_label->AutoSize = true;
			this->stopwatch_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stopwatch_label->ForeColor = System::Drawing::Color::White;
			this->stopwatch_label->Location = System::Drawing::Point(500, 30);
			this->stopwatch_label->Name = L"stopwatch_label";
			this->stopwatch_label->Size = System::Drawing::Size(150, 61);
			this->stopwatch_label->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->ClientSize = System::Drawing::Size(782, 753);
			this->Controls->Add(this->main_container);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MinimumSize = System::Drawing::Size(800, 800);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Puzzle";
			this->main_container->ResumeLayout(false);
			this->main_container->PerformLayout();
			this->ResumeLayout(false);

		}

		// �������, ������� ��������� ����������� ��������� ��� ������
		void addToolTips()
		{
			ToolTip^ toolTip = gcnew ToolTip();
			toolTip->SetToolTip(button_play, L"������");
			toolTip->SetToolTip(btn_back, L"�����");
			toolTip->SetToolTip(button_home, L"�� ������� �����");
			toolTip->SetToolTip(button_new_game, L"����� ����");
		}

		// �������, ������� ������ ������� �����
		void mainScreen()
		{
			main_container->Controls->Clear();

			if (!active_btn)
			{
				active_btn = btn_field_size1;
			}

			main_container->Controls->Add(btn_field_size1);
			main_container->Controls->Add(btn_field_size2);
			main_container->Controls->Add(btn_field_size3);
			main_container->Controls->Add(btn_field_size4);

			main_container->Controls->Add(button_play);
			main_container->Controls->Add(btn_settings);
			main_container->Controls->Add(btn_reference);
		}

		// �������, ������� ������ ����� ��������
		void settingsScreen()
		{
			main_container->Controls->Clear();

			label_section->Text = L"���������";
			timer_checkBox->Checked = game.options.show_stopwatch;
			save_game_checkBox->Checked = game.options.save_unfinished_game;

			main_container->Controls->Add(label_section);
			main_container->Controls->Add(btn_back);
			main_container->Controls->Add(timer_checkBox);
			main_container->Controls->Add(save_game_checkBox);
			main_container->Controls->Add(btn_view_statistics);
			main_container->Controls->Add(btn_reset);
		}

		// �������, ������� ������ ����� �������
		void referenceScreen()
		{
			main_container->Controls->Clear();

			label_section->Text = L"�������";

			main_container->Controls->Add(btn_back);
			main_container->Controls->Add(label_section);
			main_container->Controls->Add(label_reference);
		}

		// �������, ������� ��������� ������� � ������ � �������� MM:SS
		String^ convertIntToTime(int seconds)
		{
			int num; // �����

			num = seconds / 60;

			String^ res = L"";

			if (num < 10)
			{
				res += L"0";
			}

			res += Convert::ToString(num) + L":";

			num = seconds % 60;

			if (num < 10)
			{
				res += L"0";
			}

			res += Convert::ToString(num);

			return res;
		}

		// �������, ������� ����������� ����, � ���������� ������������ ��������� ����
		void gameOver()
		{
			if (game.IsSolved())
			{
				this->stopwatch->Enabled = false;
				String^ result = L"������� �����: ";
				result += stopwatch_label->Text;
				result += L"\n������ �����: ";

				if (game.stopwatch < game.bestTime[game.getFieldSize() - 3])
				{
					game.bestTime[game.getFieldSize() - 3] = game.stopwatch;
					game.WriteBestTimeToFile();
				}

				result += convertIntToTime(game.bestTime[game.getFieldSize() - 3]);
				game.savedGames[game.getFieldSize() - 3] = false;
				game.WriteSavedGamesToFile();

				MessageBox::Show(this, result, L"��������� ����", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		// �������, ������� ������ ����
		void createGame()
		{
			main_container->Controls->Clear();
			
			label_field_size->Text = active_btn->Text;

			if (game.options.show_stopwatch)
			{
				stopwatch_label->Text = convertIntToTime(game.stopwatch);
				main_container->Controls->Add(stopwatch_label);
			}

			main_container->Controls->Add(button_home);
			main_container->Controls->Add(button_new_game);
			main_container->Controls->Add(label_field_size);

			puzzle_container = gcnew Panel();
			puzzle_container->Anchor = System::Windows::Forms::AnchorStyles::None;
			puzzle_container->BackColor = System::Drawing::Color::White;
			puzzle_container->Location = System::Drawing::Point(72, 110);
			puzzle_container->Name = L"puzzle_container";
			puzzle_container->Size = System::Drawing::Size(540, 540);
			puzzle_container->TabIndex = 4;

			main_container->Controls->Add(puzzle_container);

			int fieldSize = game.getFieldSize(); // ������ ����
			int btnSize = game.getBtnSize(); // ������ ������

			for (int i = 0; i < fieldSize; i++)
			{
				for (int j = 0; j < fieldSize; j++)
				{
					int index = i * fieldSize + j; // ������

					if (game.nums[index] == game.getSize())
					{
						game.blankPos = Game::Point(j * btnSize, i * btnSize);
						continue;
					}

					Button^ btn = gcnew Button(); // ������ �����

					btn->Font = (gcnew System::Drawing::Font(L"Times New Roman",
						32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					btn->Location = System::Drawing::Point(j * btnSize, i * btnSize);
					
					btn->Name = L"button" + System::Convert::ToString(game.nums[index]);
					btn->Size = System::Drawing::Size(btnSize, btnSize);
					btn->TabIndex = index + 5;
					btn->ForeColor = System::Drawing::Color::Navy;
					btn->Text = System::Convert::ToString(game.nums[index]);
					btn->UseVisualStyleBackColor = true;
					btn->Click += gcnew System::EventHandler(this, &MyForm::puzzle_btn_Click);
					puzzle_container->Controls->Add(btn);
				}
			}

			stopwatch->Enabled = true;
		}
#pragma endregion
		// �������, ������� ���������� ��� ������� ������ � ������
		private: System::Void puzzle_btn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (game.GameIsOver())
			{
				return;
			}

			Button^ btn = safe_cast<Button^>(sender); // ������, �� ������� ������

			int x = btn->Location.X; // ���������� x ������� ������
			int y = btn->Location.Y; // ���������� y ������� ������
			int fieldSize = game.getFieldSize(); // ������ ����
			int btnSize = game.getBtnSize(); // ������ ������
			int index = y / btnSize * fieldSize + x / btnSize; // ������ ����� ������� ������
			int index1 = game.blankPos.y / btnSize * fieldSize + game.blankPos.x / btnSize; // ������ ������� ��������

			if (x == game.blankPos.x)
			{
				if (index < index1)
				{
					for (int i = index1 - fieldSize; i >= index; i -= fieldSize)
					{
						Control^ button = puzzle_container->Controls->Find(L"button" + Convert::ToString(game.nums[i]), false)[0];

						int tmp = game.nums[i];
						game.nums[i] = game.nums[i + fieldSize];
						game.nums[i + fieldSize] = tmp;

						button->Location = System::Drawing::Point(game.blankPos.x, game.blankPos.y);
						game.blankPos = Game::Point(i % fieldSize * btnSize, i / fieldSize * btnSize);
					}
				}

				else
				{
					for (int i = index1 + fieldSize; i <= index; i += fieldSize)
					{
						Control^ button = puzzle_container->Controls->Find(L"button" + Convert::ToString(game.nums[i]), false)[0];

						int tmp = game.nums[i];
						game.nums[i] = game.nums[i - fieldSize];
						game.nums[i - fieldSize] = tmp;

						button->Location = System::Drawing::Point(game.blankPos.x, game.blankPos.y);
						game.blankPos = Game::Point(i % fieldSize * btnSize, i / fieldSize * btnSize);
					}
				}
			}

			else if (y == game.blankPos.y)
			{
				if (index < index1)
				{
					for (int i = index1 - 1; i >= index; i--)
					{
						Control^ button = puzzle_container->Controls->Find(L"button" + Convert::ToString(game.nums[i]), false)[0];

						int tmp = game.nums[i];
						game.nums[i] = game.nums[i + 1];
						game.nums[i + 1] = tmp;

						button->Location = System::Drawing::Point(game.blankPos.x, game.blankPos.y);
						game.blankPos = Game::Point(i % fieldSize * btnSize, i / fieldSize * btnSize);
					}
				}

				else
				{
					for (int i = index1 + 1; i <= index; i++)
					{
						Control^ button = puzzle_container->Controls->Find(L"button" + Convert::ToString(game.nums[i]), false)[0];

						int tmp = game.nums[i];
						game.nums[i] = game.nums[i - 1];
						game.nums[i - 1] = tmp;

						button->Location = System::Drawing::Point(game.blankPos.x, game.blankPos.y);
						game.blankPos = Game::Point(i % fieldSize * btnSize, i / fieldSize * btnSize);
					}
				}
			}

			gameOver();
		}

		// �������, ������� ���������� ��� ������� ������ � �������� ����
		private: System::Void button_fieldsize_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Button^ btn = safe_cast<Button^>(sender); // ������, �� ������� ������

			int num = System::Convert::ToInt16(btn->Text[0]) - 48; // ����� - ������ ���� (3, 4, 5, 6)

			game.setFieldSize(num);

			btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));

			if (active_btn != btn)
			{
				active_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
			}

			active_btn = btn;
		}

		// �������, ������� ���������� ��� ������� ������ �� ������� �����
		private: System::Void button_home_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			stopwatch->Enabled = false;
			mainScreen();

			if (!game.GameIsOver() && game.options.save_unfinished_game)
			{
				game.SaveGame();
				game.savedGames[game.getFieldSize() - 3] = true;
				game.WriteSavedGamesToFile();
			}
		}

		// �������, ������� ���������� ��� ������� ������ ����� ����
		private: System::Void button_new_game_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			stopwatch->Enabled = false;
			game.CreateGame(true);
			createGame();
		}

		// �������, ������� ���������� ��� ������� ������ ������ ����
		private: System::Void button_play_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			bool new_game = true; // ����� ���� ��� ���

			if (game.savedGames[game.getFieldSize() - 3])
			{
				Windows::Forms::DialogResult res = MessageBox::Show(this, 
					L"������ ���������� ��������� ���������� ����?", 
					L"����������", MessageBoxButtons::YesNoCancel, 
					MessageBoxIcon::Question);

				if (res.ToString() == L"Cancel")
				{
					return;
				}

				new_game = res.ToString() == L"No";

				if (new_game)
				{
					game.savedGames[game.getFieldSize() - 3] = false;
					game.WriteSavedGamesToFile();
				}
			}

			game.CreateGame(new_game);
			
			createGame();
		}

		// �������, ������� ���������� ������ �������
		private: System::Void stopwatch_Tick(System::Object^ sender, System::EventArgs^ e) 
		{
			game.stopwatch++;
			stopwatch_label->Text = convertIntToTime(game.stopwatch);
		}

		// �������, ������� ���������� ��� ������� ������ ���������
		private: System::Void button_settings_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			settingsScreen();
		}

		// �������, ������� ���������� ��� ������� ������ �����
		private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			mainScreen();
		}

		// �������, ������� ���������� ��� ������� ������ �������� ����������
		private: System::Void button_reset_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Windows::Forms::DialogResult res = MessageBox::Show(this, L"�� ������������� ������ �������� ����������?", 
				L"����������� ��������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (res.ToString() == "Yes")
			{
				for (int i = 0; i < 4; i++)
				{
					game.bestTime[i] = 3599;
				}

				game.WriteBestTimeToFile();

				MessageBox::Show(this, "���������� ������� ��������!", "���������", MessageBoxButtons::OK, 
					MessageBoxIcon::Information);
			}
		}

		// �������, ������� ���������� ��� ������ ��������� �������� Check � �������� timer_checkBox
		private: System::Void timer_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			game.options.show_stopwatch = timer_checkBox->Checked;
			game.WriteOptionsToFile();
		}

		// �������, ������� ���������� ��� ������ ��������� �������� Check � �������� save_game_checkBox
		private: System::Void save_game_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			game.options.save_unfinished_game = save_game_checkBox->Checked;

			if (!game.options.save_unfinished_game)
			{
				for (int i = 0; i < 4; i++)
				{
					game.savedGames[i] = false;
				}

				game.WriteSavedGamesToFile();
			}

			game.WriteOptionsToFile();
		}

		// �������, ������� ���������� ��� ������� ������ ���������� ����������
		private: System::Void btn_view_statistics_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ res = L"";
		
			for (int i = 0; i < 4; i++)
			{
				String^ num = System::Convert::ToString(i + 3);
				res += num + L"x" + num + L": ";

				if (game.bestTime[i] == 3599)
				{
					res += L"�����";
				}

				else
				{
					res += convertIntToTime(game.bestTime[i]);
				}

				if (i != 3)
				{
					res += L"\n";
				}
			}

			MessageBox::Show(this, res, L"������ �����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		// �������, ������� ���������� ��� ������� ������ �������
		private: System::Void btn_reference_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			referenceScreen();
		}

		// �������, ������� ���������� � ������ ���������� ������� � �������� checkBox
		private: System::Void checkBox_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
		{
			CheckBox^ checkBox = safe_cast<CheckBox^>(sender);

			if (e->KeyCode == Keys::Enter)
			{
				checkBox->Checked = !checkBox->Checked;
			}
		}
	};
}
