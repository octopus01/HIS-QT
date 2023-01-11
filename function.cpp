#include"class/Myhead.h"
Staff::Staff() {};
Patient::Patient() {};
Medicine::Medicine(){};
//全局变量的定义
list <Patient> Patient::Person;
list <Patient>::iterator Patient::node;
list <Staff> Staff::Staff_list;
list <Staff>::iterator Staff::node1;
list <Medicine> Medicine::Medicine_list;
list <Medicine>::iterator Medicine::node2;
void writeList_to_File() {
    ofstream outfile;
    ofstream file_writer("Person.txt", ios_base::out);
    outfile.open("Person.txt");
    list<Patient>::iterator node = Patient::Person.begin();//局部变量，防止干扰迭代器位置
    node = Patient::Person.begin();
    while (node != Patient::Person.end())
    {
        outfile << node->name << " " << node->id << " " << node->password << " " << node->doctor << " " << node->diagnosis << " " << node->prescription << " " <<node->mednum <<" "<< node->fee <<" "<<node->status << endl;
        ++node;
    }

    outfile.close();
}
void writeList_to_File_staff()
{
    ofstream outfile;
    ofstream file_writer("Staff.txt", ios_base::out);
    outfile.open("Staff.txt");
    list<Staff>::iterator node1 = Staff::Staff_list.begin();
    node1 = Staff::Staff_list.begin();
    while (node1 != Staff::Staff_list.end())
    {
        outfile << node1->name << " " << node1->id << " " << node1->type << " " << node1->password << endl;
        ++node1;
    }

    outfile.close();
}
void writeList_to_File_med() {

    ofstream outfile;
    ofstream file_writer("Medicine.txt", ios_base::out);
    outfile.open("Medicine.txt");
    list<Medicine>::iterator node2 = Medicine::Medicine_list.begin();
    node2 = Medicine::Medicine_list.begin();
    while (node2 != Medicine::Medicine_list.end())
    {
        outfile << node2->name << " " << node2->id << " " << node2-> inventory<< " " << node2->price << endl;
        ++node2;
    }

    outfile.close();
}
void addNode_to_List(string pat_name, string pat_password)
{
    string name1 = pat_name;
    int id = Patient::Person.size() + 1;
    string password = pat_password;
    string doctor = "0";
    string diagnosis = "0";		//诊断结果
    string prescription = "0";	//处方
    int mednum = 0;
    float fee=0;
    int status = 0;
    Patient TempPerson(name1, id, password, doctor, diagnosis, prescription,mednum,fee,status);
    Patient::Person.push_back(TempPerson);

}
void addNode_to_List_staff_doc(string sta_name, string sta_password)
{
    string name1 = sta_name;
    int id = Staff::Staff_list.size() + 1;
    string password = sta_password;
    string type;
    type = "医护";
    Staff Staff1(name1, id, type, password);
    Staff::Staff_list.push_back(Staff1);
    cout << "你的卡号为：" << id;
}
void addNode_to_List_staff_med(string sta_name, string sta_password)
{
        string name1 = sta_name;
        int id = Staff::Staff_list.size() + 1;
        string password = sta_password;
        string type;
        type = "药房";
        Staff Staff1(name1, id, type, password);
        Staff::Staff_list.push_back(Staff1);
}
void addNode_to_List_medcine(string med_name, int num, float price)
{
    string name1 = med_name;
    int id = Medicine::Medicine_list.size() + 1;
    int number = num;
    float pp = price;
    Medicine Med(name1, id, number, pp);
    Medicine::Medicine_list.push_back(Med);
}

void readFile_to_List() {
    ifstream infile;
    infile.open("Person.txt");
    Patient TempPerson;
    while (!infile.eof()) {
        infile >> TempPerson.name >> TempPerson.id >> TempPerson.password >> TempPerson.doctor >> TempPerson.diagnosis >> TempPerson.prescription>>TempPerson.mednum>>TempPerson.fee>>TempPerson.status;
        Patient::Person.push_back(TempPerson);
    }
    Patient::node = Patient::Person.end();
    Patient::Person.pop_back();
}
void readFile_to_List_staff() {
    ifstream infile;
    infile.open("Staff.txt");
    Staff Staff1;
    while (!infile.eof()) {
        infile >> Staff1.name >> Staff1.id >> Staff1.type >> Staff1.password ;
        Staff::Staff_list.push_back(Staff1);
    }
    Staff::node1 = Staff::Staff_list.end();
    Staff::Staff_list.pop_back();
}

bool check_name(string name2) {
    for (Patient::node = Patient::Person.begin(); Patient::node != Patient::Person.end(); ++Patient::node)
    {
        if (Patient::node->name == name2 || name2 == "admin") {
            return false;
        }
    }
    return true;
}
bool check_name_staff(string name3) {
    for (Staff::node1 = Staff::Staff_list.begin(); Staff::node1 != Staff::Staff_list.end(); ++Staff::node1)
    {
        if (Staff::node1->name == name3) {
            return false;
        }
    }
    return true;
}
bool check_name_med(string name) {
    for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
    {
        if (Medicine::node2->name == name || name == "admin") {
            return false;
        }
    }
    return true;
}
bool Verify_accout(string guest_name, string guest_password) {
    for (Patient::node = Patient::Person.begin(); Patient::node != Patient::Person.end(); ++Patient::node)
    {
        if (Patient::node->name == guest_name && Patient::node->password == guest_password) {
            return true;
        }
    }

    return false;
}
bool Verify_accout_staff_doc(string guest_name, string guest_password){
    for (Staff::node1 = Staff::Staff_list.begin(); Staff::node1 != Staff::Staff_list.end(); ++Staff::node1)
    {
        if (Staff::node1->name == guest_name && Staff::node1->password == guest_password && Staff::node1->type=="医护")
        {
            return true;
        }
    }

    return false;
}
bool Verify_accout_staff_med(string guest_name, string guest_password) {
    for (Staff::node1 = Staff::Staff_list.begin(); Staff::node1 != Staff::Staff_list.end(); ++Staff::node1)
    {
        if (Staff::node1->name == guest_name && Staff::node1->password == guest_password && Staff::node1->type == "药房")
        {
            return true;
        }
    }

    return false;
}
void encode()
{
    string s1;
    string s2;
    int num=1;
    int j=0;
    s1 = (*Patient::node).prescription;
    for (int i = 0, len = s1.length(); i < len; i++)
    {
        if ((*Patient::node).prescription[i]=='_')
        {
            j = i;
            while (s1[j] != '*') j++;
            s2 = s1.substr(i+1, j - i-1);
            for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
            {
                if (Medicine::node2->name == s2)
                    break;
            }
            i = j ;
            while (s1[i] != '_'&& i<len) i++;
            num = atoi(s1.substr(j + 1, i - j - 1).c_str());
            (*Medicine::node2).inventory -= num;
            i--;
        }
    }
}
void readFile_to_List_medicine() {
    ifstream infile;
    infile.open("Medicine.txt");
    Medicine TempMedicine;
    while (!infile.eof()) {
        infile >> TempMedicine.name >> TempMedicine.id >> TempMedicine.inventory >> TempMedicine.price;
        Medicine::Medicine_list.push_back(TempMedicine);
    }
    Medicine::node2 = Medicine::Medicine_list.end();
    Medicine::Medicine_list.pop_back();
}
void add_med(string na,int num)
{
for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
            {
                if (Medicine::node2->name == na )
                {

                    (*Medicine::node2).inventory += num ;
                    writeList_to_File_med();
                    break;
                }
            }
}
void de_med(string na,int num)
{
for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
            {
                if (Medicine::node2->name == na )
                {

                    (*Medicine::node2).inventory -= num ;
                    writeList_to_File_med();
                    break;
                }
            }
}
void del_med(string na)
{
    for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
                {
                    if (Medicine::node2->name == na)
                        break;
                }
    Medicine::Medicine_list.erase(Medicine::node2);
}
void mod_p_med(string na ,float num)
{
for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
            {
                if (Medicine::node2->name == na) (*Medicine::node2).price = num;
               }
}
