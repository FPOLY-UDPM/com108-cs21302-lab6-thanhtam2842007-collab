/******************************************************************************
 * Họ và tên: [Nguyễn Thành Tâm]
 * MSSV:      [PS48578]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
int main() {
    int n;
    
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    
    int mang[n]; // Giả sử mảng có tối đa 100 phần tử

    printf("Nhập các phần tử của mảng:\n"); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }

    int max = mang[0];
    int min = mang[0];
    for (int i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }

    printf("Giá trị lớn nhất trong mảng là: %d\n", max);
    printf("Giá trị nhỏ nhất trong mảng là: %d\n", min);

    return 0;
}