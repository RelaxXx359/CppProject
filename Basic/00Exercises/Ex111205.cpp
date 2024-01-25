#include <iostream>

using namespace std;

int main() {

    int arr[4][4] = {1, 3, 55, 44,
                     2, 45, 67, 89,
                     23, 87, 2233, 6,
                     1000, 23456, 67, 8};

    int res[6];                             // масива е 4x4 = 16 числа, като извадим 4 числа от главния диагонал
                                            // остават 12 числа, разделяме ги на 2 за числата над и под главния
                                            // диагонала , 12/2 = 6 затова дефинираме новия масив "6".

                                            int k = 0;
    for (int i = 1; i < 4; ++i) {           // за да намалим итерацийте към int i = 0 добавяме 1 i=1, защото в нулевата итераций е главния диагонал
        for (int j = 0; j < 4-1; ++j) {     // за да намалим итерацийте j < 4 добавяме -1, j < 4-1, зщото последната итерация е главния диагонал
            if (i> j){
                res[k] = arr[i][j];
                k++;                        // Не забравяме да дефинираме int k = 0; и k++;
            }
        }
    }
    for (int i = 0; i < 6; ++i) {
        cout << res[i] << " ";
    }


    return 0;
}