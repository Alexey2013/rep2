#pragma once

namespace Project4 {

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
	private: System::Windows::Forms::Button^ button_muilt;
	private: System::Windows::Forms::Button^ button_plus;
	protected:

	protected:


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_min;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button_divide;

	private: System::Windows::Forms::Button^ button_procent;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button_dot;

	private: System::Windows::Forms::Button^ button_equal;
	private: float  first_num;
	private:char user_action = ' ';
	private: bool is_equal = false;



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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_muilt = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_min = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_procent = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_muilt
			// 
			this->button_muilt->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_muilt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_muilt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_muilt->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_muilt->Location = System::Drawing::Point(231, 192);
			this->button_muilt->Name = L"button_muilt";
			this->button_muilt->Size = System::Drawing::Size(69, 57);
			this->button_muilt->TabIndex = 41;
			this->button_muilt->Text = L"*";
			this->button_muilt->UseVisualStyleBackColor = false;
			this->button_muilt->Click += gcnew System::EventHandler(this, &MyForm::button_muilt_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_plus->Location = System::Drawing::Point(231, 319);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(69, 57);
			this->button_plus->TabIndex = 40;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_pls_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button3->Location = System::Drawing::Point(156, 319);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 57);
			this->button3->TabIndex = 39;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button2->Location = System::Drawing::Point(81, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 57);
			this->button2->TabIndex = 38;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button1->Location = System::Drawing::Point(6, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 57);
			this->button1->TabIndex = 37;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_min
			// 
			this->button_min->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_min->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_min->Location = System::Drawing::Point(231, 253);
			this->button_min->Name = L"button_min";
			this->button_min->Size = System::Drawing::Size(69, 57);
			this->button_min->TabIndex = 36;
			this->button_min->Text = L"-";
			this->button_min->UseVisualStyleBackColor = false;
			this->button_min->Click += gcnew System::EventHandler(this, &MyForm::button_min_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button6->Location = System::Drawing::Point(156, 253);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 57);
			this->button6->TabIndex = 35;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button5->Location = System::Drawing::Point(81, 255);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(69, 57);
			this->button5->TabIndex = 34;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button4->Location = System::Drawing::Point(6, 256);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 57);
			this->button4->TabIndex = 33;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button9->Location = System::Drawing::Point(156, 192);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(69, 57);
			this->button9->TabIndex = 32;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button8->Location = System::Drawing::Point(81, 192);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(69, 57);
			this->button8->TabIndex = 31;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button7->Location = System::Drawing::Point(6, 193);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(69, 57);
			this->button7->TabIndex = 30;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::FloralWhite;
			this->button_divide->Cursor = System::Windows::Forms::Cursors::Default;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_divide->Location = System::Drawing::Point(231, 125);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(69, 57);
			this->button_divide->TabIndex = 29;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_procent
			// 
			this->button_procent->BackColor = System::Drawing::Color::DarkOrange;
			this->button_procent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_procent->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_procent->Location = System::Drawing::Point(156, 125);
			this->button_procent->Name = L"button_procent";
			this->button_procent->Size = System::Drawing::Size(69, 57);
			this->button_procent->TabIndex = 28;
			this->button_procent->Text = L"%";
			this->button_procent->UseVisualStyleBackColor = false;
			this->button_procent->Click += gcnew System::EventHandler(this, &MyForm::button_procent_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::DarkOrange;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_minus->Location = System::Drawing::Point(81, 125);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(69, 57);
			this->button_minus->TabIndex = 27;
			this->button_minus->Text = L"+/-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_AC
			// 
			this->button_AC->BackColor = System::Drawing::Color::DarkOrange;
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_AC->Location = System::Drawing::Point(6, 126);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(69, 57);
			this->button_AC->TabIndex = 26;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &MyForm::button_AC_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->result_label->Location = System::Drawing::Point(12, 9);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(284, 114);
			this->result_label->TabIndex = 25;
			this->result_label->Text = L"0";
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_exit->Location = System::Drawing::Point(239, -2);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(57, 61);
			this->button_exit->TabIndex = 23;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button10->Location = System::Drawing::Point(6, 382);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(140, 57);
			this->button10->TabIndex = 42;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_dot->Location = System::Drawing::Point(156, 382);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(69, 57);
			this->button_dot->TabIndex = 43;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equal->ForeColor = System::Drawing::SystemColors::MenuText;
			this->button_equal->Location = System::Drawing::Point(231, 382);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(69, 57);
			this->button_equal->TabIndex = 44;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(298, 451);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button_muilt);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_min);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_procent);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_pls_Click(System::Object^ sender, System::EventArgs^ e) {
		math('+');
	}
private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
			   math('/');
		   }
private: System::Void button_muilt_Click(System::Object^ sender, System::EventArgs^ e) {
	math('*');
}
private: System::Void button_min_Click(System::Object^ sender, System::EventArgs^ e) {
	math('-');
}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   private: System::Void math(char action) {
			   this->first_num = System::Convert::ToDouble( this->result_label->Text);
			   this->user_action = action;
			   this->result_label->Text = "0";

		   }
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		if (this->result_label->Text == "0" || is_equal==true)
		{
			this->result_label->Text = button->Text;
			is_equal = false;
		}
		else {
			this->result_label->Text = this->result_label->Text+  button->Text;
		
		}
	}

private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
		return;
	float second = System::Convert:: ToDouble (this->result_label->Text);
	float res;
	switch (this->user_action)
	{
	case '+': res =this-> first_num + second; break;
	case '-': res = this->first_num - second; break;
	case '*': res = this->first_num * second; break;
	case '%': res = this->first_num * second/100; break;
	case '/':
		if (second == 0)
		{
			res = 0;
			this->result_label->ForeColor = Color::Red;
			MessageBox::Show(this, "Ты шо дурак на ноль делить?", "Ага да ", MessageBoxButtons::OK, MessageBoxIcon:: Error);
		}
		else
		res = first_num / second; 
		break;
	}
	is_equal = true;
	this->result_label->Text = System::Convert::ToString(res);
}
private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result_label->Text = "0";
	this->result_label->ForeColor = Color::White;
	this->first_num = 0;
	this->user_action = ' ';
	this->is_equal = false;
}
private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->result_label->Text);
	num *= -1;
	this->result_label->Text = System::Convert::ToString(num);
}
private: System::Void button_procent_Click(System::Object^ sender, System::EventArgs^ e) {
	math('%');

}
private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->result_label->Text->Contains(","))
	this->result_label->Text = this->result_label->Text + ",";
}
};
}
