// İsim Soyisim: Ferhat Karakartal
// Öğrenci Numarası: 2420161134
// BTK Akademi Sertifika Linki:
// https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=eK1h04dxgM

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int hedef) {
    int sol = 0, sag = n - 1;

    while (sol <= sag) {
        int orta = (sol + sag) / 2;

        if (arr[orta] == hedef)
            return orta;
        else if (arr[orta] < hedef)
            sol = orta + 1;
        else
            sag = orta - 1;
    }
    return -1;
}

int main() {
    int arr[] = {45, 12, 78, 34, 23, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int hedef, i;

    bubbleSort(arr, n);

    printf("Siralanmis dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nAranacak sayiyi girin: ");
    scanf("%d", &hedef);

    int sonuc = binarySearch(arr, n, hedef);

    if (sonuc != -1)
        printf("Sayi bulundu. Indeks: %d\n", sonuc);
    else
        printf("Sayi bulunamadi.\n");

    return 0;
}

