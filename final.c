// İsim Soyisim: Ferhat Karakartal
// Öğrenci Numarası: 2420161134
// BTK Akademi Sertifika Linki:
// https://raw.githubusercontent.com/star764/Veri-yapilari-final/main/BTK_Git_GitHub_Sertifika.pdf

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr
                 [j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {45, 12, 78, 34, 23, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    bubbleSort(arr, n);

    printf("Siralanmis dizi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nAranacak sayiyi girin: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Sayi bulundu. Indeks: %d\n", result);
    else
        printf("Sayi bulunamadi.\n");

    return 0;
}
