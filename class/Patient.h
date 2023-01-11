#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include <list>
using namespace std;

class Patient
{		
        public:
		string name;			//姓名
		int id;					//编号
		string password;		//密码
		string doctor; 
		string diagnosis;		//诊断结果
		string prescription;	//处方
		int mednum;
		float fee;//收费
		int status;//状态，通常为0，1为诊断完毕，2为缴费完毕
        Patient(string pat_name, int pat_id, string pat_status, string pat_doc, string pat_diag, string pat_scription, int m, float f,int s) : name(pat_name), id(pat_id), password(pat_status), doctor(pat_doc), diagnosis(pat_diag), prescription(pat_scription), mednum(m), fee(f), status(s)
        {
        }
        Patient();
        static list <Patient> Person;
        static list <Patient>::iterator node;
};
/*Patient::Patient(string pat_name, int pat_id, string pat_status, string pat_doc, string pat_diag, string pat_scription, int m, float f,int s) : name(pat_name), id(pat_id), password(pat_status), doctor(pat_doc), diagnosis(pat_diag), prescription(pat_scription), mednum(m), fee(f), status(s)
{

};
Patient::Patient() {};
list <Patient> Person;
list <Patient>::iterator node;*/
#endif
