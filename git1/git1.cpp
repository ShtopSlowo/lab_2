// git1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include  "Windows.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Моя автобиография!\n\n" << endl;
	cout << "Имя: Сергей" << endl;
	cout << "Фамилилия: Главацкий" << endl;
	cout << "Отчество: Викторович" << endl;
	cout << "Дата рождения: 20 декабря 1997" << endl;
	cout << "Страна: Украина" << endl;
	cout << "Город проживания: Винница" << endl;
	cout << "Город рождения: с. Степовка" << endl;
	cout << "Школа: СОШ I-III ст. с. Винниковцы" << endl;
	cout << "Университет: ДонНУ им. В. Стуса" << endl;
	cout << "Специальность: Прикладная математика" << endl;
    return 0;
}

