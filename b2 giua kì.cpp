#include <stdio.h>

int main(){
    int giolamviec;
    float luongtheogio, tongluong,phucap;
    printf ("nhap so gio lam viec trong thang:");
    scanf ("%d", &giolamviec);
    printf ("nhap muc luong theo gio:");
    scanf ("%f", &luongtheogio);
    if (giolamviec > 160)
    {
        luongtheogio = giolamviec * luongtheogio;
        phucap = luongtheogio * 0.1;
        tongluong = luongtheogio + phucap;
        printf (" tien luong theo gio la: %.0f\n",luongtheogio);
        printf ("Tien luong phu cap la: %.0f\n", phucap);
        printf ("tong tien luong la: %.0f\n", tongluong);
    }
    else {
        tongluong = giolamviec *luongtheogio;
         printf (" Tong tien luong la: %.0f\n", tongluong);
    }
return 0;
}
