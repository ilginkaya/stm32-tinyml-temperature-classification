### STM32 Üzerinde TinyML ile Gerçek Zamanlı Sıcaklık Sınıflandırma

Bu projede, vücut sıcaklığı verisini analiz ederek sıcaklığın normal veya anormal olup olmadığını belirleyen bir yapay zekâ modeli geliştirilmiş ve bu model STM32 mikrodenetleyici üzerinde gerçek zamanlı olarak çalıştırılmıştır.

Model çıktısı, sistem üzerinde bulunan LED’ler aracılığıyla görselleştirilerek donanım seviyesinde doğrulanmıştır.


# 🚀 Projenin Amacı

Bu çalışmanın amacı:
	•	Makine öğrenmesi modelini gömülü sistem üzerinde çalıştırmak
	•	TinyML yaklaşımını gerçek bir donanım üzerinde uygulamak
	•	Sensör verisi → AI → donanım çıktısı zincirini kurmak



# ⚙️ Sistem Mimarisi

Proje şu adımlardan oluşmaktadır:
	1.	Python ortamında veri üretimi
	2.	Yapay sinir ağı modelinin eğitilmesi
	3.	Modelin TensorFlow Lite formatına dönüştürülmesi
	4.	X-CUBE-AI ile STM32’ye entegre edilmesi
	5.	Gerçek zamanlı inference ve LED kontrolü


# 🧠 Model Yapısı

Model oldukça hafif ve gömülü sistemlere uygun şekilde tasarlanmıştır:
	•	Giriş: 1 adet sıcaklık değeri
	•	Katmanlar:
	•	Dense (16 nöron, ReLU)
	•	Dense (8 nöron, ReLU)
	•	Dense (1 nöron, Sigmoid)

Çıkış değeri:
	•	1 → Normal sıcaklık
	•	0 → Anormal sıcaklık



# 📊 Veri Seti

Model sentetik veri ile eğitilmiştir:
	•	Normal sıcaklık: 36.4 – 36.6 °C
	•	Anormal düşük: 34.0 – 35.5 °C
	•	Anormal yüksek: 37.5 – 39.0 °C

Toplam veri sayısı: 1000

# 🔢 Normalizasyon

Model eğitimi sırasında veri aşağıdaki şekilde ölçeklendirilmiştir:
`X = (X - 36.0) * 10`

Aynı işlem gömülü sistem tarafında da uygulanmaktadır:
`input = (sicaklik - 36.0f) * 10.0f;`

Bu adım, modelin doğru çalışması için kritik öneme sahiptir.

💡 Sistem Davranışı

Model çıktısı doğrudan LED’lere bağlanmıştır:
Sıcaklık Durumu           LED
Normal                 🟢 Yeşil LED (LD1)
Anormal                🔴 Kırmızı LED (LD3)


# 🧪 Test Sonuçları

Gerçek donanım üzerinde yapılan testlerde:
	•	35.9 – 37.1 °C → Normal (Yeşil LED yanar)
	•	Bu aralığın dışındaki değerler → Anormal (Kırmızı LED yanar)

Model, eğitim verisinden daha geniş bir aralıkta doğru genelleme yapabilmiştir.



# 🔧 Kullanılan Teknolojiler
	•	TensorFlow / Keras
	•	TensorFlow Lite
	•	STM32CubeIDE
	•	X-CUBE-AI
	•	STM32 Nucleo-U575ZI-Q


# 🔌 Donanım Bilgisi
	•	Kart: STM32 Nucleo-U575ZI-Q
	•	LD1 (PC7) → Yeşil LED
	•	LD3 (PG2) → Kırmızı LED



# 🧩 Çalışma Mantığı

Sistem döngüsü:
	1.	Sıcaklık değeri belirlenir
	2.	Normalize edilir
	3.	Model çalıştırılır
	4.	Çıktıya göre LED kontrol edilir

  
