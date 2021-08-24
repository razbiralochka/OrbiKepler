#pragma once
#include<cmath>
#include <stdlib.h>
namespace EulerMethod {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;





	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label27;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		double apoapsis;
		double periapsis; 
		double dTime; 
		double X;
		double Y;
		double fokalparam;
		double ecc;
		double r_orbit;
		double a;
		double b;
		double h;
		double velocity;
		double Param;
		double angle;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;


		   double Time;
		
		
		double _func(double xx, double yy )
		{
			double rr;

			rr= fokalparam / (1 + ecc * cos(yy));

			return Param /pow(rr,2);
		}
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->информацияToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// информацияToolStripMenuItem
			// 
			this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
			this->информацияToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->информацияToolStripMenuItem->Text = L"Информация";
			this->информацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(44, 168);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(495, 148);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"GOST type B", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(44, 322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(495, 61);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Моделировать движение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(73, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Высота апоцентр";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(61, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Высота перицентра";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(181, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(181, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(181, 113);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 35;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(99, 120);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(76, 15);
			this->label27->TabIndex = 34;
			this->label27->Text = L"Приращение ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(287, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 15);
			this->label6->TabIndex = 39;
			this->label6->Text = L"км.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(287, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 15);
			this->label5->TabIndex = 40;
			this->label5->Text = L"км.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(287, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 15);
			this->label7->TabIndex = 41;
			this->label7->Text = L"с.";
			// 
			// chart1
			// 
			chartArea1->AxisX->MajorGrid->Interval = 0;
			chartArea1->AxisY->MajorGrid->Interval = 0;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(571, 27);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(901, 631);
			this->chart1->TabIndex = 43;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1484, 670);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"OrbiKepler 1.0.0.";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void информацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Программа моделирует движение ИСЗ по орбите Кеплера " + "\r\n"
			+ "Разработчик: Хайруллин И.И." + "\r\n" +
			"Проверил: Волоцуев В.В.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		
		
		//Считаем данные с textBox-ов
		periapsis = Convert::ToDouble(textBox3->Text) + 6371;
		apoapsis = Convert::ToDouble(textBox2->Text) + 6371;
		
		if (periapsis > apoapsis) {
			MessageBox::Show("Перицентр должен быть ниже апоцентра!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			periapsis = Convert::ToDouble(textBox2->Text) + 6371;
			apoapsis = Convert::ToDouble(textBox3->Text) + 6371;
			
			
		};

		dTime = Convert::ToDouble(textBox4->Text);
		
		//Начальные условия
		angle = 0;
		Time = 0;
		//Эксцентриситет орбиты
		ecc = (apoapsis - periapsis) / (apoapsis + periapsis);

		//Фокальный параметр орбиты
		fokalparam = periapsis * (1 + ecc);

		//Правая часть ДУ
		Param = sqrt(398600.4415 * ((apoapsis + periapsis) / 2) * (1 - ecc * ecc));
		double k[4];

		//Большая полуось орбиты
		a = apoapsis / (1 - ecc);

		//Малая полуось орбиты
		b = a * sqrt(1 - ecc * ecc);
		 
		
		//Сброс Графиков
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		
		//Масштабируем график
		chart1->ChartAreas[0]->AxisX->Minimum = -(periapsis + 100);
		chart1->ChartAreas[0]->AxisX->Maximum = 1.9 * apoapsis;
		chart1->ChartAreas[0]->AxisX->Minimum = -periapsis * 1.5;

		//Рисуем Землю
		while (angle < 7)
		{
			
			
			X = 6371 * cos(angle);
			Y = 6371 * sin(angle);


			chart1->Series[0]->Points->AddXY(X, Y);
			angle += 3.141 / 100;
		}

		
		
		
		//Сбросим угол для отрисовки орбиты
		angle = 0;

		//Вычислим r_1
		r_orbit = fokalparam / (1 + ecc * cos(angle));



		//Отрисовка орбиты ИСЗ
		while ( angle < 7 )
		{
			//Вычисление текущей скорости ИСЗ
			velocity = sqrt(398600.4415 * (2 / r_orbit - 1 / a));

			//Переход в ДСК из ПСК
			X = -r_orbit * cos(angle);
			Y = r_orbit * sin(angle);

			//Добавление позиции ИСЗ на график
			chart1->Series[1]->Points->AddXY(X, Y);
			


			
			//Вывод текущей информации
			textBox1->Text = //textBox1->Text + "\r\n" +
				"Время: " + Convert::ToString(round(Time * 1000) / 1000) + "с."
				"\r\nИстиная аномалия: " + Convert::ToString(round(angle * 1000) / 1000) + " рад."
				"\r\nВысота над уровнем моря:" + Convert::ToString(round(r_orbit * 100) / 100 - 6371) +" км."
				"\r\nСкорость ИСЗ: " + Convert::ToString(round(velocity * 1000) / 1000) + " км/с.";

		
			
			
		
			
			
			//Обновление интерфейса
			chart1->Refresh();
			textBox1->Refresh();
			
			//Непосредсвенно метод Рунге-Кутта 4-го порядка
			k[0] = dTime * _func(Time, angle);
			k[2] = dTime * _func(Time + dTime / 2, angle + k[0] / 2);
			k[2] = dTime * _func(Time + dTime / 2, angle + k[1] / 2);
			k[3] = dTime * _func(Time + dTime, angle + k[2]);
			angle = angle + ( k[0] + 2*k[1]+ 2*k[2]+k[3])/6;
			
			Time += dTime;
			
			r_orbit = fokalparam / (1 + ecc * cos(angle));

			

			//System:Threading::Thread::Sleep(1);
		}
			
			
		
			
		
		



		





		




	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar == '.') e->KeyChar = ',';
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar == '.') e->KeyChar = ',';
	}
	};
}
