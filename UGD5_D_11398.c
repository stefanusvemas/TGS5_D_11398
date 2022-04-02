#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Stefanus Vemas Aditya Mahardika, 210711398, D

typedef char string[30];

int main(int argc, char *argv[]) {
	string username, password, namaBarang1, namaBarang2, namaBarang3;
	int pil, stokBarang1, stokBarang2, stokBarang3, i, hargaBarang1, hargaBarang2, hargaBarang3, pilihBid, uang, l;
	bool menu, loginStatus, inputStatus;
	srand(time(NULL));
	
	menu=true;
	loginStatus=false;
	inputStatus=false;
	
	hargaBarang1=0;
	hargaBarang2=0;
	hargaBarang3=0;
	
	strcpy(namaBarang1, "Barang1");
	strcpy(namaBarang2, "Barang2");
	strcpy(namaBarang3, "Barang3");
	
	while(menu==true){
		system("cls");
		printf("====Toko Kesenian====");
		printf("\n1. Login");	
		printf("\n2. Input Stok");
		printf("\n3. Tampil Barang");
		printf("\n4. Pelelangan");
		printf("\n0. Exit");
		printf("\nPilih menu : "); scanf("%d", &pil);
		
		switch(pil){
			case 1:
				if(loginStatus==false){
					printf("\n====LOGIN====");
					while(!strcmp(username, "tebri")==0){
						printf("\nUsername	:");fflush(stdin); gets(username);
						if(strcmp(username, "tebri")==0){
							break;
						}else{
							printf("Username Salah");
						}
					}
					while(!strcmp(password, "1398")==0){
						printf("\nPassword	:");fflush(stdin); gets(password);
						if(strcmp(password, "1398")==0){
							printf("\tLOGIN BERHASIL");
							loginStatus=true;
							break;
						}else{
							printf("\tPASSWORD SALAH\n");
						}
			 	}				
				}else{
					printf("\nSUDAH LOGIN");
				}
			break;
			case 2:
				if(loginStatus==true){
					//Stok Barang 1
					printf("\tMasukkan jumlah stok yang ingin Anda masukkan untuk barang Barang1"); 
					printf("\n\tJumlah Stok :");scanf("%d",&stokBarang1);
					
					//Stok Barang 2
					printf("\n\tMasukkan jumlah stok yang ingin Anda masukkan untuk barang Barang2"); 
					printf("\n\tJumlah Stok :");scanf("%d",&stokBarang2);
					
					//Stok Barang 3
					printf("\n\tMasukkan jumlah stok yang ingin Anda masukkan untuk barang Barang3");
					printf("\n\tJumlah Stok :");scanf("%d",&stokBarang3);
					
					inputStatus=true;
				}else{
					printf("\tHARAP LOGIN TERLEBIH DAHULU");
				}
			break;
			case 3:
				if(loginStatus==false){
					printf("\tHARAP LOGIN TERLEBIH DAHULU");
				}else if(inputStatus==false){
					printf("\tHARAP INPUT STOK TERLEBIH DAHULU");
				}else{
					printf("=====TAMPIL BARANG=====");
					printf("\nNama barang	: %s",namaBarang1);
					printf("\nStok barang	: %d\n",stokBarang1);
					
					printf("\nNama barang	: %s",namaBarang2);
					printf("\nStok barang	: %d\n",stokBarang2);
					
					printf("\nNama barang	: %s",namaBarang3);
					printf("\nStok barang	: %d",stokBarang3);
				}
			break;
			case 4:
				if(loginStatus==false){
					printf("\tHARAP LOGIN TERLEBIH DAHULU");
				}else if(inputStatus==false){
					printf("\tHARAP INPUT STOK TERLEBIH DAHULU");
				}else{
					for(i=0; i<5; i++){
						system("cls");
						uang=0;
						printf("=====TAMPIL BARANG=====");
						printf("\nNama barang	: %s",namaBarang1);
						printf("\nHarga barang	: %d\n",hargaBarang1);
						
						printf("\nNama barang	: %s",namaBarang2);
						printf("\nHarga barang	: %d\n",hargaBarang2);
						
						printf("\nNama barang	: %s",namaBarang3);
						printf("\nHarga barang	: %d\n",hargaBarang3);
										
						printf("\nPilih barang yang ingin anda bid (1-3) : ");scanf("%d",&pilihBid);
						
						
						switch(pilihBid){
							case 1:
								printf("\nJumlah uang yang dipasang :");scanf("%d",&uang);
								hargaBarang1 += uang;
								l++;
							break;
							case 2:
								printf("\nJumlah uang yang dipasang :");scanf("%d",&uang);
								hargaBarang2 += uang;
								l++;
							break;
							case 3:
								printf("\nJumlah uang yang dipasang :");scanf("%d",&uang);
								hargaBarang3 += uang;
								l++;
							break;
							default: 
								printf("\nIINPUTKAN SESUAI FORMAT");
								i--;
						}
						if (l == 5) {
								if (hargaBarang1 > hargaBarang2 && hargaBarang1 > hargaBarang3) {
									printf("\nBARANG 1 MEMENANGKAN LELANG SEHARGA %d\n", hargaBarang1);
								} else if (hargaBarang2 > hargaBarang1 && hargaBarang2 > hargaBarang3) {
									printf("\nBARANG 2 MEMENANGKAN LELANG SEHARGA %d\n", hargaBarang2);
								} else {
									printf("\nBARANG 3 MEMENANGKAN LELANG SEHARGA %d\n", hargaBarang3);
	                        }
    					}
					}
				}
			break;
			case 5:
				if(loginStatus==false){
					printf("\tHARAP LOGIN TERLEBIH DAHULU");
				}else if(inputStatus==false){
					printf("\tHARAP INPUT STOK TERLEBIH DAHULU");
				}else{
					for(i=0; i<5; i++){
						system("cls");
						uang=0;
						printf("=====TAMPIL BARANG=====");
						printf("\nNama barang	: %s",namaBarang1);
						printf("\nHarga barang	: %d\n",hargaBarang1);
						
						printf("\nNama barang	: %s",namaBarang2);
						printf("\nHarga barang	: %d\n",hargaBarang2);
						
						printf("\nNama barang	: %s",namaBarang3);
						printf("\nHarga barang	: %d\n",hargaBarang3);
										
						printf("\nPilih barang yang ingin anda bid (1-3) : ");scanf("%d",&pilihBid);
						
						switch(pilihBid){
							case 1:
								printf("\nJumlah uang yang dipasang :");scanf("%d",&uang);
								hargaBarang1 += uang;
								hargaBarang2 += (rand() % (100 - 0 + 1)) + 0;
								hargaBarang3 += (rand() % (100 - 0 + 1)) + 0;
								l++;
							break;
							case 2:
								printf("\nJumlah uang yang dipasang :");scanf("%d",&uang);
								hargaBarang2 = hargaBarang2 + uang;
								hargaBarang1 += (rand() % (100 - 0 + 1)) + 0;
								hargaBarang3 += (rand() % (100 - 0 + 1)) + 0;
								l++;
							break;
							case 3:
								printf("\nJumlah uang yang dipasang :");scanf("%d",&uang);
								hargaBarang3 = hargaBarang3 + uang;
								hargaBarang1 += (rand() % (100 - 0 + 1)) + 0;
								hargaBarang2 += (rand() % (100 - 0 + 1)) + 0;
								l++;
							break;
							default: 
								printf("\nIINPUTKAN SESUAI FORMAT");
								i--;
						}
						if (l == 5) {
								if (hargaBarang1 > hargaBarang2 && hargaBarang1 > hargaBarang3) {
									printf("\nBARANG 1 MEMENANGKAN LELANG SEHARGA %d\n", hargaBarang1);
								} else if (hargaBarang2 > hargaBarang1 && hargaBarang2 > hargaBarang3) {
									printf("\nBARANG 2 MEMENANGKAN LELANG SEHARGA %d\n", hargaBarang2);
								} else {
									printf("\nBARANG 3 MEMENANGKAN LELANG SEHARGA %d\n", hargaBarang3);
	                        }
    					}
					}
				}
			break;
			case 0:
				printf("\n\tStefanus Vemas Aditya Mahardika | 210711398 | D");
				menu=false;
			break;
				
				
		}getch();
		
	}
	
	return 0;
}
