#ifndef MEDICINE_H
#define MEDICINE_H
#include <iostream>
#include <list>
using namespace std;


class Medicine
{		
	public:
		string name;			//ҩ��
		int id;					//����
		int inventory;		//�����
		float price;			//����
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
