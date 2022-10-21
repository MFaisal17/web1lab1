#include<iostream>
using namespace std;

int main(){
	int energi, kecepatan;
	string arah,keterangan,keterangan2,warna;
	
	cout<<"Warna = "; cin>>warna;
	cout<<"energi = "; cin>>energi;
	cout<<endl;
	cout<<"Nyalakan mesin A/B=";cin>>keterangan;
	if(keterangan =="A"||keterangan =="A"){
		cout<<endl<<"Terbang/Turun = ";
		cin>>keterangan2;
		if(keterangan2=="Terbang"){
			cout<<"Tambah kecepatan = ";cin>>kecepatan;
			cout<<"Arah = ";cin>>arah;
			cout<<endl;
		}
		else{
			cout<<"Kurangi kecepatan = ";cin>>kecepatan;
			cout<<"Arah = ";cin>>arah;
			cout<<endl;
		}
		cout<<"warna pesawat = "<<warna<<endl;
		cout<<"ketinggian = "<<kecepatan+2000<<"Kaki"<<endl;
		cout<<"Energi = "<<energi-kecepatan/200<<endl;
		cout<<"Arah = "<<arah<<endl;
	}else{
		cout<<endl<<"off"<<endl;
		cout<<"Warna Pesawat = "<<warna<<endl;
		cout<<"Ketinggian = - kaki"<<endl;
		cout<<"Energi = -"<<endl;
		cout<<"arah = -"<<arah<<endl;
	}
		cout<<"Nama\t: M Faisal Tanjung"<<endl;
		cout<<"NIM\t: 312110210"<<endl; 
		cout<<"======= Rancangan Program Sederhana Pesawat =======\n"<<endl;
	}

