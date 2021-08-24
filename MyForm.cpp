#include "MyForm.h"
#include <Windows.h>

// Название проекта
using namespace EulerMethod; 

// Функция запуска формы
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

