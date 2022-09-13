#pragma once
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>
namespace dycomp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		string us(string dir_name) {
			string sayi = "", us = "";
			bool ch = false;
			for (int i = 0; i < dir_name.length(); i++) {
				if ((dir_name[i] >= '0' || dir_name[i] <= '9') && ch == false) {
					if (dir_name[i] == 'U') {
						ch = true;
					}
					else
						sayi += dir_name[i];
				}
				else if ((dir_name[i] >= '0' || dir_name[i] <= '9') && ch == true) {
					if (dir_name[i] == 'U' || dir_name[i] == 'S') {
					}
					else
						us += dir_name[i];
				}
			}
			dir_name = " cout << pow(" + sayi + "," + us + ") << endl; \n";
			return dir_name;
		}
		string birles(string dir_name) {
			string sayi = "";
			for (int i = 0; i < dir_name.length(); i++) {
				if ((dir_name[i] >= '0' || dir_name[i] <= '9')) {
					if (dir_name[i] == 'B' || dir_name[i] == 'I' || dir_name[i] == 'R' 
						|| dir_name[i] == 'L'|| dir_name[i] == 'E' || dir_name[i] == 'S' || dir_name[i] == ' ') {
					}
					else
						sayi += dir_name[i];
				}
			}
			dir_name = " cout << " + sayi + " << endl;\n";
			return dir_name;
		}
		string kok(string dir_name) {
			string sayi = "";
			for (int i = 0; i < dir_name.length(); i++) {
				if ((dir_name[i] >= '0' || dir_name[i] <= '9')) {
					if (dir_name[i] == 'K' || dir_name[i] == 'O') {
					}
					else
						sayi += dir_name[i];
				}
			}
			dir_name = " cout << sqrt(" + sayi + ") << endl;\n";
			return dir_name;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ copy_move_box;

	private: System::Windows::Forms::TextBox^ copy_move_location_box;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->copy_move_box = (gcnew System::Windows::Forms::TextBox());
			this->copy_move_location_box = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Copy file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Create folder";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Move file";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(68, 468);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 25);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Compile and Run";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(222, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(237, 328);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(68, 437);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(148, 25);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Open File";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Saving Location";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Folder Name";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(337, 346);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 22);
			this->textBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(222, 349);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Saving Location";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(222, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 17);
			this->label5->TabIndex = 14;
			this->label5->Text = L"File Extention";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L".txt", L".cpp" });
			this->comboBox1->Location = System::Drawing::Point(337, 374);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 15;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(68, 406);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(148, 25);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Save File";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(222, 406);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"File Name";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(337, 406);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 22);
			this->textBox4->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 17);
			this->label7->TabIndex = 22;
			this->label7->Text = L"File Location(with file name)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 17);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Copy/Move Location";
			// 
			// copy_move_box
			// 
			this->copy_move_box->Location = System::Drawing::Point(15, 193);
			this->copy_move_box->Name = L"copy_move_box";
			this->copy_move_box->Size = System::Drawing::Size(180, 22);
			this->copy_move_box->TabIndex = 20;
			// 
			// copy_move_location_box
			// 
			this->copy_move_location_box->Location = System::Drawing::Point(15, 148);
			this->copy_move_location_box->Name = L"copy_move_location_box";
			this->copy_move_location_box->Size = System::Drawing::Size(180, 22);
			this->copy_move_location_box->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 506);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->copy_move_box);
			this->Controls->Add(this->copy_move_location_box);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
				msclr::interop::marshal_context context;
				string copy_location = context.marshal_as<string>(copy_move_location_box->Text);
				string file_location = context.marshal_as<string>(copy_move_box->Text);
				string dir_name = context.marshal_as<string>(textBox1->Text);
				dir_name = "cd " + dir_name + " & move " + file_location + " " + copy_location + " & pause";
				const char* command = dir_name.c_str();
				system(command);
				label1->Text = textBox1->Text;
			}
		private: 
			System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
				msclr::interop::marshal_context context;
				string dir_name = context.marshal_as<string>(textBox1->Text);
				string folder_name = context.marshal_as<string>(textBox2->Text);
				dir_name = "cd " + dir_name + " & mkdir "+ folder_name +" & pause";
				const char* command = dir_name.c_str();
				String^ dirName = textBox1->Text;
				system(command);
			}
		private: 
			System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
				msclr::interop::marshal_context context;
				string move_location = context.marshal_as<string>(copy_move_location_box->Text);
				string file_location = context.marshal_as<string>(copy_move_box->Text);
				string dir_name = context.marshal_as<string>(textBox1->Text);
				dir_name = "cd " + dir_name + " & move "+file_location + " " + move_location + " & pause";
				const char* command = dir_name.c_str();
				system(command);
			}
		private: 
			System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
				msclr::interop::marshal_context context;
				string file_location = context.marshal_as<string>(textBox3->Text);
				string file_name = context.marshal_as<string>(textBox4->Text);
				string extension_name = context.marshal_as<string>(comboBox1->Text);
				ofstream write(file_location + "\\" + file_name + extension_name);
				string dir_name = context.marshal_as<string>(richTextBox1->Text);
				string com = "";
				for each  (String^ line in richTextBox1->Lines)
				{
					string lineS = context.marshal_as<string>(line);
					if (lineS.find("USSU") != std::string::npos) {
						lineS = us(lineS);
						com += lineS;
					}
					else if (lineS.find("KOK") != std::string::npos) {
						lineS = kok(lineS);
						com += lineS;
					}
					else if (lineS.find("BIRLES") != std::string::npos) {
						lineS = birles(lineS);
						com += lineS;
					}
				}
				dir_name = "#include <iostream>\n#include <cmath>\nusing namespace std;\nint main()\n{\n" + com + " return 0; \n}";
				write << dir_name;
				write.close();
				string command = "cd " + file_location + "& g++ " + file_name + extension_name + " -o " + file_name + ".exe & " + file_name + " & pause";
				const char* commands = command.c_str();
				system(commands);
			}
		private: 
			System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
				msclr::interop::marshal_context context;
				string file_location = context.marshal_as<string>(textBox3->Text);
				string file_name = context.marshal_as<string>(textBox4->Text);
				string extension_name = context.marshal_as<string>(comboBox1->Text);

				ifstream read(file_location + "\\" + file_name + extension_name);
				string fileVariable;
				richTextBox1->Text = "";
				while (getline(read, fileVariable)){
					richTextBox1->Text = richTextBox1->Text + context.marshal_as<String^>(fileVariable) + "\n";
				}
				
				read.close();
			}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		private: 
			System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
				msclr::interop::marshal_context context;
				string file_location = context.marshal_as<string>(textBox3->Text);
				string file_name = context.marshal_as<string>(textBox4->Text);
				string extension_name = context.marshal_as<string>(comboBox1->Text);
				string text = context.marshal_as<string>(richTextBox1->Text);
				ofstream write(file_location + "\\" + file_name + extension_name);
				write << text;
				write.close();
			}
};
}
