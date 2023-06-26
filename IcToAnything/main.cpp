#include <iostream>
#include <string>
#include <cctype>
#include<conio.h>

using namespace std;

string Nama,Ic,nomatric,DOB,gend,from,AskUser;
string Star="\n*******************************************\n";
int tahun,bulan,hari,umur,jantina,negeri;

void IcToAnyting()
{
    cout<<Star;
    cout<<"      Welcome To Ic To Anything System";
    cout<<Star;
    cout<<"Name : ";
    cin>>Nama;
    cout<<"Ic : ";
    cin>>Ic;
    cout<<"No.Matric : ";
    cin>>nomatric;
    for (char& Nama : Nama)
    {
        Nama=toupper(Nama);
    }
    for (char& nomatric : nomatric)
    {
        nomatric=toupper(nomatric);
    }
}
void bfday(string Ic, int& umur,string& DOB)
{
    tahun=stoi(Ic.substr(0,2));
    if(tahun>=0 && tahun<=24)
    {
        tahun+=2000;
    }
    else
    {
        tahun+=1900;
    }
    umur=2023-tahun;
    bulan=stoi(Ic.substr(2,2));
    hari=stoi(Ic.substr(4,2));
    DOB=to_string(hari)+"/"+to_string(bulan)+"/"+to_string(tahun);
}
void Jntina(string Ic, string& gend)
{
    jantina=stoi(Ic.substr(11));
    jantina%=2;
    if(jantina==0)
    {
        gend="Female";
    }
    else
    {
        gend="Male";
    }
    for (char& gend : gend)
    {
        gend=toupper(gend);
    }
}
void Negeriasal(string Ic, string& from)
{
    negeri=stoi(Ic.substr(6,2));
    if (negeri==1||negeri==21||negeri==22||negeri==23||negeri==24)
    {
        from="Johor";
    }
    else if (negeri==2||negeri==25||negeri==26||negeri==27)
    {
        from="Kedah";
    }
    else if (negeri==3||negeri==28||negeri==29)
    {
        from="Kelantan";
    }
    else if (negeri==4||negeri==30)
    {
        from="Melaka";
    }
    else if (negeri==5||negeri==31||negeri==59)
    {
        from="Negeri Sembilan";
    }
    else if (negeri==6||negeri==32||negeri==33)
    {
        from="Pahang";
    }
    else if (negeri==7||negeri==34||negeri==35)
    {
        from="Pulau Pinang";
    }
    else if (negeri==8||negeri==36||negeri==37||negeri==38||negeri==39)
    {
        from="Perak";
    }
    else if (negeri==9||negeri==40)
    {
        from="Perlis";
    }
    else if (negeri==10||negeri==41||negeri==42||negeri==43||negeri==44)
    {
        from="Selangor";
    }
    else if (negeri==11||negeri==45||negeri==46)
    {
        from="Terengganu";
    }
    else if (negeri==12||negeri==47||negeri==48||negeri==49)
    {
        from="Sabah";
    }
    else if (negeri==13||negeri==50||negeri==51||negeri==52||negeri==53)
    {
        from="Sarawak";
    }
    else if (negeri==14||negeri==54||negeri==55||negeri==56||negeri==57)
    {
        from="Kuala Lumpur";
    }
    else if (negeri==15||negeri==58)
    {
        from="Labuan";
    }
    else if (negeri==16)
    {
        from="Putrajaya";
    }
    else
    {
        from="State Unknown";
    }
    for (char& from : from)
    {
        from=toupper(from);
    }
}
void Output()
{
    bfday(Ic,umur,DOB);
    Jntina(Ic,gend);
    Negeriasal(Ic,from);
    cout<<Star;
    cout<<" Thank you for using Ic To Anything System";
    cout<<Star;
    cout<<"Name : "<<Nama<<endl;
    cout<<"Ic : "<<Ic<<endl;
    cout<<"No.Matric : "<<nomatric<<endl;
    cout<<"Date Of Birth : "<<DOB<<endl;
    cout<<"Age : "<<umur<<endl;
    cout<<"Gender : "<<gend<<endl;
    cout<<"State Of Birth : "<<from<<endl;
    cout<<Star;
}
int main()
{
    while (true)
    {
        IcToAnyting();
        system("cls");
        Output();
        cout<<"Insert Y to Continue or any key to exit = ";
        cin>>AskUser;
        AskUser = toupper(AskUser[0]);
        if(AskUser!="Y")
        {
            break;
        }
    }
}
