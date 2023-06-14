#pragma once

namespace VC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: System::Diagnostics::Stopwatch^ stopwatch;
	
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 597);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(8, 8);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(129, 562);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 77);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Sepia";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(366, 563);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 75);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Negativo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(578, 563);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 75);
			this->button5->TabIndex = 4;
			this->button5->Text = L"BW";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(44, 114);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 33);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Abrir Imagem";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(74, 234);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(267, 213);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(459, 234);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(265, 213);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(153, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Original";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(557, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Com Filtro";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(199, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(243, 49);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Filter aplier";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(268, 489);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(279, 49);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Elepsed time:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(791, 684);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ of = gcnew OpenFileDialog();
	//For any other formats
	of->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
	if (of->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Bitmap^ imagem = gcnew Bitmap(of->FileName, true);

		pictureBox1->BackgroundImage = imagem;
		pictureBox1->BackgroundImageLayout = ImageLayout::Stretch;
		pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

	}
}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Stopwatch^ stopwatch = gcnew System::Diagnostics::Stopwatch();
		stopwatch->Start();

		Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
		int width = image->Width;
		int height = image->Height;

		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {
				Color originalColor = image->GetPixel(x, y);

				unsigned char originalRed = originalColor.R;
				unsigned char originalGreen = originalColor.G;
				unsigned char originalBlue = originalColor.B;

				int sepiaRed = static_cast<int>(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue);
				int sepiaGreen = static_cast<int>(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue);
				int sepiaBlue = static_cast<int>(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue);

				sepiaRed = Math::Min(255, sepiaRed);
				sepiaGreen = Math::Min(255, sepiaGreen);
				sepiaBlue = Math::Min(255, sepiaBlue);

				Color sepiaColor = Color::FromArgb(sepiaRed, sepiaGreen, sepiaBlue);
				image->SetPixel(x, y, sepiaColor);
			}
		}

		pictureBox2->BackgroundImage = image;
		pictureBox2->BackgroundImageLayout = ImageLayout::Stretch;
		pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

		label4->Text = stopwatch->Elapsed.ToString();


		stopwatch->Stop();
		label4->Text = stopwatch->Elapsed.ToString();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Diagnostics::Stopwatch^ stopwatch = gcnew System::Diagnostics::Stopwatch();
		stopwatch->Start();
		Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
		int width = image->Width;
		int height = image->Height;

		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {
				Color originalColor = image->GetPixel(x, y);

				unsigned char originalRed = originalColor.R;
				unsigned char originalGreen = originalColor.G;
				unsigned char originalBlue = originalColor.B;

				unsigned char grayscaleValue = static_cast<unsigned char>((originalRed + originalGreen + originalBlue) / 3);

				Color grayScaleColor = Color::FromArgb(grayscaleValue, grayscaleValue, grayscaleValue);
				image->SetPixel(x, y, grayScaleColor);
			}
		}

		pictureBox2->BackgroundImage = image;
		pictureBox2->BackgroundImageLayout = ImageLayout::Stretch;
		pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;


		stopwatch->Stop();
		label4->Text = stopwatch->Elapsed.ToString();

	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Stopwatch^ stopwatch = gcnew System::Diagnostics::Stopwatch();
	stopwatch->Start();

	Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
	int width = image->Width;
	int height = image->Height;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			Color originalColor = image->GetPixel(x, y);

			unsigned char invertedRed = 255 - originalColor.R;
			unsigned char invertedGreen = 255 - originalColor.G;
			unsigned char invertedBlue = 255 - originalColor.B;

			Color invertedColor = Color::FromArgb(invertedRed, invertedGreen, invertedBlue);
			image->SetPixel(x, y, invertedColor);
		}
	}

	pictureBox2->BackgroundImage = image;
	pictureBox2->BackgroundImageLayout = ImageLayout::Stretch;
	pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

	stopwatch->Stop();
	label4->Text = stopwatch->Elapsed.ToString();
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
