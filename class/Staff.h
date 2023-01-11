#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <list>
using namespace std;


class Staff
{		
	public:

		string name;			//姓名
		int id;					//工号
		string type;			//身份
		string password;		//登录密码
        Staff(string sta_name, int sta_id, string sta_type, string sta_password) :name(sta_name), id(sta_id), type(sta_type), password(sta_password)
        {
        }
        Staff();
        static list<Staff> Staff_list;
        static list <Staff>::iterator node1;
};
#endif
