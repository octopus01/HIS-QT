#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <list>
using namespace std;


class Staff
{		
	public:

		string name;			//����
		int id;					//����
		string type;			//���
		string password;		//��¼����
        Staff(string sta_name, int sta_id, string sta_type, string sta_password) :name(sta_name), id(sta_id), type(sta_type), password(sta_password)
        {
        }
        Staff();
        static list<Staff> Staff_list;
        static list <Staff>::iterator node1;
};
#endif
