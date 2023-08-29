Arduino'nun Digispark modülü ile hacking yapabilmek için bazı işlemleri yapmamız lazım:

- Arduino'yu indirip kurmalıyız (https://www.arduino.cc).
- Arduino IDE'yi açıyoruz, ardından "File" > "Preferences" > "Additional boards manager URLs" bölümüne şu URL'yi ekliyoruz: http://digistump.com/package_digistump_index.json
- "Tools" > "Board" > "Boards Manager" sekmesine gidip "Digistump AVR Boards" seçeneğini indiriyoruz.
- "Tools" > "Board" > "Digistump AVR Boards" altında "Digispark Default" seçeneğini seçiyoruz.
- Sürücü kurulumu için şu adresten "https://github.com/digistump/DigistumpArduino/releases" "Digistump.Drivers.zip" dosyasını indirip içerisindeki "DPinst64.exe" dosyasını çalıştırıyoruz. Eğer sisteminiz 32 bit ise "DPinst.exe" dosyasını kullanmalısınız.
- Türkçe klavye kütüphanesini eklemek için bu adresten "https://github.com/ernesto-xload/DigisparkKeyboard" dosyasını indiriyoruz ve daha sonra bu dosyayı "C:\Users\Aykut\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries" klasörüne kopyalıyoruz.

Not: Videolu anlatım yakında gelecektir.