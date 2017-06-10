#include <iostream>
#include <string>
using namespace std;
class Adress{
public:
Adress(string name,string city,string street,int house);
    ~Adress();
string GetCity() const;
string GetStreet() const;
string GetName() const;
int GetHouse() const;
private:
    string City, Name, Street;
    int House;
};
Adress::Adress(string name, string city,string street,int house)
{
    Name=name;
    City=city;
Street=street;
House=house;
}
Adress::~Adress(){}
string Adress::GetCity()const {return City;}
string Adress::GetName()const {return Name;}
string Adress::GetStreet()const {return Street;}
int Adress::GetHouse()const {return House;}
int main()
{
    system("chcp 1251 >> null");
   string N,C,S;
    int H;
    cout<<"Название организации: ";
getline(cin,N);
cout<<"Город: ";
getline(cin,C);
cout<<"Улица: ";
getline(cin,S);
cout<<"№ дома: ";
cin>>H;
Adress Org(N,C,S,H);
cout<<"Организация "<<Org.GetName()<<" расположена по адресу: город "<<Org.GetCity()<<", улица "<<Org.GetStreet()<<", дом "<<Org.GetHouse()<<".\n";
system ("pause");
    return 0;
}
