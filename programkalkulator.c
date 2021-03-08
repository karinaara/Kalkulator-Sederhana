// Nama : Karina Widya Ramadhani
// NIM : 16020053

#include <stdio.h> //Mengimpor file stdio.h

//Membuat fungsi "fungsi" untuk menghitung f(x) dalam penghitungan integral
float fungsi(float a, float b, float c, float x)
{
    return ((a*x*x) + (b*x) + c);
}

//Menjalankan program utama
int main()
{
    int menu,i;
    float atas,bawah,a,b,c,total=1,n,h,sum1=0,sum,y0,yn;

    printf(" \n");
    printf("================================== \n");
    printf("===  * KALKULATOR SEDERHANA *  === \n");
    printf("================================== \n");
    printf("== Pilih Angka Untuk Memilih    == \n");
    printf("== 1. Penjumlahan               == \n");
    printf("== 2. Pengurangan               == \n");
    printf("== 3. Perkalian                 == \n");
    printf("== 4. Pembagian                 == \n");
    printf("== 5. Perpangkatan              == \n");
    printf("== 6. Integral Tentu            == \n");
    printf("================================== \n");
    printf("================================== \n");

    //Memilih menu kalkulator
    printf("Pilih menu: ");
    scanf("%d", &menu);

    switch (menu)
    {
        case 1: //Menu penjumlahan, nomor 1
            printf("1. Penjumlahan \n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &a);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &b);
            printf("%f", a);
            printf(" + ");
            printf("%f", b);
            printf("\nHasilnya adalah %f", a + b);
            break;
        case 2: //Menu pengurangan, nomor 2
            printf("2. Pengurangan \n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &a);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &b);
            printf("%f", a);
            printf(" - ");
            printf("%f", b);
            printf("\nHasilnya adalah %f", a - b);
            break;
        case 3: //Menu perkalian, nomor 3
            printf("3. Perkalian \n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &a);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &b);
            printf("%f", a);
            printf(" x ");
            printf("%f", b);
            printf("\nHasilnya adalah %f", a * b);
            break;
        case 4: //Menu pembagian, nomor 4
            printf("4. Pembagian \n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &a);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &b);
            printf("%f", a);
            printf(" / ");
            printf("%f", b);
            printf("\nHasilnya adalah %f", a / b);
            break;
        case 5: //Menu perpangkatan, nomor 5
            printf("5. Perpangkatan\n");
            printf("Masukkan bilangan yang ingin dipangkatkan: ");
            scanf("%f", &a);
            printf("Masukkan pangkat (>1): ");
            scanf("%f", &b);
            printf("%f", a);
            printf(" ^ ");
            printf("%f", b);
            for (c=1;c<=b;c++)
            {
                total = total*a;
            }
            printf("\nHasilnya adalah %f", total);
            break;
        case 6: //Menu integral tentu, nomor 6
            printf("6. Integral Tentu\n");
            printf("Bentuk umum (ax^2) + (bx) + (c) \n");
            printf("Masukkan nilai a : ");
            scanf("%f", &a);
            printf("Masukkan nilai b : ");
            scanf("%f", &b);
            printf("Masukkan nilai c : ");
            scanf("%f", &c);
            printf("Fungsinya adalah :"); printf("%f", a); printf("x^2 + "); printf("%f", b); printf("x + "); printf("%f \n", c);
            printf("Masukkan batas bawah: ");
            scanf("%f", &bawah);
            printf("Masukkan batas atas: ");
            scanf("%f", &atas);
            printf("Masukkan jumlah suku: ");
            scanf("%f", &n);
            h = (atas-bawah)/n;
            y0 = fungsi(a,b,c,bawah+0*h);
            yn = fungsi(a,b,c,bawah+n*h);
            for (i=1; i<n; i++) sum1=sum1 + fungsi(a,b,c,bawah+i*h);
            sum = (h/2)*(y0 + yn + 2*sum1);
            printf("Hasilnya adalah : %f", sum);
            break;
    }
    return 0;
}