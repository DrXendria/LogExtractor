📄 Log Extractor (C++)
Bu proje, ham log dosyalarını analiz ederek her bir log satırını anlamlı parçalara ayıran ve içeriği insan tarafından okunabilir düzenli bir formata dönüştüren hafif bir C++ uygulamasıdır. Özellikle siber güvenlik analizleri ve sistem yönetimi sırasında karmaşık log verilerini hızlıca görselleştirmek için tasarlanmıştır.

🚀 Özellikler
Dinamik Giriş: Kullanıcıdan dosya adı veya tam dosya yolu alarak çalışır.

Akıllı Ayrıştırma: Log satırlarını kelime bazlı tokenize eder ve etiketler.

Otomatik Kayıt: İşlenen verileri otomatik olarak output.txt dosyasına aktarır.

Hata Yönetimi: Dosya bulunamadığında veya okuma hatalarında kullanıcıyı bilgilendirir.

🧾 Örnek Çıktı Modeli
Program, karmaşık log satırlarını aşağıdaki temiz yapıya dönüştürür:

Girdi (Ham Log): 10.07.2026 10:15:23 INFO UserLogin username 192.168.1.10 success

Çıktı (output.txt):

Plaintext

Date  : 10.07.2026
Time  : 10:15:23
Level : INFO
Event : UserLogin
User  : username
IP    : 192.168.1.10
Status: success
-------------------------------
⚙️ Derleme ve Çalıştırma
Projenin bilgisayarınızda çalışması için bir C++ derleyicisinin (GCC/Clang) kurulu olması gerekir.

1. Derleme
Terminal veya komut istemcisini açıp proje dizinine gidin:

Bash

g++ LogExtractor.cpp -o LogExtractor
2. Çalıştırma
Derleme sonrası oluşan dosyayı çalıştırın:

Bash

./LogExtractor
Program çalıştığında sizden log dosyasının adını isteyecektir: Enter the file name that will be read: log.txt

📁 Dosya Yapısı
Plaintext

LogExtractor/
├── LogExtractor.cpp   # Ana kaynak kodu
├── log.txt            # Örnek giriş dosyası
├── output.txt         # Program çıktısı
└── README.md          # Proje dokümantasyonu
