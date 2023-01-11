#ifndef MYHEAD_H
#define MYHEAD_H
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <list>
#include <algorithm>
#include <sstream>
#include <string>
#include <QMessageBox>
#include <QString>
#include "class/Patient.h"
#include "class/Staff.h"
#include "class/Medicine.h"
using namespace std;
using std::setw;
void ChargeWork();
void DoctorWork();
void PharmacyWork();
void reg();
void writeList_to_File();
void writeList_to_File_staff();
void writeList_to_File_med();
void addNode_to_List(string, string);
void addNode_to_List_staff_doc(string,string);
void addNode_to_List_staff_med(string,string);
void addNode_to_List_medcine(string, int , float);
void readFile_to_List();
void readFile_to_List_staff();
void readFile_to_List_medicine();
bool check_name(string);
bool check_name_staff(string);
bool check_name_med(string);
bool Verify_accout(string, string);
bool Verify_accout_staff_doc(string, string);
bool Verify_accout_staff_med(string, string);
void encode();
void add_med(string,int);
void de_med(string,int);
void del_med(string);
void mod_p_med(string ,float);
#endif// MYHEAD_H
