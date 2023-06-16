// I HAVE USED SWITCH, IF-ELSE,  FUNCTIONS AND SOME KIND OF NOOB TYPE OF ANIMATION IN THIS.
// HOPE YOU WILL LIKE IT :)
#include<iostream>
#include<windows.h>

using namespace std;

//FUNCTIONS FOR TRIP PLANNING LIST.
void murree()
{
    int murree1;
    int goodnight=2999;
    int morning=1999;
    int days,night;
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t   |-- MURREE --|"<<endl<<endl;
    cout<<"  >>> Great decision !!! No doubt, that Murree is famous for it's enchanting beauty and beautiful mountains. "<<endl<<endl;
    cout<<"      Total Hotels that we have in MURREE are: 4"<<endl<<endl;
    cout<<"\t\t\t\t ~ At Kashmir Point"<<endl;
    cout<<"\t\t\t\t ~ At Nathiagali"<<endl;
    cout<<"\t\t\t\t ~ At Patriata"<<endl;
    cout<<"\t\t\t\t ~ At Bhurban"<<endl<<endl;
    cout<<" -- These are the points, on which we have hotel in MURREE."<<endl<<endl;
    cout<<"\t 1 night expenditure: "<<goodnight<<endl;
    cout<<"\t 1 morning expenditure: "<<morning<<endl;
    cout<<"\t How many days you want to spend in muree: ";
    cin>>days;
    cout<<endl;
    cout<<"\t How many nights you want to spend in muree: ";
    cin>>night;
    cout<<endl;
    int total= (days*morning)+(night*goodnight);
    cout<<"\t Total expenditure will be: "<<total<<endl;
    cout<<" >>> For further booking you can select any of the option from 1-9: ";
    cin>>murree1;
    cout<<endl;
    system("cls");
}

void swat()
{
    int days,night;
    int goodnight=5999;
    int morning=3999;
    int swat1;
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t   |-- SWAT --|"<<endl<<endl;
    cout<<"  >>> Great decision !!! No doubt, that SWAT is famous for it's beautiful mountains and greeny meadows. "<<endl<<endl;
    cout<<"      Total Hotels that we have in SWAT are: 2"<<endl<<endl;
    cout<<"\t\t\t\t ~ At Malam Jaba"<<endl;
    cout<<"\t\t\t\t ~ At Kalam Valley"<<endl<<endl;
    cout<<" These are the points, on which we have hotel in SWAT."<<endl<<endl;
    cout<<"\t 1 night expenditure: "<<goodnight<<endl;
    cout<<"\t 1 morning expenditure: "<<morning<<endl;
    cout<<"\t How many days you want to spend in muree: ";
    cin>>days;
    cout<<endl;
    cout<<"\t How many nights you want to spend in muree: ";
    cin>>night;
    cout<<endl;
    int total= (days*morning)+(night*goodnight);
    cout<<"\t Total expenditure will be: "<<total<<endl<<endl;
    cout<<" >>> For further booking you can select any of the option from 1-9: ";
    cin>>swat1;
    cout<<endl;
    system("cls");
}
void peshawar()
{
    int morning=2000;
    int goodnight=2500;
    int days,night;
    int peshawar1;
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t   |-- PESHAWAR --|"<<endl<<endl;
    cout<<"  >>> Great decision !!! No doubt, that PESHAWAR is famous for it's welcoming culture and pure-hearted people. "<<endl<<endl;
    cout<<"      Total Hotels that we have in PESHAWAR are: 2"<<endl<<endl;
    cout<<"\t\t\t\t ~ At Hindu Kush mountains"<<endl;
    cout<<"\t\t\t\t ~ At Khyber Pass"<<endl<<endl;
    cout<<" These are the points, on which we have hotel in PESHAWAR."<<endl;
    cout<<"\t 1 night expenditure: "<<goodnight<<endl;
    cout<<"\t 1 morning expenditure: "<<morning<<endl;
    cout<<"\t How many days you want to spend in PESHAWAR: ";
    cin>>days;
    cout<<endl;
    cout<<"\t How many nights you want to spend in PESHAWAR: ";
    cin>>night;
    cout<<endl;
    int total= (days*morning)+(night*goodnight);
    cout<<"\t Total expenditure will be: "<<total<<endl;
    cout<<" >>> For further booking you can select any of the option from 1-9: ";
    cin>>peshawar1;
    cout<<endl;
    system("cls");
}
void kalar_kahar()
{
    int days,night;
    int goodnight=3500;
    int morning=1999;
    int kalarkahar1;
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t   |-- KALAR KAHAR --|"<<endl<<endl;
    cout<<"  >>> Great decision !!! No doubt, that KALAR-KAHAR is famous for it's high & low mountains, also with variety of hotels. "<<endl<<endl;
    cout<<"      Total Hotels that we have in KALAR-KAHAR are: 1"<<endl<<endl;
    cout<<"\t\t\t\t ~ At Kalar-Kahar museum"<<endl<<endl;
    cout<<" This is the point, at which we have hotel in Kalar-Kahar."<<endl;
    cout<<"\t 1 night expenditure: "<<goodnight<<endl;
    cout<<"\t 1 morning expenditure: "<<morning<<endl;
    cout<<"\t How many days you want to spend in KALAR-KAHAR: ";
    cin>>days;
    cout<<endl;
    cout<<"\t How many nights you want to spend in KALAR-KAHAR: ";
    cin>>night;
    cout<<endl;
    int total= (days*morning)+(night*goodnight);
    cout<<"\t Total expenditure will be: "<<total<<endl;
    cout<<" >>> For further booking you can select any of the option from 1-9: ";
    cin>>kalarkahar1;
    cout<<endl;
    system("cls");
}
void islamabad()
{
    int days,night;
    int goodnight=6500;
    int morning=5000;
    int islamabad1;
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t   |-- ISLAMABAD --|"<<endl<<endl;
    cout<<"  >>> Great decision !!! No doubt, that ISLAMABAD is famous for it's beautiful scenes and aesthetic vibes. "<<endl<<endl;
    cout<<"      Total Hotels that we have in ISLAMABD are: 4"<<endl<<endl;
    cout<<"\t\t\t\t ~ At Margala hils"<<endl;
    cout<<"\t\t\t\t ~ At Damn-e-koh"<<endl;
    cout<<"\t\t\t\t ~ At Rawal Lake"<<endl;
    cout<<"\t\t\t\t ~ At Shakar-Pariyan Hills"<<endl<<endl;
    cout<<" These are the points, on which we have hotel in ISLAMABAD."<<endl;
    cout<<"\t 1 night expenditure: "<<goodnight<<endl;
    cout<<"\t 1 morning expenditure: "<<morning<<endl;
    cout<<"\t How many days you want to spend in ISLAMABAD: ";
    cin>>days;
    cout<<endl;
    cout<<"\t How many nights you want to spend in ISLAMABAD: ";
    cin>>night;
    cout<<endl;
    int total= (days*morning)+(night*goodnight);
    cout<<"\t Total expenditure will be: "<<total<<endl<<endl;
    cout<<" >>> For further booking you can select any of the option from 1-9: ";
    cin>>islamabad1;
    cout<<endl;
    system("cls");
}

//FUNCTION FOR ROOMS AVAILABLITY FOR MURREE.
//THESE ARE THE KASHMIR POINT ROOMS BEFORE.
int kashmirpointrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~100~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~101~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~102~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~103~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~104~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~105~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~106~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~107~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~108~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~109~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~110~    \t\t UNBOOKED"<<endl<<endl;
}
//THESE ARE THE KASHMIR POINT ROOMS AFTER.
void kasmirpointroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<endl<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    if(room==100 || room==101 || room==102 || room==103 || room==104 || room==105 || room==106 || room==107 || room==108 || room==109 || room==110)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t "<<"~"<<room<<"~"<<"  \t\t ";
    if(room==100)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~101~  \t\t ";
    if(room==101)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~102~  \t\t ";
    if(room==102)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~103~  \t\t ";
    if(room==103)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~104~  \t\t ";
    if(room==104)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~105~  \t\t ";
    if(room==105)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~106~  \t\t ";
    if(room==106)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~107~  \t\t ";
    if(room==107)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~108~  \t\t ";
    if(room==108)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~109~  \t\t ";
    if(room==109)
    {

        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~110~  \t\t ";
    if(room==110)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}
//THESE ARE THE NATHIAGALI ROOMS BEFORE.
void nathiagalirooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~200~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~201~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~202~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~203~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~204~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~205~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~206~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~207~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~208~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~209~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~210~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE NATHIAGALI ROOMS AFTER.
void nathiagaliroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==200 || room==201 || room==202 || room==203 || room==204 || room==205 || room==206 || room==207 || room==208 || room==209 || room==210)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~200~  \t\t ";
    if(room==200)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~201~  \t\t ";
    if(room==201)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~202~  \t\t ";
    if(room==202)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~203~  \t\t ";
    if(room==203)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~204~  \t\t ";
    if(room==204)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~205~  \t\t ";
    if(room==205)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~206~  \t\t ";
    if(room==206)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~207~  \t\t ";
    if(room==207)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~208~  \t\t ";
    if(room==208)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~209~  \t\t ";
    if(room==209)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~210~  \t\t ";
    if(room==210)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//THESE ARE THE PATRATIA ROOMS BEFORE.
void patratiarooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~300~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~301~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~302~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~303~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~304~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~305~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~306~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~307~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~308~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~309~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~310~    \t\t UNBOOKED"<<endl<<endl;
}
//THESE ARE THE PATRATIA ROOMS AFTER.
void patratiaroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==300 || room==301 || room==302 || room==303 || room==304 || room==305 || room==306 || room==307 || room==308 || room==309 || room==310)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~300~  \t\t ";
    if(room==300)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~301~  \t\t ";
    if(room==301)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~302~  \t\t ";
    if(room==302)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~303~  \t\t ";
    if(room==303)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~304~  \t\t ";
    if(room==304)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~305~  \t\t ";
    if(room==305)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~306~  \t\t ";
    if(room==306)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~307~  \t\t ";
    if(room==307)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~308~  \t\t ";
    if(room==308)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~309~  \t\t ";
    if(room==309)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~310~  \t\t ";
    if(room==310)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//THESE ARE THE BHURBAN ROOMS BEFORE.
void bhurbanrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~400~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~401~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~402~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~403~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~404~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~405~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~406~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~407~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~408~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~409~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~410~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE BHURBAN ROOMS AFTER.
void bhurbanroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==400 || room==401 || room==402 || room==403 || room==404 || room==405 || room==406 || room==407 || room==408 || room==409 || room==410)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~400~  \t\t ";
    if(room==400)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~401~  \t\t ";
    if(room==401)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~402~  \t\t ";
    if(room==402)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~403~  \t\t ";
    if(room==403)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~404~  \t\t ";
    if(room==404)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~405~  \t\t ";
    if(room==405)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~406~  \t\t ";
    if(room==406)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~407~  \t\t ";
    if(room==407)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~408~  \t\t ";
    if(room==408)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~409~  \t\t ";
    if(room==409)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~410~  \t\t ";
    if(room==410)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//FUNCTIONS FOR ROOM AVAILABILITY FOR SWAT.
//THESE ARE THE MALAM-JABA ROOMS BEFORE.
void malamjabarooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~01~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~02~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~03~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~04~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~05~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~06~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~07~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~08~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~09~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~10~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE BHURBAN ROOMS AFTER.
void malamjabaroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==01 || room==02 || room==03 || room==04 || room==05 || room==06 || room==07 || room==8 || room==9 || room==010)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~01~  \t\t ";
    if(room==01)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~02~  \t\t ";
    if(room==02)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~03~  \t\t ";
    if(room==03)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~04~  \t\t ";
    if(room==04)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~05~  \t\t ";
    if(room==05)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~06~  \t\t ";
    if(room==06)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~07~  \t\t ";
    if(room==07)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~08~  \t\t ";
    if(room==8)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~09~  \t\t ";
    if(room==9)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~10~  \t\t ";
    if(room==10)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//THESE ARE THE KALLAM-VALLEY ROOMS BEFORE.
void kalamvalleyrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~50~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~51~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~52~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~53~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~54~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~55~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~56~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~57~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~58~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~59~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE KALLAM-VALLEY ROOMS AFTER.
void kalamvalleyroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==50 || room==51 || room==52 || room==53 || room==54 || room==55 || room==56 || room==57 || room==58 || room==59)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~50~  \t\t ";
    if(room==50)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~51~  \t\t ";
    if(room==51)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~52~  \t\t ";
    if(room==52)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~53~  \t\t ";
    if(room==53)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~54~  \t\t ";
    if(room==54)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~55~  \t\t ";
    if(room==55)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~56~  \t\t ";
    if(room==56)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~57~  \t\t ";
    if(room==57)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~58~  \t\t ";
    if(room==58)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~59~  \t\t ";
    if(room==59)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//FUNCTIONS FOR ROOM AVAILABILITY PESHAWAR.
//THESE ARE THE HINDUKUSH ROOMS BEFORE.
void hindukushrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~1000~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1001~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1002~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1003~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1004~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1005~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1006~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1007~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1008~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~1009~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE HINDU-KUSH ROOMS AFTER.
void hindukushroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==1000 || room==1001 || room==1002 || room==1003 || room==1004 || room==1005 || room==1006 || room==1007 || room==1008 || room==1009)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~1000~  \t\t ";
    if(room==1000)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1001~  \t\t ";
    if(room==1001)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1002~  \t\t ";
    if(room==1002)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1003~  \t\t ";
    if(room==1003)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1004~  \t\t ";
    if(room==1004)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1005~  \t\t ";
    if(room==1005)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1006~  \t\t ";
    if(room==1006)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1007~  \t\t ";
    if(room==1007)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1008~  \t\t ";
    if(room==1008)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~1009~  \t\t ";
    if(room==1009)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//THESE ARE THE KHYBER-PASS ROOMS BEFORE.
void khyberpassrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~900~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~901~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~902~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~903~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~904~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~905~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~906~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~907~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~908~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~909~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE KHYBER-PASS ROOMS AFTER.
void khyberpassroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==900 || room==901 || room==902 || room==903 || room==904 || room==905 || room==906 || room==907 || room==908 || room==909)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~900~  \t\t ";
    if(room==900)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~901~  \t\t ";
    if(room==901)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~902~  \t\t ";
    if(room==902)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~903~  \t\t ";
    if(room==903)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~904~  \t\t ";
    if(room==904)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~905~  \t\t ";
    if(room==905)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~906~  \t\t ";
    if(room==906)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~907~  \t\t ";
    if(room==907)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~908~  \t\t ";
    if(room==908)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~909~  \t\t ";
    if(room==909)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//FUNCTIONS FOR ROOM AVAILIBILITY FOR KALAR-KAHAR.
//THESE ARE THE KALAR-KAHAR ROOMS BEFORE.
void kalarkaharrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~70~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~71~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~72~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~73~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~74~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~75~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~76~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~77~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~78~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~79~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE KALAR-KAHAR ROOMS AFTER.
void kalakaharroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==70 || room==71 || room==72 || room==73 || room==74 || room==75 || room==76 || room==77 || room==78 || room==79)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~70~  \t\t ";
    if(room==70)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t 71~  \t\t ";
    if(room==71)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~72~  \t\t ";
    if(room==72)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~73~  \t\t ";
    if(room==73)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~74~  \t\t ";
    if(room==74)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~75~  \t\t ";
    if(room==75)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~76~  \t\t ";
    if(room==76)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~77~  \t\t ";
    if(room==77)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~78~  \t\t ";
    if(room==78)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~79~  \t\t ";
    if(room==79)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//FUNCTIONS FOR ROOM AVAILIBILITY FOR ISLAMABAD MONAL.
//THESE ARE THE MARGALA-HILLS ROOMS BEFORE.
void margalahills()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~20~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~21~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~22~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~23~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~24~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~25~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~26~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~27~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~28~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~29~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE MARGALA-HILLS ROOMS AFTER.
void margalaroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==20 || room==21 || room==22 || room==23 || room==24 || room==25 || room==26 || room==27 || room==28 || room==29)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~20~  \t\t ";
    if(room==20)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t 21~  \t\t ";
    if(room==21)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~22~  \t\t ";
    if(room==22)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~23~  \t\t ";
    if(room==23)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~24~  \t\t ";
    if(room==24)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~25~  \t\t ";
    if(room==25)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~26~  \t\t ";
    if(room==26)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~27~  \t\t ";
    if(room==27)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~28~  \t\t ";
    if(room==28)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~29~  \t\t ";
    if(room==29)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//THESE ARE THE DAMN-E-KOH ROOMS BEFORE.
void damnekohrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~50~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~51~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~52~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~53~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~54~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~55~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~56~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~57~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~58~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~59~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE DAMN-E-KOH ROOMS AFTER.
void damnekohroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==50 || room==51 || room==52 || room==53 || room==54 || room==55 || room==56 || room==57 || room==58 || room==59)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~50~  \t\t ";
    if(room==50)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~51~  \t\t ";
    if(room==51)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~52~  \t\t ";
    if(room==52)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~53~  \t\t ";
    if(room==53)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~54~  \t\t ";
    if(room==54)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~55~  \t\t ";
    if(room==55)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~56~  \t\t ";
    if(room==56)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~57~  \t\t ";
    if(room==57)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~58~  \t\t ";
    if(room==58)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~59~  \t\t ";
    if(room==59)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//THESE ARE THE RAWAL-LAKE ROOMS BEOFRE.
void rawallakerooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~80~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~81~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~82~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~83~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~84~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~85~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~86~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~87~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~88~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~89~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE RAWAL-LAKE ROOMS AFTER.
void rawallakeroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==80 || room==81 || room==82 || room==83 || room==84 || room==85 || room==86 || room==87 || room==88 || room==89)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~80~  \t\t ";
    if(room==80)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~81~  \t\t ";
    if(room==81)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~82~  \t\t ";
    if(room==82)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~83~  \t\t ";
    if(room==83)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~84~  \t\t ";
    if(room==84)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~85~  \t\t ";
    if(room==85)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~86~  \t\t ";
    if(room==86)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~87~  \t\t ";
    if(room==87)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~88~  \t\t ";
    if(room==88)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~89~  \t\t ";
    if(room==89)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

//THESE ARE THE SHAKAR-PARIYAN ROOMS BEFORE.
void shakarpariyanrooms()
{
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~30~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~31~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~32~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~33~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~34~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~35~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~36~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~37~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~38~    \t\t UNBOOKED"<<endl;
    cout<<"\t\t\t\t\t ~39~    \t\t UNBOOKED"<<endl<<endl;
}

//THESE ARE THE SHAKAR-PARIYAN ROOMS AFTER.
void shakarpariyanroomsafter()
{
    int room;
    cout<<"\t Maximum room a user can book is: 1"<<endl;
    cout<<"\t Enter any ROOM.NO you want to book: ";
    cin>>room;
    cout<<endl<<endl;
    if(room==30 || room==31 || room==32 || room==33 || room==34 || room==35 || room==36 || room==37 || room==38 || room==39)
    {
    cout<<"\t ROOM | "<<room<<" | has been booked."<<endl<<endl;
    }
    else
    {
        cout<<"\t\t ROOM | "<<room<<" | does not exist"<<endl<<endl;
        cout<<"\t\t INVALID ROOM.NO !"<<endl<<endl;
    }
    cout<<"\t\t\t\t\t ROOM.NO  \t\t STATUS"<<endl;
    cout<<"\t\t\t\t ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t ~30~  \t\t ";
    if(room==30)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t 31~  \t\t ";
    if(room==31)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~32~  \t\t ";
    if(room==32)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~33~  \t\t ";
    if(room==33)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~34~  \t\t ";
    if(room==34)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~35~  \t\t ";
    if(room==35)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~36~  \t\t ";
    if(room==36)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~37~  \t\t ";
    if(room==37)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~38~  \t\t ";
    if(room==38)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
    cout<<"\t\t\t\t\t ~39~  \t\t ";
    if(room==39)
    {
        cout<<"BOOKED"<<endl;
    }
    else
    {
        cout<<"UNBOOKED"<<endl;
    }
}

int main()
{
    cout<<endl<<endl;

    cout<<"\t\t\t\t\t Project Topic = [ ~ HOTEL BOOKING SYSTEM ~ ]"<<endl<<endl;
    cout<<"\t\t\t\t\t Group Members: "<<endl;
    cout<<"\t\t\t\t\t              1) Muhammad Taha  (70138192) \n";
    cout<<"\t\t\t\t\t              2) Bilawal Sultan (79140805)\n";
    cout<<"\t\t\t\t\t              3) Jawad Zaheer   (70138509)\n";
    cout<<endl;
    cout<<"\t\t\t\t\t Sumbitted to: \n";
    cout<<"\t\t\t\t\t              < Sir Adnan >"<<endl;
    cout<<"\t\t\t\t\t              < Sir M.Ahmed Bilal >"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t   Loading ";
    char x=219;
    for(int i=0; i<25; i++)
    {
        cout<<x;
        if(i<10)
        {
            Sleep(500);
        }
        else if(i<=15)
        {
            Sleep(200);
        }
        else if(i>=20)
        {
            Sleep(100);
        }
    }
    system("cls");
    menu:
    cout<<"\t\t\t\t\t ====================================== "<<endl;
    cout<<"\t\t\t\t\t       WELCOME TO TAHA OASIS RESORT"<<endl;
    cout<<"\t\t\t\t\t ====================================== "<<endl;
    cout<<endl<<endl;
    cout<<"\t\t\t\t     | S.No | \t\t\t | Functionalities | "<<endl;
    cout<<"\t\t\t\t   ----------------------------------------------------"<<endl;
    cout<<"\t\t\t\t        1.    \t\t\t     Where are you planning your trip"<<endl;
    cout<<"\t\t\t\t        2.    \t\t\t     Rooms available list"<<endl;
    cout<<"\t\t\t\t        3.    \t\t\t     Total Persons & Total Rooms you need"<<endl;
    cout<<"\t\t\t\t        4.    \t\t\t     EXIT"<<endl;
    cout<<endl;
    int option;
    cout<<"\t Enter S.No here: ";
    cin>>option;
    cout<<endl;
    switch (option)
    {

        //CASE TO SELECT CITY & FOR PLANNING TRIP
    case 1:
        {
            int opt;
            cout<<"\t\t\t\t\t\t      | PLANNING TRIP |"<<endl;
            cout<<"\t Choose any of the option: "<<endl;
            cout<<"\t\t\t 1) Murree"<<endl;
            cout<<"\t\t\t 2) Swat"<<endl;
            cout<<"\t\t\t 3) Peshawar"<<endl;
            cout<<"\t\t\t 4) Kalar Kahar"<<endl;
            cout<<"\t\t\t 5) Islamabad Monal"<<endl;
            cout<<"\t\t\t 6) -- EXIT --"<<endl<<endl;
            cout<<"\t\t\t Enter any of the number related to your destiny: ";
            cin>>opt;

            cout<<endl;
            if(opt==1)
            {
                murree();
                goto menu;
            }
            else if(opt==2)
            {
                swat();
                goto menu;
            }
            else if(opt==3)
            {
                peshawar();
                goto menu;
            }
            else if(opt==4)
            {
                kalar_kahar();
                goto menu;
            }
            else if(opt==5)
            {
                islamabad();
                goto menu;
            }
            else if(opt==6)
            {
                goto exit2;
            }
            else if(opt!=1 && opt!=2 && opt!=3 && opt!=4 && opt!=5 && opt!=6)
            {
                cout<<"\t\t\t\t INVALID NUMBER OPTION!!!"<<endl<<endl;
                goto menu;
            }
            break;
        }

        //CASE FOR ROOMS AVAILBILITY LIST
    case 2:
        {
            menu2:
            cout<<"\t\t\t\t\t\t      | ROOMS AVAILIBILITY LIST |"<<endl<<endl;
            cout<<"\t\t Select city: "<<endl<<endl;
            cout<<"\t\t Where you want to book your hotel >>"<<endl<<endl;
            cout<<"\t\t\t 10) Murree"<<endl;
            cout<<"\t\t\t 11) Swat"<<endl;
            cout<<"\t\t\t 12) Peshawar"<<endl;
            cout<<"\t\t\t 13) Kalar Kahar"<<endl;
            cout<<"\t\t\t 14) Islamabad Monal"<<endl;
            cout<<"\t\t\t 15) -- EXIT --"<<endl<<endl;
            int user;
            cout<<"\t Select City here, where you want to book your trip: ";
            cin>>user;
            cout<<endl<<endl;
            system("cls");
            if(user==10)
            {
                int rooms;
                cout<<"\t\t\t\t\t\t ============================================"<<endl;
                cout<<"\t\t\t\t\t\t        WELCOME TO TAHA OASIS HOTEL MURREE"<<endl;
                cout<<"\t\t\t\t\t\t ==========================================="<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t   Great decision ! MURREE !"<<endl;
                cout<<"\t 0 >> Kashmir point"<<endl;



                cout<<"\t 1 >> Nathiagali"<<endl;
                cout<<"\t 2 >> Patratia"<<endl;
                cout<<"\t 3 >> Bhurban"<<endl<<endl;
                cout<<"\t Select where you want to book room in MURREE: ";
                cin>>rooms;
                if(rooms==0)
                {
                kashmirpointrooms();
                kasmirpointroomsafter();
                int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==1)
                {
                    nathiagalirooms();
                    nathiagaliroomsafter();
                    int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==2)
                {
                    patratiarooms();
                    patratiaroomsafter();
                    int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==3)
                {
                    bhurbanrooms();
                    bhurbanroomsafter();
                    int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else
                {
                    cout<<"\n\n\n\n \t\t\t\t You choose an INVALID NUMBER !!!"<<endl;
                    cout<<endl;
                    goto exit2;
                }
            }
            else if(user==11)
            {
                int rooms;
                cout<<"\t\t\t\t\t\t ============================================"<<endl;
                cout<<"\t\t\t\t\t\t        WELCOME TO TAHA OASIS HOTEL SWAT"<<endl;
                cout<<"\t\t\t\t\t\t ==========================================="<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t   Great decision ! SWAT !"<<endl;
                cout<<"\t 0 >> Malam Jaba"<<endl;
                cout<<"\t 1 >> Kalam Valley"<<endl<<endl;
                cout<<"\t Select where you want to book room in SWAT: ";
                cin>>rooms;
                if(rooms==0)
                {
                malamjabarooms();
                malamjabaroomsafter();
                int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==1)
                {
                    kalamvalleyrooms();
                    kalamvalleyroomsafter();
                       int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else
                {
                    cout<<"\t You choose an INVALID NUMBER !!!";
                    cout<<endl;
                    goto menu;
                }
            }
            else if(user==12)
            {
                int rooms;
                cout<<"\t\t\t\t\t\t ============================================"<<endl;
                cout<<"\t\t\t\t\t\t        WELCOME TO TAHA OASIS HOTEL PESHAWAR"<<endl;
                cout<<"\t\t\t\t\t\t ==========================================="<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t   Great decision ! PESHAWAR !"<<endl;
                cout<<"\t 0 >> Hindu-Kush"<<endl;
                cout<<"\t 1 >> Khyber Pass"<<endl<<endl;
                cout<<"\t Select where you want to book room in PESHAWAR: ";
                cin>>rooms;
                if(rooms==0)
                {
                hindukushrooms();
                hindukushroomsafter();
                   int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==1)
                {
                    khyberpassrooms();
                    khyberpassroomsafter();
                       int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else
                {
                    cout<<"\t You choose an INVALID NUMBER !!!";
                    goto menu;
                }
            }
            else if(user==13)
            {
                int rooms;
                cout<<"\t\t\t\t\t\t ============================================"<<endl;
                cout<<"\t\t\t\t\t\t        WELCOME TO TAHA OASIS HOTEL Kalar-Kahar"<<endl;
                cout<<"\t\t\t\t\t\t ==========================================="<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t   Great decision ! Kalar-Kahar !"<<endl;
                cout<<"\t 0 >> Kalar-Kahar museum"<<endl<<endl;
                cout<<"\t Select where you want to book room in KALAR-KAHAR: ";
                cin>>rooms;
                if(rooms==0)
                {
                kalarkaharrooms();
                kalakaharroomsafter();
                   int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else
                {
                    cout<<"\t You choose an INVALID NUMBER !!!";
                    goto menu;
                }
            }
            else if(user==14)
            {
                int rooms;
                cout<<"\t\t\t\t\t  ======================================================="<<endl;
                cout<<"\t\t\t\t\t       WELCOME TO TAHA OASIS HOTEL ISLAMABAD MONAL"<<endl;
                cout<<"\t\t\t\t\t  ======================================================="<<endl<<endl;
                cout<<"\t\t\t\t\t         Great decision ! ISLAMABAD MONAL !"<<endl;
                cout<<"\t 0 >> Margala Hills"<<endl;
                cout<<"\t 1 >> Damn-e-koh"<<endl;
                cout<<"\t 2 >> Rawal Lake"<<endl;
                cout<<"\t 3 >> Shakar pariyan Hills"<<endl<<endl;
                cout<<"\t Select where you want to book room in ISLAMABAD MONAL: ";
                cin>>rooms;
                if(rooms==0)
                {
                margalahills();
                margalaroomsafter();
                   int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==1)
                {
                    damnekohrooms();
                    damnekohroomsafter();
                       int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==2)
                {
                    rawallakerooms();
                    rawallakeroomsafter();
                       int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else if(rooms==3)
                {
                    shakarpariyanrooms();
                    shakarpariyanroomsafter();
                       int opt;
                cout<<"\t\t Want to EXIT? (Yes=1 , No=0) ";
                cin>>opt;
                         if(opt==1)
                         {
                             goto exit2;
                         }
                         else if(opt==0)
                         {
                             system("cls");
                             goto menu;
                         }
                }
                else
                {
                    cout<<"\t You choose an INVALID NUMBER !!!"<<endl<<endl;
                    cout<<"\t Want to contiue? (Yes=1 , No=0)";
                    cin>>rooms;
                    cout<<endl;
                            if(rooms==1)
                            {
                                system("cls");
                                goto menu2;
                            }
                            else if(rooms==0)
                            {
                                system("cls");
                                goto exit2;
                            }
                }
            }
            else if(user==15)
            {
                goto exit2;
            }
            else if(user!=10 && user!=11 && user!=12 && user!=13 && user!=13 && user!=14 && user!=15)
            {
                cout<<endl<<endl;
                cout<<"\t\t\t\t\t\t    !!! INVALID NUMBER ENTERED !!!"<<endl<<endl<<endl;
                goto menu2;
            }
            break;
        }

        //CASE TO BOOK ROOMS & TO ENTER TOTAL PERSONS
    case 3:
        {
            int persons=5;
            int prsn;
            cout<<"\t\t\t\t\t  | TOTAL POERSONS & TOTAL ROOMS YOU NEED |"<<endl<<endl;
            cout<<"\t\t NOTE*-- Person can book only '1' ROOM"<<endl;
            cout<<"\t\t NOTE*-- Persons Max Limit is '5'"<<endl<<endl;
            cout<<"\t\t Total persons: ";
            cin>>prsn;
            cout<<endl<<endl;
            if(prsn<persons)
            {
                system("cls");
                goto menu2;
            }
            else if(prsn>persons)
            {
                cout<<"\t\t\t\t\t Max Limit is | 5 | -- Limit exceeded --"<<endl<<endl;
                goto exit2;
            }
            else
            {
                goto menu2;
            }
        }
        //CASE TO EXIT FROM THE PROGRAM
        //TAHA PUT ANIMATION IN PROGRAM TERMINATED AND PROGRAM CONTINUTION
    case 4:
        {
            int exit;
            cout<<"\t\t\t\t\t\t      | EXITING |"<<endl<<endl;
            exit2:
            cout<<"\t Are you sure you want to exit? (Yes=1 / No=0)=  ";
            cin>>exit;
            cout<<endl<<endl;
            if(exit==1)
            {
                exit:
                cout<<"\t\t\t\t\t\t  | PROGRAM TERMINATED |"<<endl;
            }
            else if(exit==0)
            {
                cout<<"\t\t\t\t\t\t  | PROGRAM CONTINUING |"<<endl<<endl;
                system("cls");
                goto menu;
            }
            break;
        }
    default:
        {
            cout<<"\t\t\t\t =============================================="<<endl;
            cout<<"\t\t\t\t\t   !!! INVALID NUMBER ENTERED !!!"<<endl;
            cout<<"\t\t\t\t =============================================="<<endl<<endl;
            goto menu;
        }
    }
    cout<<endl<<endl;
}
