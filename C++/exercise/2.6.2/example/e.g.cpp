#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	using namespace::std ;
	Sales_data data1,data2 ;
	string comma ;
	
	//输入销售数据，包括书号，单价，以及销售数量
	//book1数据
	cout << "请按照\"书号，单价，销售数量\"格式输入" << endl ;
	cin >> data1.book_NO >> comma >> data1.unity_price >> comma >> data1.sale_num ;
	data1.revenue = data1.unity_price * data1.sale_num ;
	//book2数据
	cin >> data2.book_NO >> comma >> data2.unity_price >> comma >> data2.sale_num ;
	data2.revenue = data2.unity_price * data2.sale_num ;
	
	//检查书号是否相同，相同则将收入相加并输出，不同则报错
	if (data1.book_NO == data2.book_NO) {
		double total_revenue = data1.revenue + data2.revenue ;
		unsigned total_sale_num = data1.sale_num + data2.sale_num ;
		if (total_sale_num != 0) {
		double average_price = total_revenue / total_sale_num ;
		cout << "total-saled-num" << '\t' << '\t' << "total-revenue" << '\t' << '\t' << "average-price" << endl ;
		cout << '\t' << total_sale_num   << '\t' << '\t' <<  total_revenue  << '\t' << '\t' <<  average_price  << endl ;
		}
		else {
		cout << "it is a bad news,the book has not been sold! " << endl ;
		}
		return 0 ;
	}
	else {
		cout << "Please input the same ISBN" << endl ;
		return -1 ;
	}
}
