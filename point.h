#pragma once
#include <iostream>

namespace miit::polygon
{
	/*
	@brief Описыват класс точка
	*/
	class Point
	{
	public:
		/*
		@brief Инициализирует новый объект класса Point
		@param x Абсцисса точки
		@param y Ордината точки
		*/
		Point(const double x = 0.0, const double y = 0.0);

		/*
		@brief Получение абсциссы точки
		@return Абсцисса точки
		*/
		const double get_x() const;

		/*
		@brief Получение ординаты точки
		@return Ордината точки
		*/
		const double get_y() const;

		/*
		@brief Переопределение оператора вывода для Point
		@param os Поток вывода
		@param point Точка абсциссу и ординату которой пользователь хочет получить
		@return os Абсциссу и ординату точки
		*/
		friend std::ostream& operator<<(std::ostream& os, Point& point);

		/*
		@brief перегрузка оператора равенства двух объектов класса Point
		@param lha Первый объект для сравнения
		@param rha Второй объект для сравнения
		@return true - если объекты равны, false - если объекты не равны
		*/
		friend bool operator == (const Point& lha, const Point& rha);

		/*
		@brief перегрузка оператора неравенства двух объектов класса Point
		@param lha Первый объект для сравнения
		@param rha Второй объект для сравнения
		@return true - если объекты не равны, false - если объекты равны
		*/
		friend bool operator != (const Point& lha, const Point& rha);

	private:
		double x;
		double y;
	};
}