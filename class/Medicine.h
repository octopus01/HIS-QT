#ifndef MEDICINE_H
#define MEDICINE_H
#include <iostream>
#include <list>
using namespace std;


class Medicine
{		
	public:
		string name;			//药名
		int id;					//代码
		int inventory;		//库存量
		float price;			//单价
       Medicine (string a, int b, int c, float d) : name(a), id(b), inventory(c), price(d)
        {
        }
       Medicine();
       static list <Medicine> Medicine_list;
       static list <Medicine>::iterator node2;
		
};
/*Medicine::Medicine (string a, int b, int c, float d) : name(a), id(b), inventory(c), price(d)
{
	
};
Medicine::Medicine() {};
list <Medicine> Medicine_list;
list <Medicine>::iterator node2;*/
#endif //
