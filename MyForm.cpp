#pragma once
#include <cmath>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	#define pi 3.14159265358979323846

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			DrawGraph();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Численное;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(111, 15);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(6);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(1007, 502);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Метод перебора", L"Метод Пиявского", L"Метод Стронгина" });
			this->comboBox1->Location = System::Drawing::Point(181, 554);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 557);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Выберите метод";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 666);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Левая граница";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(181, 663);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"-2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(181, 717);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 26);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 720);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Правая граница";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(549, 663);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(161, 26);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"400";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(405, 660);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 40);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Максимальное\r\nчисло итераций";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(405, 557);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"F(x) = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(464, 556);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(33, 26);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(503, 559);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"SIN ( ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(545, 557);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(33, 26);
			this->textBox5->TabIndex = 12;
			this->textBox5->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(584, 560);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"X ) +";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(721, 557);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(33, 26);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(671, 560);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"COS ( ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(632, 557);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(33, 26);
			this->textBox7->TabIndex = 14;
			this->textBox7->Text = L"1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(760, 560);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"X )";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(549, 609);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(161, 26);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"0,001";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(405, 606);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 40);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Допустимая\r\nпогрешность";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(181, 609);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(161, 26);
			this->textBox9->TabIndex = 21;
			this->textBox9->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(33, 612);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(148, 20);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Параметр метода";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(891, 573);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(255, 98);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Расчёт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1280, 792);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Поиск глобального минимума";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		double A, B, om1, om2;
	private:
			double func(double _x) {
				return A * sin(om1 * _x) + B * cos(om2 * _x);
			}

	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		//double xmin = Convert::ToDouble(textBox5->Text);
		//double xmax = Convert::ToDouble(textBox4->Text);
		// Устанавливаем интересующий нас интервал по оси X
		//panel->XAxis->Scale->Min = xmin;
		//panel->XAxis->Scale->Max = xmax;
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}


private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ name_method = comboBox1->Text;

	double left_border = Convert::ToDouble(textBox1->Text);
	double right_border = Convert::ToDouble(textBox2->Text);
	double error = Convert::ToDouble(textBox8->Text);
	int max_step = Convert::ToInt32(textBox3->Text);


	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	PointPairList^ min_point = gcnew ZedGraph::PointPairList();


	//  A*sin(om1*x) + B*cos(om2*x)
	A = Convert::ToDouble(textBox4->Text);
	B = Convert::ToDouble(textBox7->Text);
	f2_list->Add(left_border, 0);
	f2_list->Add(right_border, 0);
	om1 = Convert::ToDouble(textBox5->Text);
	om2 = Convert::ToDouble(textBox6->Text);


	vector<double> X;
	X.push_back(left_border);
	X.push_back(right_border);

	//  Для выходных данных
	double x_min = left_border;  //  содержит текущий минимум
	double i_min = 0;  //  Содержит номер интервала, на котором находится текущий минимум
	double x_max = left_border;  //  Для корректного отображения графика


	for (double i = left_border; i < right_border; i += (right_border - left_border) / 100) {
		if (func(x_max) < func(i)) {
			x_max = i;
		}
		f1_list->Add(i, func(i));
	}

	f1_list->Add(right_border, func(right_border));

	if (func(x_min) > func(right_border))
		x_min = right_border;

	if (func(x_max) < func(right_border))
		x_max = right_border;
	int p = 0;
	if (name_method == "Метод перебора") {
		min_point->Clear();
		int t = 0; //  номер интервала максимальной характеристики
		do {
			vector<double> R(X.size() - 1);
			for (int i = 0; i < R.size(); i++) {
				R[i] = X[i + 1] - X[i];
			}

			//  Вычислили максимум характеристик
			if (R.size() == 1) {
				t = 0;
			}else {
				double Rmax = R[0];
				t = 0;
				for (int j = 0; j < R.size() - 1; j++)
					if (R[j + 1] > Rmax) {
						t = j + 1;
						Rmax = R[j + 1];
					}
			}

			double x_new = (X[t + 1] + X[t]) / 2;

			if (func(x_min) > func(x_new)) {
				x_min = x_new;
				i_min = t;
			}

			//  Добавляем новую точку по х координате
			f2_list->Add(x_new, 0);

			X.push_back(x_new);
			sort(begin(X), end(X));
			p++;
		} while ((p < max_step) && ((X[i_min + 1] - X[i_min]) > error));
		min_point->Add(x_min, func(x_min));
	}

	if (name_method == "Метод Пиявского") {
		min_point->Clear();
		double m = Convert::ToDouble(textBox9->Text);  //  Параметр метода
		int t; //  номер интервала максимальной характеристики
		double eps;
		do {

			double MuMax = abs(func(X[1]) - func(X[0])) / (X[1] - X[0]);

			for (int i = 1; i < X.size() - 1; i++) {
				double Mu = abs(func(X[i + 1]) - func(X[i])) / (X[i + 1] - X[i]);
				if (Mu > MuMax)
					MuMax = Mu;
			}

			double mp;
			if (MuMax == 0)
				mp = 1;
			else
				mp = m * MuMax;

			vector<double> R(X.size() - 1);

			//  Вычислили характеристики
			for (int i = 0; i < R.size(); i++) {
				R[i] = mp * (X[i + 1] - X[i]) / 2 - (func(X[i + 1]) + func(X[i])) / 2;
			}

				double Rmax = R[0];
				t = 0;
				for (int i = 0; i < R.size() - 1; i++)
					if (R[i + 1] > Rmax) {
						t = i + 1;
						Rmax = R[i + 1];
					}


			

			//  Вычисление новой точки
			double x_new = ((X[t + 1] + X[t]) / 2.0) - ((func(X[t + 1]) - func(X[t])) / (2.0 * mp));
			if (func(x_min) > func(x_new)) {
				x_min = x_new;
				i_min = t;
			}

			eps = X[i_min + 1] - X[i_min];

			f2_list->Add(x_new, 0);

			X.push_back(x_new);
			sort(begin(X), end(X));
			p++;
		} while ((p < max_step) && (eps >= error));
		min_point->Add(x_min, func(x_min));
	}

	if (name_method == "Метод Стронгина") {
		min_point->Clear();
		double r = Convert::ToDouble(textBox9->Text);
		int t; //  номер интервала максимальной характеристики
		double eps;
		do {
			double MuMax = fabs(func(X[1]) - func(X[0])) / (X[1] - X[0]);

			for (int i = 1; i < X.size() - 1; i++) {
				double Mu = abs(func(X[i + 1]) - func(X[i])) / (X[i + 1] - X[i]);
				if (Mu > MuMax)
					MuMax = Mu;
			}

			double ms;
			if (MuMax == 0)
				ms = 1;
			else
				ms = r * MuMax;


			vector<double> R(X.size() - 1);

			//  Вычислили характеристики
			for (int i = 0; i < R.size(); i++) {
				R[i] = ms * (X[i + 1] - X[i]) - pow((func(X[i + 1])
					- func(X[i])), 2) / (ms * (X[i + 1] - X[i]))
					- 2 * (func(X[i + 1]) + func(X[i]));
			}

			//  Вычислили максимум характеристик
				double Rmax = R[0];
				t = 0;
				for (int i = 0; i < R.size() - 1; i++)
					if (R[i + 1] > Rmax) {
						t = i + 1;
						Rmax = R[i + 1];
					}

			//  Вычисление новой точки
			double x_new = (X[t + 1] + X[t]) / 2.0 - (func(X[t + 1]) - func(X[t])) / (2.0 * ms);
			if (func(x_min) > func(x_new)) {
				x_min = x_new;
				i_min = t;
			}
			eps = X[i_min + 1] - X[i_min];

			f2_list->Add(x_new, 0);
			X.push_back(x_new);
			sort(begin(X), end(X));

			p++;
		} while ((p < max_step) && (eps > error));
		min_point->Add(x_min, func(x_min));
	}

	if (name_method != "") {

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = left_border - 1;
		panel->XAxis->Scale->Max = right_border + 1;

		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = func(x_min) - 1;
		panel->YAxis->Scale->Max = func(x_max) + 1;

		LineItem Curve2 = panel->AddCurve("Точки испытаний", f2_list, Color::Blue, SymbolType::VDash);
		LineItem Curve1 = panel->AddCurve("График функции", f1_list, Color::Red, SymbolType::None);
		LineItem Curve3 = panel->AddCurve("Глобальный минимум", min_point, Color::Green, SymbolType::Star);

		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

		System::Windows::Forms::MessageBox::Show(
			"Глобальный минимум : " + Convert::ToString(func(x_min)) + "\n найден в точке : " + Convert::ToString(x_min) +
			"\n с допустимой погрешностью " + Convert::ToString(error) +
			"\n число затраченных итераций метода : " + Convert::ToString(p),
			"Выходные данные",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1);
	}
}
	private: void DrawGraph()
	{
		GraphPane^ panel = zedGraphControl1->GraphPane;

		panel->XAxis->Title->Text = "Ось X";
		panel->YAxis->Title->Text = "Ось Y";

		panel->Title->Text = "График";

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();


	}
};
}
