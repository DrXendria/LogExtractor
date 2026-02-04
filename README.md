# 📄 Log Extractor (C++)

Bu proje, bir log dosyasını okuyup her satırı parçalayan ve log içeriğini **daha okunabilir ve düzenli bir formata** dönüştüren bir C++ log extractor uygulamasıdır. Ham log verisini etiketleyerek analiz edilebilir hale getirmeyi amaçlar.

---

## 🚀 Özellikler

* **Dinamik Dosya Okuma:** Kullanıcıdan dosya adı alır (aynı dizindeyse isim, değilse tam yol).
* **Satır Analizi:** Dosyayı satır satır okur ve her kelimeyi ayrıştırır.
* **Düzenli Veri:** Log alanlarını etiketleyerek hiyerarşik bir yapıda sunar.
* **Otomatik Kayıt:** Tüm çıktıları **output.txt** dosyasına kaydeder.

---

## 🧾 Örnek Çıktı (output.txt)

Date   : 10.07.2026 
Time   : 10:15:23 
Level  : INFO 
Event  : UserLogin 
User   : username 
IP     : 192.168.1.10 
Status : success

--------------------------------------

Date   : 10.07.2026 
Time   : 10:17:45 
Level  : ERROR 
Event  : AuthFailed 
User   : admin 
IP     : 10.0.0.5 
Reason : wrong_password

---

## ⚙️ Derleme ve Çalıştırma

### 1️⃣ Derleme
Terminal üzerinden aşağıdaki komutu kullanarak projeyi derleyebilirsiniz:

g++ LogExtractor.cpp -o LogExtractor

### 2️⃣ Çalıştırma
Derlenen dosyayı şu şekilde çalıştırabilirsiniz:

./LogExtractor

**Not:** Program sizden okunacak dosyanın adını isteyecektir:

Enter the file name that will be read: log.txt

---

## 📁 Dosya Yapısı

LogExtractor/
├── LogExtractor.cpp  # Kaynak kod dosyası
├── log.txt           # Örnek log verisi
├── output.txt        # Program tarafından oluşturulan çıktı
└── README.md         # Proje dokümantasyonu
