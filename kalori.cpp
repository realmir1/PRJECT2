//
//  main.cpp
//  PROJECT2
//
//  Created by Ali Emir Sertbaş on 22.11.2024.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;




int main() {
    int y =0;
    float b =0;
    float k = 0;
    char c ;
    string aktivite ;
    std::cout<<"Hasta Bazlı Kalori Hesaplama Programı\n";
    std::cout<<"lütfen düşük, orta ya da yüksek aktivite seviyelerinden birini belirtiniz";
    std::cin>>aktivite;
    std::cout<<"\n";
    std::cout<<"lütfen yaş değerinizi giriniz \n";
    std::cin>>y;
    std::cout<<"\n";
    std::cout<<"lütfen boy değerinizi santimetre cinsinden giriniz \n";
    std::cin>>b;
    std::cout<<"\n";
    std::cout<<"lütfen kilo değerinizi kilogram cinsinden girininiz\n";
    std::cin>>k;
    std::cout<<"\n";
    std::cout<<"lütfen cinsiyetinizi yazınız (sadece W veya M yazınız)\n";
    std::cin>>c;
    std::cout<<"\n";
    std::cout<<"aşağıdaki değer BMR yani bazal metabolizma hızıdır\n";
    std::cout<<"\n";
    
    if(y!=0 && b!=0 && k!=0){
        if (c=='W'){
            
            std::cout<<"BMR = "<<10*k+6.25*b-5*y-161<<std::endl;
            std::cout<<"\n";
            
            if(aktivite=="düşük"){
                std::cout<< "kalori ihtiyacı ="<<k*1.2<<std::endl;}
            else if (aktivite=="orta"){
                std::cout<< "kalori ihtiyacı ="<<k*1.55<<std::endl;}
            
            
            else
                std::cout<< "kalori ihtiyacı ="<<k*1.9<<std::endl;
            
            std::cout<<"\n";
            
            int ilk = 15;
            int ikinci = 15;
            std::cout<<"-----------------------------------------------------\n ";
            cout << left<<setw(ilk) <<"kilo =" << setw(ilk) << k<< endl;
            cout <<left <<setw(ikinci) <<"boy ="<< setw(ikinci) << b << endl;
            cout <<left<<setw(ikinci)<<"yaş ="<<setw(ikinci)<<y<<endl;
            cout<<left<<setw(ilk)<<"cinsiyet =" <<setw(ikinci)<<c<<endl;
        }
    }
    
    
    
    
    
    if(y!=0 && b!=0 && k!=0){
        
        if (c=='M'){
            std::cout<<"BMR = "<<10*k+6.25*b-5*y+5;
            std::cout<<"\n";
            if(aktivite=="düşük"){
                std::cout<< "kalori ihtiyacı ="<<k*1.2<<std::endl;}
            else if (aktivite=="orta"){
                std::cout<< "kalori ihtiyacı ="<<k*1.55<<std::endl;}
            
            
            else
                std::cout<< "kalori ihtiyacı ="<<k*1.9<<std::endl;
            std::cout<<"\n";
            std::cout<<"-----------------------------------------------------\n";
            int ilk = 15;
            int ikinci = 15;
            cout << left<<setw(ilk) <<"kilo =" << setw(ilk) << k<< endl;
            cout <<left <<setw(ikinci) <<"boy ="<< setw(ikinci) << b << endl;
            cout <<left<<setw(ikinci)<<"yaş ="<<setw(ikinci)<<y<<endl;
            cout<<left<<setw(ilk)<<"cinsiyet =" <<setw(ikinci)<<c<<endl;
            
            
            
            
        }
        
        
        
        
        
        
        
        
    }
}
