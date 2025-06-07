#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung turunan numerik
void calculate_derivatives(double time[], double capacity[], int n, double delta_t) {
    printf("Time (min)\tCapacity (mAh)\tForward dQ/dt\tCentral dQ/dt\tBackward dQ/dt\n");
    printf("----------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        double forward_derivative = 0.0;
        double central_derivative = 0.0;
        double backward_derivative = 0.0;

        // Forward Difference (hanya berlaku jika bukan titik terakhir)
        if (i < n - 1) {
            forward_derivative = (capacity[i + 1] - capacity[i]) / delta_t;
        }

        // Central Difference (hanya berlaku jika bukan titik pertama atau terakhir)
        if (i > 0 && i < n - 1) {
            central_derivative = (capacity[i + 1] - capacity[i - 1]) / (2 * delta_t);
        }

        // Backward Difference (hanya berlaku jika bukan titik pertama)
        if (i > 0) {
            backward_derivative = (capacity[i] - capacity[i - 1]) / delta_t;
        }

        // Output hasil
        printf("%.1f\t\t%.1f", time[i], capacity[i]);

        if (i < n - 1) {
            printf("\t\t%.2f", forward_derivative);
        } else {
            printf("\t\tN/A");  // Tidak ada data forward untuk titik terakhir
        }

        if (i > 0 && i < n - 1) {
            printf("\t\t%.2f", central_derivative);
        } else {
            printf("\t\tN/A");  // Tidak ada data central untuk titik pertama/terakhir
        }

        if (i > 0) {
            printf("\t\t%.2f\n", backward_derivative);
        } else {
            printf("\t\tN/A\n");  // Tidak ada data backward untuk titik pertama
        }
    }
}

int main() {
    // Data pengisian baterai (contoh: waktu dalam menit, kapasitas dalam mAh)
    double time[] = {0, 5, 10, 15, 20, 25};
    double capacity[] = {0, 500, 900, 1200, 1400, 1500};
    int n = sizeof(time) / sizeof(time[0]);
    double delta_t = 5.0;  // Interval waktu (5 menit)

    // Hitung dan tampilkan turunan numerik
    calculate_derivatives(time, capacity, n, delta_t);

    return 0;
}