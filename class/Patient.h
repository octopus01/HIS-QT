#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include <list>
using namespace std;

class Patient
{		
        public:
		string name;			//����
		int id;					//���
		string password;		//����
		string doctor; 
		string diagnosis;		//��Ͻ��
		string prescription;	//����
		int mednum;
		float fee;//�շ�
		int status;//״̬��ͨ��Ϊ0��1Ϊ�����ϣ�2Ϊ�ɷ����
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
