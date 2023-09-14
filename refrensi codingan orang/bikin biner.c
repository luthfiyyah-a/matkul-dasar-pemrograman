#include <stdio.h>
#define STR_SIZ 80 
#define SIZ 100

//typedef struct{             
//    int stock_num[SIZ];         
//    char category[STR_SIZ][SIZ];
//    char tech_descript[STR_SIZ][SIZ];
//    double price[SIZ];
//}product_t;

typedef struct{             
    int stock_num;          
    char category[STR_SIZ];
    char tech_descript[STR_SIZ];
    double price;
}product_t;

int main (){
	char nama[SIZ];
	printf("jangan lupa ketik nama file ya menggunakan .bin contoh (contoh.bin)\n= ");
	scanf("%s", nama);
	FILE* out = fopen(nama, "wb");
	product_t params;
	
	
	
	
	int i=0;
//	char ch='a';
//	while (ch != 'q'){

		scanf("%d", &params.stock_num);
		scanf("%s", params.category);
		scanf("%s", params.tech_descript);
		scanf("%lf", &params.price);
		
//		printf("Kalo mau nambah inventory lagi tekan huruf selain q kalau mau berhenti pencet q\n");
//		scanf(" %c", &ch);
//		i++;
//	}
	
	fwrite(&params, sizeof(product_t), 1, out);
	
	fclose(out);
	
	out = fopen(nama, "rb");
	
	fread(&params, sizeof(product_t), 1, out);
	
//	int i_temp = i;
//for (i=0; i<i_temp; i++){
	printf("stock_num = %d\n", params.stock_num);
	printf("catagory = %s\n", params.category);
	printf("tech_descript = %s\n", params.tech_descript);
	printf("price = %lf\n", params.price);
//}
	fclose(out);
		
	return 0;
}
