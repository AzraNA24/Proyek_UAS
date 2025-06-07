# Optimasi Waktu Pengisian Baterai Ponsel Menggunakan Turunan Numerik
### Azra Nabila Azzahra - 2306161782

## Deskripsi Program
Program ini menggunakan metode numerik turunan numerik (Forward Difference, Central Difference, dan Backward Difference) untuk menganalisis laju pengisian baterai ponsel berdasarkan data kapasitas (Q) terhadap waktu (t). Model pengisian baterai dianggap sebagai fungsi diskrit yang merepresentasikan pertumbuhan kapasitas baterai terhadap waktu, dengan mempertimbangkan faktor-faktor seperti arus pengisian, resistansi internal, dan efisiensi sistem.

Jenis baterai yang dimodelkan dalam program ini adalah baterai lithium-ion (Li-ion), yaitu jenis baterai yang paling umum digunakan pada perangkat ponsel modern. Tujuan utama program ini adalah untuk memantau kecepatan pengisian (dQ/dt) dan mendeteksi kondisi abnormal, seperti overheating atau pengisian penuh, berdasarkan perubahan laju pengisian. Sebagai contoh, data pengisian diberikan dalam bentuk kapasitas (mAh) setiap 5 menit, mulai dari 0 mAh (kosong) hingga 1500 mAh (penuh).

Metode Forward Difference, Central Difference, dan Backward Difference dipilih karena kemampuannya dalam memperkirakan turunan dari data diskrit tanpa memerlukan fungsi matematis eksplisit. Program ini ditulis dalam bahasa C dan dijalankan melalui terminal. Data waktu dan kapasitas dimasukkan secara langsung ke dalam program, kemudian hasil perhitungan turunan numerik ditampilkan dalam bentuk tabel untuk analisis lebih lanjut.

Program akan menghitung dan menampilkan:
1. *Laju pengisian baterai* (dQ/dt) menggunakan tiga metode turunan numerik.
2. *Deteksi pengisian penuh* (saat dQ/dt ≈ 0).
3. *Identifikasi masalah* seperti penurunan laju pengisian yang tidak normal, yang dapat mengindikasikan overheating atau kerusakan baterai.

Dengan menggunakan program ini, pengguna dapat mengoptimasi waktu pengisian baterai dan meningkatkan keawetan baterai dengan memastikan pengisian berlangsung secara efisien dan aman.


