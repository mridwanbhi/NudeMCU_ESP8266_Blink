/*
  Blink

  Sebagian besar Arduino memiliki LED bawaan yang dapat Anda kontrol. Pada model UNO, MEGA, dan ZERO, LED ini terhubung ke pin digital 13, 
  sedangkan pada MKR1000 terhubung ke pin 6. LED_BUILTIN diatur ke pin LED yang benar terlepas dari jenis papan yang digunakan.
Jika Anda ingin mengetahui ke pin mana LED bawaan terhubung pada model Arduino Anda, periksa Spesifikasi Teknis papan Anda di:
https://www.arduino.cc/en/Main/Products

  modified 20/11/2023
  by Mochamad Ridwan

  contoh code ini ada di domain publik :
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// fungsi setup dijalankan satu kali ketika tombol reset ditekan atau power dinyalakan
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// fungsi loop berjalan terus menerus tampa henti setiap 1 ms (mili second) atau 1/1000 detik.
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // menyalakan LED (HIGH adalah level voltase)
  delay(1000);                      // menunggu selama satu detik (1000/1000)
  digitalWrite(LED_BUILTIN, LOW);   // mematikan LED dengan merubah voltase LOW
  delay(1000);                      // menunggu selama satu detik (1000/1000)
}
