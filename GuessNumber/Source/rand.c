#include <stdio.h>
#include <stdlib.h>
#include<math.h>

const int MAX1 =1000, MIN=1, MAX2=100, MAX3=10000;
int choitiep = 1; // Dieu kien de thoat cac Mode choi
int solandoan =1;

void Instruction1()
{
	printf("=================== HUONG DAN ===================\n\n");
	printf(" Day la phan choi khong gioi han. Ban se duoc yeu cau chon mot so bat ky trong\n ");
	printf("pham vi tu 1 den 1000. So lan doan cua ban se khong bi gioi han. Tuy nhien, neu\n");
	printf(" so lan doan cua ban qua lon thi cung khong vui dau :))\n\n");
	printf(" Nhan phim bat ky de bat dau !");
	getch();
	system("cls");
}

void Instruction2()
{
	printf("=================== HUONG DAN ===================\n\n");
	printf(" Day la phan choi thu thach hon, nguoi choi se duoc chon do kho cua man choi\n");
	printf(" kem theo so mang tuong ung nhu sau:\n");
	printf("  1.So random tu 1-100, 10 mang\n");
	printf("  2.So random tu 1-1000, 20 mang\n");
	printf("  3.So random tu 1-10000, 30 mang\n");
	printf(" Va di nhien, khi den cac moc quan trong, nguoi choi se duoc thong bao ve so\n");
	printf(" mang con lai cua minh.\n");
	printf(" Man choi se ket thuc se nguoi choi da dung het so mang duoc cho.\n\n");
	
}

void Instruction3()
{
	printf("=================== HUONG DAN ===================\n\n");
	printf(" Day la phan choi 2 nguoi, moi nguoi se thay phien nhau lam 2 nhiem vu:\n");
	printf("	- A: Day la nguoi se nhap vao mot so bat ky trong pham vi 1-100.\n");
	printf("	- B: Day la nguoi se phai tim ra duoc so do.\n");
	printf(" Sau khi man choi cua nguoi 2 ket thuc, 2 nguoi se thay doi nhiem vu cho nhau.\n");
	printf(" Nguoi nao co so lan doan it hon la chien thang.\n\n");
	printf(" Nhan phim bat ky de bat dau !");
	getch();
	system("cls");
}
void Menu()
{
		printf("=================== MENU ===================\n\n");
		printf("1. Adventure \n");
		printf("2. Survival \n");
		printf("3. Multiplayer\n\n");
		printf("CHU Y: AN F11 TRUOC KHI CHOI !\n\n");
		printf("Nhap vao lua chon cua ban (Nhap so nhe!): ");
}
void Mode1()
{
	int sobimat1, sohientai;
	srand(time(NULL)); // Cau lenh tao random
	sobimat1 = (rand() % (MAX1-MIN -1)+MIN); // Tao ra so bi mat 1
	
	do
	{
		do
		{
			printf("Chon mot so di: ");
			scanf("%d",&sohientai);
			
			if (sobimat1>sohientai)
			{
				printf("So ban nhap vao be qua ! \n");
				solandoan++;
			}
			else if(sobimat1<sohientai)
			{
				printf("So ban nhap vao lon qua ! \n");
				solandoan++;
			}
			else
			{
				printf("\n\n");
				printf(" Congrats:))");
				printf(" So lan doan la: %d \n",solandoan);
				if(solandoan > 10) printf(" Ga vch :)) \n");
			}
		}
		while (sohientai != sobimat1);
		// Dong lenh kiem tra viec muon tiep tuc choi
			printf(" Choi tiep (Nhan 1)?\n Quay lai menu (Nhan 2)! \n");
			scanf("%d",&choitiep);
			system("cls");
	}
	while(choitiep == 1);
}

void Mode2()
{
	printf("%d, ", choitiep);
	int sohientai;
	int somang,sobimat2,luachon2;
	int b,flag;
	printf("Chon do kho cua game: ");
		scanf("%d",&luachon2);
		system("cls");
		flag = 1;
		
		switch(luachon2) // Tao ra dieu kien cac muc do choi
		{
			case 1:
				{
					somang=10;
					sobimat2 = (rand() % (MAX2-MIN -1)+MIN);
				}
				break;
			case 2:
				{
					somang=20;
					sobimat2 = (rand() % (MAX1-MIN -1)+MIN);
				}
				break;
			case 3:
				{
					somang=30;
					sobimat2 = (rand() % (MAX3-MIN -1)+MIN);
				}
				break;
		}
		b=somang;
	do
	{
		do
		{
			printf("Chon mot so di: ");
			scanf("%d",&sohientai);
			
			// Dieu kien tim ra so
				if (sobimat2>sohientai)
			{
				printf("So ban nhap vao be qua :)) \n");
				somang--;
			}
				else if(sobimat2<sohientai)
			{
				printf("So ban nhap vao lon qua :)) \n");
				somang--;
			}
			
			// Dieu kien canh bao
			if(somang< (b/3) && flag != 0)
			{
				flag--;
				//printf("%d\n", flag);
				printf("========== WARNING ==========\n\n");
				printf("Sap chet roi do ._. ");
				printf("Con lai co %d mang thoi. Can than vao !\n\n",somang);
				printf("=============================\n");
				
			}
				
			// Dieu kien thua cuoc, thang cuoc
			if(somang==0)
			{
				printf("Sorry, ban thua cmnr :(( \n");
				printf("Nhan phim bat ky de tiep tuc.");
				getch();
				system("cls");
				break;
				//goto start;
			}
			else if(somang != 0 && sobimat2 == sohientai)
			{
				printf(" Congrats :)) ");
				printf("So mang con lai la: %d\n ",somang);
				if(somang > (b/3)) printf(" Choi ghe do !");
				else printf(" Ga vch :))\n");
				
			}
		}
		while (sohientai != sobimat2);
			// Dong lenh kiem tra viec muon tiep tuc choi
			printf(" Choi tiep (Nhan 1)?\n Quay lai menu (Nhan 2)! \n");
			scanf("%d",&choitiep);
			system("cls");
	}
	while(choitiep == 1);
}

void Mode3()
{
	
	int c[2]; // Mang de luu thanh tich nguoi choi
	char name[2][50]; // Mang luu ten nguoi choi
	int sobimat3,sohientai,i,flag,b;
	
	i=0;
	c[0]=0;
	c[1]=0;
	
	do
	{
		// Tao ten 2 nguoi choi
		printf("Nhap vao ten nguoi choi 1 (Chi ten): ");
		scanf("%s",name[0]);
		printf("\n");
		printf("Nhap vao ten nguoi choi 2 (Chi ten): ");
		scanf("%s",name[1]);
		system("cls");
		do
		{
			// Phan choi cua nguoi tao ra so random
			input: printf("Hay nhap vao mot so bat ky (1-100) di, nguoi choi %d: ",i+1);
			scanf("%d",&sobimat3);
			printf("\n");
			if(sobimat3>100) 
			{
				printf("So ban nhap sai dieu kien roi, nhap lai di ._.");
				getch();
				system("cls");
				goto input;
			}
			system("cls");
		
			printf("Bay gio nguoi con lai hay tim ra so do nhe :))\n\n");
			
			chonso: printf("Chon mot so di: ");
			scanf("%d",&sohientai);
			
			if (sobimat3>sohientai)
			{
				printf("So ban nhap vao be qua ! \n");
				solandoan++;
				goto chonso;
			}
			else if(sobimat3<sohientai)
			{
				printf("So ban nhap vao lon qua ! \n");
				solandoan++;
				goto chonso;
			}
			else
			{
				printf("\n\n");
				printf(" Congrats:))");
				printf(" So lan doan la: %d \n\n",solandoan);
				c[i]=solandoan; // Luu thanh tich nguoi choi
				if(i<1) i++;
				else i=0;
				solandoan=1;
				sohientai=0;
				printf("Nhan phim bat ky de tiep tuc .... \n");
				getch();
				system("cls");
				// Nguoi choi con lai tiep tuc thuc hien cong viec
			}
		}
		while (c[0] == 0 || c[1] == 0); 
		// Tim ra nguoi chien thang
			printf("=======================================\n");
			if(c[0] < c[1]) printf(" CHUC MUNG ! Ban %s da chien thang! Ban %s ga vl ._.\n",name[0],name[1]);
			else if(c[0] > c[1]) printf(" CHUC MUNG ! Ban %s da chien thang! Ban %s ga vl ._.\n",name[1],name[0]);
			else printf(" 2 ban da hoa nhau roi, dau lai nhe !\n");
		// Dong lenh kiem tra viec muon tiep tuc choi
			printf(" Choi tiep (Nhan 1)?\n Quay lai menu (Nhan 2)! \n");
			scanf("%d",&choitiep);
			system("cls");
	}
	while(choitiep == 1);
}



 

int main (void)
{
	int luachon1;
	// Menu tro choi
	int sobimat1, sohientai;
	start:
	{
		Menu();
		scanf("%d",&luachon1);
		system("cls");
	}
	// Cac che do choi	
switch(luachon1)
{
	
	// Che do 1
{
	case 1:
	{
		Instruction1();
		Mode1();
		goto start;
	}
	break;
}

	// Che do 2
{
	int somang,sobimat2,luachon2;
	int b,flag;
	
	case 2:	
	{
		Instruction2();
		Mode2();
		
		
		goto start;
	}
	break;
}

	// Che do 3
{
	char name[2][50];
	int c[2]; // Mang de luu thanh tich nguoi choi
	int sobimat3,sohientai,i,flag;
				
	case 3:
	{
		Instruction3();
		Mode3();
		goto start;
	}
	break;
}
	
	default:
	printf("That day a :)) \n");
	getch();
	system("cls");
	goto start;
}
	return 0;
}
