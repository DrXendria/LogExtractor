# 📄 Log Extractor (C++) Bu proje, bir log dosyasını okuyup her satırı parçalayan ve log içeriğini **daha okunabilir ve düzenli bir formata** dönüştüren basit bir C++ log extractor uygulamasıdır. Bu klasörde örnek bir log dosyası bulunmaktadır, dilerseniz silip yerine kendinizinkini ekleyebilirsiniz. Amaç, ham log verisini insan gözüyle kolay analiz edilebilir hâle getirmektir. 
--- ## 🚀 Özellikler - Kullanıcıdan log dosya adını alır. Programla aynı dizindeyse isim yeterlidir, değilse tam yol verilmelidir. 
- Dosyayı satır satır okur - Her satırı kelimelere böler - Log alanlarını etiketleyerek düzenli formatta yazar - Çıktıyı output.txt dosyasına kaydeder
- --- ## 🧾 Örnek Çıktı (output.txt)

------------------------------
Date   : 10.07.2026
Time   : 10:15:23
Level  : INFO
Event  : UserLogin
user   : username
ip     : 192.168.1.10
status : success
------------------------------

------------------------------
Date   : 10.07.2026
Time   : 10:17:45
Level  : ERROR
Event  : AuthFailed
user   : admin
ip     : 10.0.0.5
reason : wrong_password
------------------------------
⚙️ Derleme ve Çalıştırma
1️⃣ Derleme
g++ LogExtractor.cpp -o LogExtractor
2️⃣ Çalıştırma
./LogExtractor
Program sizden okunacak dosyanın adını isteyecektir:

Enter the file name that will be read: log.txt
📁 Dosya Yapısı
LogExtractor/
│
├── LogExtractor.cpp
├── log.txt
├── output.txt
└── README.md
