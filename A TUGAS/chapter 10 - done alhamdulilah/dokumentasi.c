
/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 27 desember 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
	membuat program untuk menambahkan, mengurangkan, mengalikan, dan membagi 2 bilangan kompleks, serta mencari nilai mutlaknya. program dikerjakan daam bentuk modular
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
	memakai 5 fungsi untuk perhitungan : 
	1. untuk menjumlahkan -> add_compleks
	2. untuk mengurangkan -> substract_complex
	3. untuk mengalikan -> multiply_complex
	4. untuk membagi -> divide_complex
	5. untuk mencari nilai mutlak -> abs_complex
	
	serta memakai fungsi scan_complex untuk menginput data dari user, dan memakai fungsi print_complex untuk menampilkan output
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

//Problem Inputs:
//	struct bil_kompleks pertama; // variabel input - bilangan kompleks pertama
//	struct bil_kompleks kedua; // variabel input - bilangan kompleks kedua

//Problem Outputs:
//	struct bil_kompleks hasil; //variabel output - hasil penjumlahan 
//	struct bil_kompleks hasil; //variabel output - hasil pengurangan
//	struct bil_kompleks hasil; //variabel output - hasil perkalian
//	struct bil_kompleks hasil; //variabel output - hasil pembagian
//	struct bil_kompleks hasil; //variabel output - nilai mutlak

//Relevant Formulas:
/*    
	bila terdapat bilangan kompleks a + bi dan c + di
	maka nilai dari
	
	-penjumalahan
	(a+bi) + (c+di) = (a+c) +(b+d)i
	 
	-pengurangan
	(a+bi) - (c+di) = (a-c) +(b-d)i
	
	-perkalian
	(a+bi) * (c+di) = (ac-bd) + (bc+ad)i
	
	-pembagian
	(a+bi) / (c+di) = ((ac+bd)/(c^2+d^2)) + ((bc-ad)/(c^2+d^2))i
	
	nilai mutlak dari suatu bilangan kompleks a+bi ialah sqrt(a^2 + b^2)
	
*/

/*DESIGN
Initial Algorithm:
1. mengiput 2 niali bilangan kompleks dari user, dengan memanggil fungsi scan_complex
2. memanggil fungsi add_complex untuk menjumlahkan 2 bilangan kompleks
3. dalam fungsi add_complex, dipanggil fungsi print_complex untuk menampilkan hasil dari penjumlahan
4. pemanggilan fungsi add_complex selesai, kembali ka main
5. memanggil fungsi substract_complex untuk mengurangkan 2 bilangan kompleks
6. dalam fungsi substract_complex, dipanggil fungsi print_complex untuk menampilkan hasil dari pengurangan
7. pemanggilan fungsi substract_complex selesai, kembali ke main
8. memanggil fungsi multiply_complex untuk mengalikan 2 bilangan kompleks
9. dalam fungsi multiply_complex, dipanggil fungsi print_complex untuk menampilkan hasil dari perkalian
10. pemanggilan fungsi multiply_complex selesai, kembali ka main
11. memanggil fungsi divide_complex untuk membagi 2 bilangan kompleks
12. dalam fungsi divide_complex, dipanggil fungsi print_complex untuk menampilkan hasil dari pembagian
13. pemanggilan fungsi divide_complex selesai, kembali ka main
14. memanggil fungsi abs_complex untuk menghitung nilai mutlak bilangan kompleks pertama
15. dalam fungsi abs_complex, dipanggil fungsi print_complex untuk menampilkan hasil dari nilai mutlak
16. pemanggilan fungsi abs_complex selesai, kembali ka main
17. memanggil fungsi abs_complex untuk menghitung nilai mutlak bilangan kompleks kedua
18. dalam fungsi abs_complex, dipanggil fungsi print_complex untuk menampilkan hasil dari nilai mutlak
19. pemanggilan fungsi abs_complex selesai, kembali ka main
20. program selesai

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
/*
	-penjumlahan
	hasil.r = a.r + b.r
    hasil.i = a.i + b.i
    
    -pengurangan
	hasil.r = a.r - b.r
    hasil.i = a.i - b.i
    
	-perkalian
    hasil.r = (a.r * b.r) - (a.i * b.i)
    hasil.i = (a.r * b.i) + (a.i + b.r)
    
	-pembagian
	hasil.r = (a.r * b.r +a.i * b.i) / (pow(b.r, 2) + pow(b.i, 2))
    hasil.i = (a.i * b.r - a.r * b.i) / (pow(b.r, 2) + pow(b.i, 2))
	
	-nilai mutlak
    hasil.r = sqrt(a.r * a.r + a.i * a.i);
    hasil.i = 0;
*/	



/*IMPLEMENTATION

// pada fungsi main
	// menginput nilai 2 bilangan kompleks dari user, dengan pernyataan sebagai berikut
    printf("masukkan bilangan komplex pertama, yang bilangan riil dan bilangan imaginernya dipisahkan oleh spasi :");
    scan_complex(&pertama);
    printf("masukkan bilangan komplex pertama, yang bilangan riil dan bilangan imaginernya dipisahkan oleh spasi :");
    scan_complex(&kedua);

    // memanggil fungsi add_complex untuk menjumlahkan 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user, dengan pernyataan sebagai berikut
    add_complex(pertama, kedua);

    // memanggil fungsi substract_complex untuk mengurangkan 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user, dengan pernyataan sebagai berikut
    substract_complex(pertama, kedua);

    // memanggil fungsi multiply_complex untuk mengalikan 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user, dengan pernyataan sebagai berikut
    multiply_complex(pertama, kedua);

    // memanggil fungsi divide_complex untuk membagi 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user, dengan pernyataan sebagai berikut
    divide_complex(pertama, kedua);

    // memanggil fungsi abs_complex untuk menghitung nilai mutlak dari bilangan kompleks sekaligus menampilkan hasilnya kepada user, dengan pernyataan sebagai berikut
    abs_complex(pertama, 1);
    abs_complex(kedua, 2);

// pada fungsi add_complex
	menjumlahkan 2 bilangan kompleks, dengan pernyataan sebagai berikut
	hasil.r = a.r + b.r;
    hasil.i = a.i + b.i;
    
// pada fungsi substract_complex
	mengurangkan 2 bilangan kompleks, dengan pernyataan sebagai berikut
	hasil.r = a.r - b.r;
    hasil.i = a.i - b.i;
    
// pada fungsi multiply_complex
	mengalikan 2 bilangan kompleks, dengan pernyataan sebagai berikut
	hasil.r = (a.r * b.r) - (a.i * b.i);
    hasil.i = (a.r * b.i) + (a.i + b.r);
    
// pada fungsi divide_complex
	//menjumlahkan 2 bilangan kompleks, dengan pernyataan sebagai berikut
	hasil.r = (a.r * b.r +a.i * b.i) / (pow(b.r, 2) + pow(b.i, 2));
    hasil.i = (a.i * b.r - a.r * b.i) / (pow(b.r, 2) + pow(b.i, 2));
    
// pada fungsi abs_complex
	//menghitung nilai mutlak bilangan kompleks, dengan pernyataan sebagai berikut
	hasil.r = sqrt(a.r * a.r + a.i * a.i);
    hasil.i = 0;
*/


/*
masukkan bilangan kompleks pertama, yang bilangan riil dan bilangan imaginernya dipisahkan oleh spasi : 1 2
masukkan bilangan kompleks kedua, yang bilangan riil dan bilangan imaginernya dipisahkan oleh spasi : 3 4

hasil penjumlahan = 4.00 + 6.00i
hasil pengurangan = -2.00 - 2.00i
hasil perkalian = -5.00 + 9.00i
hasil pembagian = 0.44 + 0.08i
nilai mutlak bilangan kompleks ke-1 = 2.24
nilai mutlak bilangan kompleks ke-2 = 5.00

TESTING
dalam kasus uji tersebut, user menginput "1 2" sebagai nilai bilangan kompleks pertama, dan user menginput "3 4" sebagai nilai bilangan kompleks kedua.
lalu, program mengeluarkan output
hasil penjumlahan = 4.00 + 6.00i
hasil pengurangan = -2.00 - 2.00i
hasil perkalian = -5.00 + 9.00i
hasil pembagian = 0.44 + 0.08i
nilai mutlak bilangan kompleks ke-1 = 2.24
nilai mutlak bilangan kompleks ke-2 = 5.00
*/

