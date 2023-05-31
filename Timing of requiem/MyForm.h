#include <Windows.h>
#include <conio.h>

#pragma once
#pragma comment(lib, "Winmm.lib")

namespace Timingofrequiem {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ultimate;
	private: System::Windows::Forms::Button^ euls_scepter;
	private: System::Windows::Forms::Button^ ultimate_1;






	protected:

	protected:





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ultimate = (gcnew System::Windows::Forms::Button());
			this->euls_scepter = (gcnew System::Windows::Forms::Button());
			this->ultimate_1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Name = L"label1";
			// 
			// ultimate
			// 
			resources->ApplyResources(this->ultimate, L"ultimate");
			this->ultimate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ultimate->Name = L"ultimate";
			this->ultimate->UseVisualStyleBackColor = true;
			this->ultimate->Click += gcnew System::EventHandler(this, &MyForm::ultimate_Click);
			// 
			// euls_scepter
			// 
			resources->ApplyResources(this->euls_scepter, L"euls_scepter");
			this->euls_scepter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->euls_scepter->Name = L"euls_scepter";
			this->euls_scepter->UseVisualStyleBackColor = true;
			this->euls_scepter->Click += gcnew System::EventHandler(this, &MyForm::euls_scepter_Click);
			// 
			// ultimate_1
			// 
			resources->ApplyResources(this->ultimate_1, L"ultimate_1");
			this->ultimate_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ultimate_1->Name = L"ultimate_1";
			this->ultimate_1->UseVisualStyleBackColor = true;
			this->ultimate_1->Click += gcnew System::EventHandler(this, &MyForm::ultimate_1_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->Controls->Add(this->ultimate_1);
			this->Controls->Add(this->euls_scepter);
			this->Controls->Add(this->ultimate);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void ultimate_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "Что бы поднять чела в еула нажмите Z";
		this->ultimate->Hide();
		this->euls_scepter->Show();

	}
	private: System::Void euls_scepter_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "Вы подняли чела в еула";
		bool played = PlaySound(TEXT("Eul_scepter.wav"), NULL, SND_ASYNC);
		Sleep(3000);
		this->euls_scepter->Hide();
		this->ultimate_1->Show();
		this->label1->Text = "Что бы начать кастовать Requiem of Souls нажмите ульт";

	}
	private: System::Void ultimate_1_Click(System::Object^ sender, System::EventArgs^ e) {
		bool played = PlaySound(TEXT("Requiem_of_souls.wav"), NULL, SND_ASYNC);
		Sleep(4500);
		this->ultimate_1->Hide();
		this->label1->Hide();
	
		
		
}
	private: System::Void ultimate_2_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
};
