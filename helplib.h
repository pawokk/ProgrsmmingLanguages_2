#pragma once
#include <limits>

namespace miit::helplib 
{
	/*
	@brief Сравниние 2-х объектов типа double
	@param value_1 Первый объект для сравнения
	@param value_2 Второй объект для сравнения
	@param precision Точность (необязательный параметр)
	@return true - если два объекта равны в рамках precision, false - если два объекта не равны в рамках precision
	*/
	bool is_double_equal(const double value_1, const double value_2, const double precision = std::numeric_limits<double>::min());
}