#include<bits/stdc++.h>
using namespace std;
int main(){

double Imtiaz_entry,Zadid_entry, Mahi_entry, Mehraj_entry, Hasan_entry,  Total_Entry,  Imtiaz_Meal_Rate,Zadid_Meal_Rate,Mahi_Meal_Rate,Mehraj_Meal_Rate,Hasan_Meal_Rate,    Imtiaz_Meal, Zadid_Meal, Mahi_Meal, Mehraj_Meal, Hasan_Meal,      Total_Meal,   Average_Meal_Rate,   Cost,    Monthly_Remaining,    Monthly_Days;
    
    
    cout<<"Enter Imtiaz's Entry: "<<endl;
    cin>> Imtiaz_entry;
    cout<<"Enter Imtiaz's meal amount: "<<endl;
    cin>>Imtiaz_Meal;

    cout<<"Enter Zadid's Entry: "<<endl;
    cin>> Zadid_entry;
    cout<<"Enter Zadid's meal amount: "<<endl;
    cin>>Zadid_Meal;

    cout<<"Enter Mahi's Entry: "<<endl;
    cin>> Mahi_entry;
    cout<<"Enter Mahi's meal amount: "<<endl;
    cin>>Mahi_Meal;

    cout<<"Enter Mehraj's Entry: "<<endl;
    cin>> Mehraj_entry;
    cout<<"Enter Mehraj's meal amount: "<<endl;
    cin>>Mehraj_Meal;

    cout<<"Enter Hasan's Entry: "<<endl;
    cin>> Hasan_entry;
    cout<<"Enter Hasan's meal amount: "<<endl;
    cin>>Hasan_Meal;

    cout<<"Enter Meal Days: "<<endl;
    cin>>Monthly_Days;

    cout<<"Enter Monthly Cost: "<<endl;
    cin>>Cost;


Total_Entry=(Imtiaz_entry+Zadid_entry+Mahi_entry+Mehraj_entry+Hasan_entry);
Total_Meal=(Imtiaz_Meal+Zadid_Meal+Mahi_Meal+Mehraj_Meal+Hasan_Meal);
Average_Meal_Rate = (Cost/Total_Meal);
Monthly_Remaining = (Total_Entry-Cost); 
    
    

Imtiaz_Meal_Rate=(Average_Meal_Rate*Imtiaz_Meal);
Zadid_Meal_Rate=(Average_Meal_Rate*Zadid_Meal);
Mahi_Meal_Rate=(Average_Meal_Rate*Mahi_Meal);
Mehraj_Meal_Rate=(Average_Meal_Rate*Mehraj_Meal);
Hasan_Meal_Rate=(Average_Meal_Rate*Hasan_Meal);
    
    

cout<<"Total Entry: "<<Total_Entry<<endl;
cout<<"Total Meal: "<<Total_Meal<<endl;
cout<<"Average Meal Rate: "<<Average_Meal_Rate<<endl;
cout<<"Monthly Remaining Investment: "<<Monthly_Remaining<<endl;    
cout<<endl;
cout<<endl;
    
    
cout<<"Imtiaz's Meal Rate: "<<Imtiaz_Meal_Rate<<endl;
if(Imtiaz_Meal_Rate>Imtiaz_entry){
    cout<<"Imtiaz will invest: "<<(Imtiaz_Meal_Rate-Imtiaz_entry)<<"TK more"<<endl;
}
else if(Imtiaz_Meal_Rate<Imtiaz_entry){
    cout<<"Imtiaz will get "<<(Imtiaz_entry-Imtiaz_Meal_Rate)<<"TK" <<endl;
}

cout<<"Zadid's Meal Rate: "<<Zadid_Meal_Rate<<endl;
if(Zadid_Meal_Rate>Zadid_entry){
    cout<<"Zadid will invest: "<<(Zadid_Meal_Rate-Zadid_entry)<<"TK more"<<endl;
}
else if(Zadid_Meal_Rate<Zadid_entry){
    cout<<"Zadid will get "<<(Zadid_entry-Zadid_Meal_Rate)<<"TK" <<endl;
}

cout<<"Mahi's Meal Rate: "<<Mahi_Meal_Rate<<endl;
if(Mahi_Meal_Rate>Mahi_entry){
    cout<<"Mahi will invest: "<<(Mahi_Meal_Rate-Mahi_entry)<<"TK more"<<endl;
}
else if(Mahi_Meal_Rate<Mahi_entry){
    cout<<"Mahi will get "<<(Mahi_entry-Mahi_Meal_Rate)<<"TK" <<endl;
}
cout<<"Mehraj's Meal Rate: "<<Mehraj_Meal_Rate<<endl;
if(Mehraj_Meal_Rate>Mehraj_entry){
    cout<<"Mehraj will invest: "<<(Mehraj_Meal_Rate-Mehraj_entry)<<"TK more"<<endl;
}
else if(Mehraj_Meal_Rate<Mehraj_entry){
    cout<<"Mehraj will get "<<(Mehraj_entry-Mehraj_Meal_Rate)<<"TK" <<endl;
}
cout<<"Hasan's Meal Rate: "<<Hasan_Meal_Rate<<endl;
if(Hasan_Meal_Rate>Hasan_entry){
    cout<<"Hasan will invest: "<<(Hasan_Meal_Rate-Hasan_entry)<<"TK more"<<endl;
}
else if(Hasan_Meal_Rate<Hasan_entry){
    cout<<"Hasan will get "<<(Hasan_entry-Hasan_Meal_Rate)<<"TK" <<endl;

}

return 0;
}
