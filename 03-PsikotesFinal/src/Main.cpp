#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
#include <fstream>

using namespace std;

bool IsLoggedIn ()
{
    string username,password,un,pw;
    cout<<" Masukkan username : ";cin>>username;
    cout<<" Masukkan password : ";cin>>password;

    ifstream read (username + ".txt");
    getline(read, un);
    getline(read, pw);

    if(un == username && pw ==password)
    {
        return true;
    }
    return false;
}

void loading(string notif)
{
    char a,b;

    cout << "\n\n\n\t\t\t\t" << notif << "\n\n";

    a = 177;
    b = 219;

    cout<<"\t\t\t\t";

    for (int i=0;i<=20;i++)
        cout<<a;

    cout<<"\r";
    cout<<"\t\t\t\t";

    for (int i=0;i<=20;i++)
    {
        cout<<b;
        Sleep(100); //You can also use sleep function instead of for loop
    }

    system("cls");

}

void rocketLoading()
{
    char rocket[] =
    "              _\n\
             /^\\\n\
             |-|\n\
             | |\n\
             |W|\n\
             |A|\n\
             |I|\n\
             |T|\n\
             |.|\n\
            /|.|\\\n\
           / |.| \\\n\
          |  |.|  |\n\
           `-\"\"\"-`\n\
    ";

    for (int i = 0; i < 50; i++) cout << endl; // melompat ke bawah konsol
    cout << rocket ;
    int j = 300000;
    for (int i = 0; i < 50; i++) {
        usleep(j); // bergerak lebih cepat,
        j = (int)(j * 0.9); // waktu sleep
        cout << endl; // memindahkan baris roket ke atas
    }
    system("cls");
}

void header()
{
    cout<<"==================================================================================================================="<<endl;
    cout<<"==================================================================================================================="<<endl;
    cout<<"==                                                                                                               =="<<endl;
    cout<<"==          & & & &    & & & & &    &   &     &      & & &    & & & & &   & & & & &    & & & & &   & & & & &     =="<<endl;
    cout<<"==          &     &   &             &   &   &       &     &       &       &           &                &         =="<<endl;
    cout<<"==          & & & &    & & & & &    &   & &        &       &      &       & & & & &    & & & & &       &         =="<<endl;
    cout<<"==          &                   &   &   &   &       &     &       &       &                     &      &         =="<<endl;
    cout<<"==          &          & & & & &    &   &     &      & & &        &       & & & & &    & & & & &       &         =="<<endl;
    cout<<"==                                                                                                               =="<<endl;
    cout<<"==================================================================================================================="<<endl;
    cout<<"==================================================================================================================="<<endl;
}

void petunjuk()
{
    cout << "###########################################" << endl;
    cout << "###########       PETUNJUK        #########" << endl;
    cout << "###########################################" << endl;
    cout << "1.Isi biodata diri anda dengan benar. " << endl;
    cout << "2.lalu pilih Y untuk memulai mengerjakan soal." << endl;
    cout << "3.Sistem pengerjaan bersifat Sequential (tidak dapat kembali ke soal sebelumnya)." << endl;
    cout << "4.Jawab soal dengan baik dan benar. " << endl;
    cout << "5.Jawab soal dengan cara memasukkan sebuah karakter pilihan anda.(A/B/C/D/E)" << endl;
    cout << "6.Jawab 'P' jika ingin langsung lanjut ke soal berikutnya tanpa menjawab." << endl;
    cout << "7.Jawab 'X' jika ingin mengakhiri Psikotest." << endl;
    cout << "8.Inputan dapat berupa huruf besar maupun kecil (non case sensitive)." << endl;
    cout << "9.Pastikan memasukkan inputan yang sudah ditentukan(A/B/C/D/E/P/X)." << endl;
    cout << "  Jika selain daripada itu, akan dianggap SALAH" << endl;
    cout << "10.Pastikan anda sudah mengisi jawaban sebelum kesoal berikutnya." << endl;
    cout << "11.Setelah soal selesai di jawab, lihatlah skor anda. " << endl;
    cout << "12.Pembahasan hanya akan diperlihatkan sejauh mana anda menjawab soal. " << endl;
    cout << "13.Sistem penilaian Benar +4, Salah -1, Tidak menjawab 0." << endl << endl;
}

void biodata(string nama, string umur, string nim, string jurusan, string fakultas, string universitas)
{
    cout << "###########################################" << endl;
    cout << "#########       DATA PESERTA        #######" << endl;
    cout << "###########################################" << endl;

    cout << "Nama       : " << nama << endl;
    cout << "Umur       : " << umur << endl;
    cout << "NIM        : " << nim << endl;
    cout << "Jurusan    : " << jurusan << endl << endl;
}

void soal(int nomor)
{
    cout << "Soal No. " << nomor << endl;

    switch(nomor)
    {
        case 1 :
            //soal sinonim 1-10
            cout << "Dispensasi = ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Pelarangan" << endl;
            cout << "b.Kelonggaran" << endl;
            cout << "c.Perizinan" << endl;
            cout << "d.Pencegahan" << endl;
            cout << "e.Hadiah" << endl;
            break;
        case 2 :
            //soal
            cout << "Agresi = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Penyerangan" << endl;
            cout << "b.Permusuhan" << endl;
            cout << "c.Permintaan" << endl;
            cout << "d.Pertemuan" << endl;
            cout << "e.Pertikaian" << endl;
            break;
        case 3 :
            //soal
            cout << "Akhlak = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Keadaan" << endl;
            cout << "b.Budi pekerti" << endl;
            cout << "c.Sifat" << endl;
            cout << "d.Anggapan" << endl;
            cout << "e.Nyata" << endl;
            break;
        case 4 :
            //soal
            cout << "Mortalitas = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Angka kematian" << endl;
            cout << "b.Campuran semen dan pasir" << endl;
            cout << "c.Perbaikan" << endl;
            cout << "d.Angka kelahiran" << endl;
            cout << "e.Mesin kendaraan" << endl;
            break;
        case 5 :
            //soal
            cout << "Bahtera = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Rumah tangga" << endl;
            cout << "b.Perahu" << endl;
            cout << "c.Keluarga" << endl;
            cout << "d.Mapan" << endl;
            cout << "e.Prioritas" << endl;
            break;
        case 6 :
            //soal
            cout << "Citra = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Gambaran" << endl;
            cout << "b.Dimensi" << endl;
            cout << "c.Harapan" << endl;
            cout << "d.Imajinasi" << endl;
            cout << "e.Anggapan" << endl;
            break;
        case 7 :
            //soal
            cout << "Dikotomi = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Dwi fungsi" << endl;
            cout << "b.Dua kekuatan" << endl;
            cout << "c.Dua kepala" << endl;
            cout << "d.Kembar dua" << endl;
            cout << "Dua kelompok" << endl;
            break;
        case 8 :
            //soal
            cout << "Holistik = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Sebagian" << endl;
            cout << "b.Obat" << endl;
            cout << "c.Awal" << endl;
            cout << "d.Keseluruhan" << endl;
            cout << "e.Modern" << endl;
            break;
        case 9 :
            //soal
            cout << "Kampiun = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Bubur" << endl;
            cout << "b.Perumus" << endl;
            cout << "c.Juara" << endl;
            cout << "d.Sombong" << endl;
            cout << "e.Baik hati" << endl;
            break;
        case 10 :
            //soal
            cout << "Konsensus = ......." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Musyawarah" << endl;
            cout << "b.Tidak setuju" << endl;
            cout << "c.Keturunan" << endl;
            cout << "d.Masyarakat" << endl;
            cout << "e.Kemufakatan bersama" << endl;
            break;
        case 11 :
            //soal antonim 11-20
            cout << "Defensif X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Serangan" << endl;
            cout << "b.Bertahan" << endl;
            cout << "c.Ofensif" << endl;
            cout << "d.Reaktif" << endl;
            cout << "e.Pasif" << endl;
            break;
        case 12 :
            //soal
            cout << "Anomali X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Stabil" << endl;
            cout << "b.Normal" << endl;
            cout << "c.Sinkron" << endl;
            cout << "d.Absarsi" << endl;
            cout << "e.Standar" << endl;
            break;
        case 13 :
            //soal
            cout << "Antipati X....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Simpati" << endl;
            cout << "b.Tidak peduli" << endl;
            cout << "c.Intisari" << endl;
            cout << "d.Khianat" << endl;
            cout << "e.Tidak acuh" << endl;
            break;
        case 14 :
            //soal
            cout << "Konkaf X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Cermin" << endl;
            cout << "b.Cembung" << endl;
            cout << "c.Cekung" << endl;
            cout << "d.Cermin" << endl;
            cout << "Lensa" << endl;
            break;
        case 15 :
            //soal
            cout << "Bersimbah X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Basah" << endl;
            cout << "b.Banjir" << endl;
            cout << "c.Genangan" << endl;
            cout << "d.Longsor" << endl;
            cout << "e.Kering" << endl;
            break;
        case 16 :
            //soal
            cout << "Curam X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Adil" << endl;
            cout << "b.Curang" << endl;
            cout << "c.Landai" << endl;
            cout << "d.Hilang" << endl;
            cout << "e.Berada" << endl;
            break;
        case 17 :
            //soal
            cout << "Delusi X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Masalah" << endl;
            cout << "b.Bertambah" << endl;
            cout << "c.Khayalan" << endl;
            cout << "d.Ilusi" << endl;
            cout << "e.Nyata" << endl;
            break;
        case 18 :
            //soal
            cout << "Epilog X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Realita" << endl;
            cout << "b.Cerita" << endl;
            cout << "c.Prolog" << endl;
            cout << "d.Simpulan" << endl;
            cout << "e.Harapan" << endl;
            break;
        case 19 :
            //soal
            cout << "Absolut X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Nyata" << endl;
            cout << "b.Benar" << endl;
            cout << "c.Mutlak" << endl;
            cout << "d.Harus" << endl;
            cout << "e.Tidak pasti" << endl;
            break;
        case 20 :
            //soal
            cout << "Hadir X ....." << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a.Presensi" << endl;
            cout << "b.Absen" << endl;
            cout << "c.Pulang" << endl;
            cout << "d.Berangkat" << endl;
            cout << "e.Bekerja" << endl;
            break;
        case 21 :
            //soal analogi 21-30
            cout << "Balada : Lagu" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Novel : Bab" << endl;
            cout << "b.. Melodi : Ritme" << endl;
            cout << "c. Teh : Minuman" << endl;
            cout << "d. Siang : Hari" << endl;
            cout << "e. Malam : Hari" << endl;
            break;
        case 22 :
            //soal
            cout << "Suhu : Fahrenheit" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Jarak : Dinamo" << endl;
            cout << "b. Ombak : knot" << endl;
            cout << "c. Gempa : Richter" << endl;
            cout << "d. Banjir : Bandang" << endl;
            cout << "e. Lampu : Volt" << endl;
            break;
        case 23 :
            //soal
            cout << "Pesawat Terbang : Kabin" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Laci : Meja" << endl;
            cout << "b. Gedung : Eskalator" << endl;
            cout << "c. Rumah : Ruangan" << endl;
            cout << "d. Roda : Kursi" << endl;
            cout << "e. Meja : Kursi" << endl;
            break;
        case 24 :
            //soal
            cout << "Mendobrak : Masuk" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Merampok : Uang" << endl;
            cout << "b. Telepon : Telegram" << endl;
            cout << "c. Mengaduk : Semen" << endl;
            cout << "d. Menyela : Bicara" << endl;
            cout << "e. Mengirim : Surat" << endl;
        	break;
		case 25 :
            //soal
            cout << "Mobil : Bensin" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Sapi : Susu " << endl;
            cout << "b. Pesawat Terbang : Propeler" << endl;
            cout << "c. Manusia : Makanan" << endl;
            cout << "d. Penyakit : Virus" << endl;
            cout << "e. Kambing : Daging" << endl;
            break;
        case 26 :
            //soal
            cout << "Pembalap : Sirkuit" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Kerbau : Sawah" << endl;
            cout << "b. Burung : Sangkar" << endl;
            cout << "c. Petinju : Ring" << endl;
            cout << "d. Bank : Teller" << endl;
            cout << "e. Belajar : Kelas" << endl;
            break;
        case 27 :
            //soal
            cout << "Italia : Euro" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Jerman : Poundsterling" << endl;
            cout << "b. Filipina : Manila" << endl;
            cout << "c. Belanda : Dutch" << endl;
            cout << "d. Inggris : Britania" << endl;
            cout << "e. Argentina : Peso" << endl;
            break;
        case 28 :
            //soal
            cout << "Makanan : Lapar" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Bensin : Motor" << endl;
            cout << "b. Terang : Lampu" << endl;
            cout << "c. Kambing : Rumput" << endl;
            cout << "d. Air : Haus" << endl;
            cout << "e. Besi : Sepeda" << endl;
            break;
        case 29 :
            //soal
            cout << "Titik : Garis" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Awan : Hujan" << endl;
            cout << "b. Roda : Mobil" << endl;
            cout << "c. Sel : Jaringan" << endl;
            cout << "d. Kayu : Pohon" << endl;
            cout << "e. Tangkai : Batang" << endl;
            break;
        case 30 :
            //soal
            cout << "Piano : Organ" << endl;
            //Pilihan Ganda (a,b,c,d,e)
            cout << "a. Nada : Not" << endl;
            cout << "b. Senar : Pipa" << endl;
            cout << "c. Kunci : Pedal" << endl;
            cout << "d. Drum : Gitar" << endl;
            cout << "e. Roda : Sepeda" << endl;
            break;
        case 31 :
            //soal jawaban a
            cout << "Untuk membuat sebuah kios diperlukan waktu selama 48 hari dan dengan mempekerjakan"<<endl;
			cout << "tenaga kerja sebanyak 10 orang. Berapa lama waktu yang diperlukan untuk membuat"<<endl;
			cout << "sebuah kios jika menggunakan tenaga kerja sebanyak 20 orang?"<<endl;
			//Pilihan Ganda (a,b,c,d,e)
			cout << "a. 24 hari"<<endl;
			cout << "b. 12 hari"<<endl;
			cout << "c. 10 hari"<<endl;
			cout << "d. 16 hari"<<endl;
			cout << "e. 14 hari"<<endl;
			break;
		case 32 :
			//soal jawaban c
			cout << "Berapa jumlah dari 37 orang dan 13 orang?"<<endl;
			//Pilihan (a,b,c,d,e)
			cout << "a. 59"<<endl;
			cout << "b. 60"<<endl;
			cout << "c. 50"<<endl;
			cout << "d. 70"<<endl;
			cout << "e. 49"<<endl;
			break;
		case 33 :
			//soal jawaban e
			cout << "Pak Tono menabung uangnya di bank sejumlah Rp. 350.000,00. Sesudah genap 1 tahun Pak Tono menabung dan"<<endl;
			cout << "memperoleh bunga, jumlah uangnya bertambah menjadi Rp. 406.000,00. Bunga yang diterima Pak Tono dalam"<<endl;
			cout << "kurun waktu 1 tahun adalah … %"<<endl;
			//pilihan (a,b,c,d,e)
			cout << "a. 10"<<endl;
			cout << "b. 15"<<endl;
			cout << "c. 12"<<endl;
			cout << "d. 5"<<endl;
			cout << "e. 16"<<endl;
			break;
		case 34 :
			//soal jawaban b
			cout << "Maria menabung uangnya di koperasi sekolah dengan memperoleh bunga 15 % selama setahun. Jika uang tabungan maria"<<endl;
			cout << "awalnya sebesar Rp. 90.000,00, maka setelah 1 tahun menabung dan mendapat bunga, uang tabungannya menjadi ....."<<endl;
			//pilihan (a,b,c,d,e)
			cout << "a. Rp. 77.500,00"<<endl;
			cout << "b. Rp. 103.500,00"<<endl;
			cout << "c. Rp. 102.500,00"<<endl;
			cout << "d. Rp. 99.500,00"<<endl;
			cout << "e. Rp. 85.300,00"<<endl;
			break;
		case 35 :
			//soal jawaban a
			cout << "Malik mengayuh sepeda dengan kecepatan rata-rata 15 km/jam dengan jarak tempuh sejauh 37,5 km. Jika Malik berangkat"<<endl;
			cout << "dengan sepedanya pada pukul 7.55 pagi, pukul berapa ia sampai di tempat yang dituju?"<<endl;
			//pilihan (a,b,c,d,e)
			cout << "a. Pukul 10.25"<<endl;
			cout << "b. Pukul 11.25"<<endl;
			cout << "c. Pukul 10.20"<<endl;
			cout << "d. Pukul 11.15"<<endl;
			cout << "e. Pukul 12.25"<<endl;
			break;
		case 36 :
			//soal jawaban d
			cout << "Seorang penjual buah-buahan membeli 1.000 buah jeruk seharga Rp. 150.000,00. Penjual"<<endl;
			cout << "tersebut menjual jeruk seharga Rp. 180,00 per buah. Berapa % untungnya?"<<endl;
			//pilihan (a,b,c,d,e)
			cout << "a. 24 %"<<endl;
			cout << "b. 15 %"<<endl;
			cout << "c. 10 %"<<endl;
			cout << "d. 20 %"<<endl;
			cout << "e. 18 %"<<endl;
			break;
		case 37 :
			//soal jawaban c
			cout << "Jika Makassar adalah kambing, Malang adalah sapi,"<<endl;
			cout << "Jakarta adalah kerbau, maka Surabaya adalah?"<<endl;
			cout << "a. Kota"<<endl;
			cout << "b. Monas"<<endl;
			cout << "c. Harimau"<<endl;
			cout << "d. Keris"<<endl;
			cout << "e. Pulau"<<endl;
			break;
			 case 38 :
			//soal jawaban a
			cout << "4,2,1,5,4,4,6,6,7,7,...,..."<<endl;
			cout << "a. 8,10 "<<endl;
			cout << "b. 6,8  "<<endl;
			cout << "c. 10,8 "<<endl;
			cout << "d. 8,6  "<<endl;
			cout << "e. 10,9 "<<endl;
			break;
        case 39 :
			//soal jawaban b
			cout << "suatu jenis bakteri, setiap detik akan membelah diri menjadi 2."<<endl;
			cout << "jika pada saat permulaan ada 5 bakteri, waktu yang diperlukan bakteri supaya menjadi 320 adalah ... "<<endl;
			cout << "a. 5 detik "<<endl;
			cout << "b. 6 detik "<<endl;
			cout << "c. 7 detik"<<endl;
			cout << "d.16 detik"<<endl;
			cout << "e.20 detik"<<endl;
			break;
        case 40 :
			//soal jawaban c
			cout << "sebuah bola jatuh dari ketinggian 10 m dan memantul kembali dengan ketinggian 3/4 kali tinggi sebelumya,"<<endl;
			cout << "begitu seterusnya hingga bola berhenti. jumlah seluruh lintasan bola adalah ... "<<endl;
			cout << "a. 65 m"<<endl;
			cout << "b. 70 m"<<endl;
			cout << "c. 75 m"<<endl;
			cout << "d. 77 m"<<endl;
			cout << "e. 80 m"<<endl;
			break;
        case 41 :
			//soal jawaban c
			cout << "suku ke-5 sebuah deret aritmatika adalah 11 dan jumlah nilai suku ke-8 dengan suku ke-12 sama dengan 52."<<endl;
			cout << "jumlah 8 suku pertama deret tersebut ialah ..."<<endl;
			cout << "a. 68"<<endl;
			cout << "b. 72"<<endl;
			cout << "c. 76"<<endl;
			cout << "d. 80"<<endl;
			cout << "e. 84"<<endl;
			break;
        case 42 :
			//soal jawaban c
			cout << "C,A,D,B,...,..."<<endl;
			cout << "a. C,D"<<endl;
			cout << "b. C,E"<<endl;
			cout << "c. E,C"<<endl;
			cout << "d. E,G"<<endl;
			cout << "e. D,E"<<endl;
			break;
        case 43 :
			//soal jawaban c
			cout << "pada sebuah deret geometri diketahui bahwa suku pertamanya adalah 3 dan suku ke-3 adalah 75."<<endl;
			cout << "jumlah empat suku pertama dari deret itu adalah ..."<<endl;
			cout << "a. 468 "<<endl;
			cout << "b. 486 "<<endl;
			cout << "c. 192 "<<endl;
			cout << "d. 256 "<<endl;
			cout << "e. 178 "<<endl;
			break;
        case 44 :
			//soal jawaban c
			cout << "berapakah jumlah semua bilangan ganjil yang berada pada barisan angka 9 sampai dengan 55?"<<endl;
			cout << "a. 678 "<<endl;
			cout << "b. 876 "<<endl;
			cout << "c. 878 "<<endl;
			cout << "d. 768 "<<endl;
			cout << "e. 688 "<<endl;
			break;
        case 45 :
            //soal jawaban c
            cout << "jumlah 101 bilangan genap berurutan adalah 13130 jumlah bilangan terkecil yang pertama "<<endl;
            cout << "dari deretan genap tersebut adalah ..."<<endl;
            cout << "a. 24 "<<endl;
            cout << "b. 26 "<<endl;
            cout << "c. 28 "<<endl;
            cout << "d. 30 "<<endl;
            cout << "e. 32 "<<endl;
            break;
        case 46 :
            //soal jawaban c
            cout << "99, 114, 100, ..., 101, 112"<<endl;
            cout << "a. 105 "<<endl;
            cout << "b. 107 "<<endl;
            cout << "c. 111 "<<endl;
            cout << "d. 113 "<<endl;
            cout << "e. 116 "<<endl;
            break;
        case 47 :
            //soal jawaban c
            cout << "4, 16, 36, 25, ..., 36, 196"<<endl;
            cout << "a. 76 "<<endl;
            cout << "b. 97 "<<endl;
            cout << "c. 99 "<<endl;
            cout << "d. 100"<<endl;
            cout << "e. 102"<<endl;
            break;
         case 48 :
            //soal jawaban c
            cout << "sebuah barisan aritmatika mempunyai pola 285, 281, ..., 273, ..., ... angka berapakah yang mucul pada suku ke-15?"<<endl;
            cout << "a. 231 "<<endl;
            cout << "b. 235 "<<endl;
            cout << "c. 269 "<<endl;
            cout << "d. 229 "<<endl;
            cout << "e. 222 "<<endl;
            break;
         case 49 :
            //soal jawaban c
            cout << "dari suatu deret aritmatika dengan suku ke-n adalau Un, diketahui U3 + U6 + U9 + U12 = 72"<<endl;
            cout << "jumlah 14 suku pertama deret ini adalah ..."<<endl;
            cout << "a. 1008 "<<endl;
            cout << "b. 1080 "<<endl;
            cout << "c. 1800 "<<endl;
            cout << "d. 810  "<<endl;
            cout << "e. 180  "<<endl;
            break;
         case 50 :
            //soal jawaban c
            cout << "suku ke-5 dari suatu barisan geometri adalah 243, hasil bagi suku ke-9 dengan ke-6 adalah 27. suku ke-2 adalah  ..."<<endl;
            cout << "a. 3 "<<endl;
            cout << "b. 5 "<<endl;
            cout << "c. 7 "<<endl;
            cout << "d. 9 "<<endl;
            cout << "e. 11 "<<endl;
            break;
          case 51 :
            //soal jawaban c
            cout << " 3, 9, 27, 81, ..." <<endl;
            cout << "a. 90 "<<endl;
            cout << "b. 110 "<<endl;
            cout << "c. 210 "<<endl;
            cout << "d. 243 "<<endl;
            cout << "e. 234 "<<endl;
            break;
          case 52 :
            //soal jawaban c
            cout << "100, 95, 85, 70, 50, ..."<<endl;
            cout << "a. 25 "<<endl;
            cout << "b. 35 "<<endl;
            cout << "c. 45 "<<endl;
            cout << "d. 55 "<<endl;
            cout << "e. 65 "<<endl;
            break;
          case 53 :
            //soal jawaban c
            cout << "suku ke-2 dari suatu deret aritmatika adalah 5, jika jumlah dari suku ke-4 dan suku ke-6 dari deret tersebut adalah 28"<<endl;
            cout << "maka suku ke-9 adalah ..."<<endl;
            cout << "a. 19 "<<endl;
            cout << "b. 21 "<<endl;
            cout << "c. 26 "<<endl;
            cout << "d. 28 "<<endl;
            cout << "e. 29 "<<endl;
            break;
        case 54 :
            //soal jawaban c
            cout << "Agar deret geometri tak hingga dengan suku pertama a mempunyai jumlah 2, maka a memenuhi ..."<<endl;
            cout << "a. -2 < a < 2 "<<endl;
            cout << "b. -4 < a < 0 "<<endl;
            cout << "c.  0 < a < 2 "<<endl;
            cout << "d.  0 < a < 4 "<<endl;
            cout << "e. -4 < a < 4 "<<endl;
            break;
        case 55 :
            //soal jawaban c
            cout << "diketahui suku ketiga dan suku kelima darii deret aritmatika berturut-turut adalah 18 dan 24."<<endl;
            cout << "jumlah tujuh suku pertamanya adalah ..."<<endl;
            cout << "a. 117 "<<endl;
            cout << "b. 120 "<<endl;
            cout << "c. 137 "<<endl;
            cout << "d. 147 "<<endl;
            cout << "e. 160 "<<endl;
            break;
    }
    cout << endl;
}

void penjelasan(int nomor)
{
    cout << "Pembahasan : " << endl;
    switch(nomor)
    {
        case 1:
            cout << "Dispensasi adalah suatu keputusan negara yang memberikan kebebasan atau kelonggaran dari suatu aturan resmi atau undang-undang yang berlaku." << endl;
            break;
        case 2:
            cout << "Agresi adalah perilaku merugikan dalam interaksi sosial. Dalam psikologi perilaku, agresi adalah bagian dari perilaku yang menyebabkan kerusakan seperti bentuk penyerangan. Agresi bisa menyakiti individu maupun kelompok" << endl;
            break;
        case 3:
            cout<< "Akhlak berasal dari kata khuluqun yang berarti budi pekerti, perangai, tingkah laku atau tabiat." <<endl;
            break;
        case 4:
            cout<< "Mortalitas merupakan jumlah kematian akibat penyakit tertentu maupun kematian alami." <<endl;
            break;
        case 5:
            cout<< "Bahtera dapat berarti suatu kapal kayu yang sangat besar (seperti yang dipakai oleh Nabi Nuh untuk menyelamatkan keluarganya dan hewan-hewan dunia dari air bah)." <<endl;
            break;
        case 6:
            cout<< "Citra (Bahasa Inggris: image) adalah kombinasi antara titik, garis, bidang, dan warna untuk menciptakan suatu imitasi dari suatu objek–biasanya objek fisik atau manusia. Citra bisa berwujud gambar (picture) dua dimensi, seperti lukisan, foto, dan berwujud tiga dimensi, seperti patung" <<endl;
            break;
        case 7:
            cout<< "Dikotomi adalah pembagian atas dua kelompok yang saling bertentangan" <<endl;
            break;
        case 8:
            cout<< "Holistik adalah suatu cara pandang yang menyatakan bahwa keseluruhan sebagai satu kesatuan lebih penting dari pada bagian-bagiannya." <<endl;
            break;
        case 9:
            cout<< "dalam kbbi Arti dari kampiun adalah kam.pi.un. Nomina (kata benda) pemenang terakhir dalam perlombaan atau pertandingan; juara." <<endl;
            break;
        case 10:
            cout<< "Konsensus adalah kesepakatan kata atau permufakatan bersama (mengenai pendapat, pendirian, dan sebagainya) yang dicapai melalui kebulatan suara." << endl;
            break;
        case 11:
            cout<< "Defensif adalah bersikap bertahan, antonim serangan"<<endl;
            break;
        case 12:
            cout<< "Pengertian anomali adalah suatu keganjilan, keanehan atau penyimpangan dari keadaan biasa/normal yang berbeda dari kondisi umum dalam suatu lingkungan. Anomali adalah secara umum mengandung dua dimensi, yaitu dimensi fisik dan dimensi perilaku. Dari dimensi fisik anomali digambarkan sebagai suatu penyimpangan satu bagian atau bahkan tubuh manusia secara keseluruhan. Antonim normal" <<endl;
            break;
        case 13:
            cout<< "Dalam KBBI kata antipati berarti penolakan atau perasaan tidak suka yang kuat; 2 perasaan menentang objek tertentu yang bersifat persona dan abstrak." <<endl;
            break;
        case 14:
            cout<< " Menurut Kamus Besar Bahasa Indonesia (KBBI), arti kata konkaf adalah cekung. Konkaf memiliki arti dalam kelas adjektiva atau kata sifat sehingga konkaf dapat mengubah kata benda atau kata ganti, biasanya dengan menjelaskannya atau membuatnya menjadi lebih spesifik." <<endl;
            break;
        case 15:
            cout<< "Adjektiva (kata sifat). Basah (karena tersiram air dan sebagainya); Berlumuran (darah dan sebagainya)." <<endl;
            break;
        case 16:
            cout<< "Makna curam di KBBI adalah: terjal dan dalam." <<endl;
            break;
        case 17:
            cout<< "Delusi adalah salah satu jenis gangguan mental serius yang dikenal dengan istilah psikosis. Psikosis ditandai dengan ketidaksinambungan antara pemikiran, imajinasi, dan emosi, dengan realitas yang sebenarnya. Orang yang mengalami delusi seringkali memiliki pengalaman yang jauh dari kenyataan." <<endl;
            break;
        case 18:
            cout<< "Epilog adalah memuat kesimpulan dan pelajaran yang bisa diambil pembaca, penonton, serta pendengar dalam sebuah pementasan." <<endl;
            break;
        case 19:
            cout<< "Absolut adalah mutlak atau tidak terbatas. Kekuasaan absolut berarti kekuasaan mutlak dan tidak terbatas yang dimiliki seseorang, sehingga cenderung bersifat otoriter. Bisanya kekuasaan absolut dimiliki oleh seorang raja, terutama raja-raja pada zaman dulu." <<endl;
            break;
        case 20:
            cout<< "Makna hadir di KBBI adalah: ada; (ada) datang." <<endl;
            break;
        case 21:
            cout<< "balada merupakan jenis lagu. Teh merupakan jenis minuman  " <<endl;
            break;
        case 22:
            cout<< "Suhu diukur dengan skala fahrenheit. Gempa diukur dengan ritcher." <<endl;
            break;
        case 23:
            cout<< "Ruang pesawat yaitu kabin dan rumah beruangan." <<endl;
            break;
        case 24:
            cout<< "Mendobrak supaya bisa masuk dan menyela supaya dapat berbicara." <<endl;
            break;
        case 25:
            cout<< "Mobil membutuhkan bensin. Manusia membutuhkan makanan." <<endl;
            break;
        case 26:
            cout<< "Pembalap melakukan pekerjaannya membalap di sirkuit. Petinju melakukan pekerjaannya bertarung di ring." <<endl;
            break;
        case 27:
            cout<< "Mata uang dari negara italia adalah euro. Mata uang dari negara argentina adalah peso." <<endl;
            break;
            case 28:
            cout<< "Makanan : Lapar (jika lapar kita makan, dan jika haus kita minum)." <<endl;
            break;
        case 29:
            cout<< "Titik akan membentuk sebuah garis. Dan sel akan membentuk sebuah jaringan." <<endl;
            break;
        case 30:
            cout<< "Organ merupaka alat music seperti piano yang menghasilkan sebuah suara. Not adalah pelambangan dari sebuah nada." <<endl;
            break;
        case 31:
            cout<< "x=berapa hari yang dibutuhkan jika memperkerjakan 20 orang. " <<endl;
            cout<< "20x=48.10" <<endl;
            cout<< "20x=480" <<endl;
            cout<< "x=480:20" <<endl;
            cout<< "x=24" <<endl;
            cout<< "jadi waktu yang diperlukan untuk membuat sebuah kios jika menggunakan tenaga kerja sebanyak 20 orang adalah 24 hari."<<endl;
            break;
        case 32:
            cout<< "Jumlah dari  57 +13=50" <<endl;
            break;
        case 33:
            cout<< "Bunga = 406.000 - 350.000 = 56.000." <<endl;
            cout<< "presentase = 56.000/350.000 x 100% = 16%." <<endl;
            break;
        case 34:
            cout<< "Bunga = 15% = 15/100" <<endl;
            cout<< "Penambahan uang oleh bunga koperasi" <<endl;
            cout<< "= 15/100 x 90.000  = 13.500" <<endl;
            cout<< "Sehingga, total uang = 90.000 + 13.500 = 103.500." <<endl;
            cout<< "Jadi, setelah setahun, uangnya menjadi Rp. 103.500" <<endl;
            break;
        case 35:
            cout<< "Waktu      = Jarak tempuh : kecepatan" <<endl;
            cout<< "           = 37,5 km : 15 km/jam = 2,5 jam	" <<endl;
            cout<< "           = 2 jam. 30 menit " <<endl;
            cout<< "Waktu Tiba = Waktu berangkat + Waktu dijalan (lama perjalanan) " <<endl;
            cout<< "           = 07.55 + 02.30  = 10.25 " <<endl;
            cout<< "Jadi Adi tiba di tempat tujuan pada pukul 10.25" <<endl;
            break;
        case 36:
            cout<< "1000 x 150 = 150.000" <<endl;
            cout<< "1000 x 180 = 180.000" <<endl;
            cout<< "180.000-150.000 = 30.000" <<endl;
            cout<< "30.000/150.000x100%= 20" <<endl;
            cout<< "Jadi untung pedagang jeruk tersebut adalah 20%" <<endl;
            break;
        case 37:
            cout<< " Makassar → Kambing → hewan berkaki 4" <<endl;
            cout<< " Malang   → Sapi    → hewan berkaki 4" <<endl;
            cout<< " Jakarta  → Kerbau  → hewan berkaki 4" <<endl;
            cout<< " Maka" <<endl;
            cout<< " Jakarta  → Harimau → hewan berkaki 4 " <<endl;
            cout<< " Jawabannya adalah C." <<endl;
            break;
        case 38:
            cout<< " Lihat bilangan dengan jarak 2 bilangan. Sehingga, kita memiliki 3 baris, yaitu :" <<endl;
            cout<< " 4, _ , _ , 5 , _ , _ , 6 , _ , _ , 7    (pola=+1)" <<endl;
            cout<< " 2 , _ , _ , 4 , _ , _ , 6 , _ , _ , ... (Pola = +2)" <<endl;
            cout<< ".... = 6 + 2 = 8" <<endl;
            cout<< " 1 , _ , _ , 4 , _ , _ , 7 , _ , _ , .... (Pola = +3) " <<endl;
            cout<< " .... = 7 + 3 = 10" <<endl;
            cout<< " Jawabaannya adalah 8,10" <<endl;
            break;
        case 39:
            cout<< " N₀ = 5; Nt = 320" <<endl;
            cout<< " Interval pembelahan bakteri t = 1 detik, lama pembelahan bakteri Δt = ? " <<endl;
            cout<< " ⇔ Nt / N₀ = 2^[ Δt / t ]" <<endl;
            cout<< " ⇔ 320/5 = 2^[ Δt /1 ]" <<endl;
            cout<< " ⇔ 64 = 2^[Δt]" <<endl;
            cout<< " ⇔ ∴ Δt = 6 detik" <<endl;
            break;
        case 40:
            cout<< " ⇔ S∞ lintasan ke bawah = h / [1 - r] .............. Persamaan-1" <<endl;
            cout<< " ⇔ S∞ lintasan ke atas  = hr / [1 - r] ............. Persamaan-2" <<endl;
            cout<< " ⇔ Total lintasan       = Persamaan-1 + Persamaan-2" <<endl;
            cout<< " ⇔                      = { h / [1 - r] } + { hr / [1 - r] }" <<endl;
            cout<< " ⇔                      = h x [1 + r] / [1 - r]" <<endl;
            cout<< " ⇔                      = 10 x [1 + ¾] / [1 - ¾]" <<endl;
            cout<< " ⇔                      = 10 x [7/4] / [1/4]" <<endl;
            cout<< " ⇔                      = 10 x 7" <<endl;
            cout<< " Jadi panjang seluruh lintasan adalah 70 m" <<endl;
            break;
        case 41:
            cout<< " Suku ke-5 sebuah deret aritmatika adalah 11 dan jumlah nilai suku ke-8 dengan suku ke-12 sama dengan 52. Maka, jumlah 8 suku pertama deret itu adalah 76." <<endl;
            break;
        case 42:
            cout<< "" <<endl;
            break;
        case 43:
            cout<< " Sn =  a ( 1 - rⁿ ) ÷ ( 1 -r ) " <<endl;
            cout<< " S4 = 3 ( 1 - 5^4 ) ÷ ( 1 - 5 )" <<endl;
            cout<< " S4 = 3 ( 1 - 625 ) ÷ ( -4 )" <<endl;
            cout<< " S4 = 3 ( -624 ) ÷ ( -4 )" <<endl;
            cout<< " S4 = ( -1872 ) ÷ ( -4 ) S4 " <<endl;
            cout<< " S4 = 468" <<endl;
            break;
        case 44:
            cout<< " Sn = n/2 (a + Un)" <<endl;
            cout<< " S24 = 24/2 (9 + 55)" <<endl;
            cout<< " S24 = 12 . 64 " <<endl;
            cout<< " S24 = 768" <<endl;
            break;
        case 45:
            cout<< " Jumlah 101 bilangan genap berurutan = 13.130" <<endl;
            cout<< " a + (a + 2) + (a + 4) + ... + U₁₀₁ = 13.130" <<endl;
            cout<< " b = U2 - U1 = a + 2 - a = 2" <<endl;
            cout<< " Sn = n/2 [2a + (n - 1) b]" <<endl;
            cout<< " 13.130 = 101/2 [2a + 200]" <<endl;
            cout<< " 13.130 = 101/2 × 2 [a + 100]" <<endl;
            cout<< " 13.130 = 101 [a + 100] " <<endl;
            cout<< " 13.130 = 101a + 10.100" <<endl;
            cout<< " 101a   = 13.130 - 10.100" <<endl;
            cout<< " 101a   = 3030" <<endl;
            cout<< "    a   = 3030/101 " <<endl;
            cout<< "    a   = 30 " <<endl;
            cout<< " ∴ suku pertama = 30" <<endl;
            break;
        case 46:
            cout<< " 99 ,114,100,…,101,112" <<endl;
            cout<< " Memiliki konsep penjumlahan lalu pengurangan dengan berurutan dari 15-11. " <<endl;
            cout<< " Maka, 99 +15   = 114" <<endl;
            cout<< "       114 – 14 = 100" <<endl;
            cout<< "       100 + 13 = 113" <<endl;
            cout<< "       113 – 12 = 101" <<endl;
            cout<< "       101 + 11 = 112" <<endl;
            cout<< " Jadi,jawabannya adalah 113" <<endl;
            break;
        case 47:
            cout<< "" <<endl;
            break;
        case 48:
            cout<< "Pada deret aritmatika tersebut memiliki beda sebanyak 4, sehingga 285,281,277,273,269,265,261,257,253,249,245,241,237,233,229" <<endl;
            cout<< "Jadi,untuk suku ke-15 adalah 229."<<endl;
            break;
        case 49:
            cout<< "" <<endl;
            break;
        case 50:
            cout<< " U5 = 243 → a.r^4 = 243" <<endl;
            cout<< " U9/U6 = 27 →a.r^8/a.r^5 = 27" <<endl;
            cout<< "       = r^3 = 27 →r^3 = 3^3 → r = 3" <<endl;
            cout<< " a.r^4 = 243 → a.3^4 = 243 → a.81 = 243" <<endl;
            cout<< "     a = 243:81 = 3" <<endl;
            cout<< " U2    = a.r    = 3.3 = 9" <<endl;
            break;
        case 51:
            cout<< " 3,9,27,81,..." <<endl;
            cout<< " pada deret tersebut didapat beda pada setiap angka adalah (x 3)" <<endl;
            cout<< " 3  x 3 = 9" <<endl;
            cout<< " 9  x 3 = 27" <<endl;
            cout<< " 27 x 3 = 81" <<endl;
            cout<< " 81 x 3 = 243" <<endl;
            cout<< " jadi,jawabannya adalah 243." <<endl;
            break;
        case 52:
            cout<< " Pada deret tersebut untuk mendapatkan hasil jawabannya pada setiap angka dikurang dengan kelipatan 5" <<endl;
            cout<< " 100 - 5  = 95" <<endl;
            cout<< " 95  - 10 = 85" <<endl;
            cout<< " 85  - 15 = 70" <<endl;
            cout<< " 70  - 20 = 50" <<endl;
            cout<< " 50  - 25 = 25" <<endl;
            cout<< " jadi,jawabannya adalah 25." <<endl;
            break;
        case 53:
            cout<< " u2 = a + b = 5 " <<endl;
            cout<< " u4 + u6 = a + 3b + a + 5b = 28" <<endl;
            cout<< " u4 + u6 = 2a + 8b = 28" <<endl;
            cout<< " a + b = 5 → 2a + 2b = 10 " <<endl;
            cout<< " (2a + 2b = 10) - (2a + 8b = 28)= -6b = -18 = (b=3 dan a= 2)" <<endl;
            cout<< " u9 = a + 8b = 2 + 8x3 = 2 + 24 = 26" <<endl;
            break;
        case 54:
            cout<< " S∞ = = 2 = 2 ó a = 2 – 2r" <<endl;
            cout<< " -1 < a < 1" <<endl;
            cout<< " r = 1 ó a = 0" <<endl;
            cout<< " r = -1 ó a = 4" <<endl;
            cout<< " maka 0 < a < 4" <<endl;
            break;
        case 55:
            cout<< " (a+2b = 18) – (a+4b = 24) = (-2b =-6) = (b=3)" <<endl;
            cout<< " a+2(3) = 18" <<endl;
            cout<< " a = 18-6 = 12" <<endl;
            cout<< " S7 = 7/2(2.12+6.3) = 7/2.(24+18)" <<endl;
            cout<< "    = 7/2.(42) = 7.(21) = 147" <<endl;
            break;
    }
    cout << endl;
}

void pembahasan(char key, char ans, int nomor)
{
    cout << "###########################################" << endl;
    cout << "#########        PEMBAHASAN         #######" << endl;
    cout << "###########################################" << endl;

    soal(nomor);

    cout << "Jawaban Benar  : " << key << endl;
    cout << "Jawaban Anda   : " << ans << endl << endl;

    penjelasan(nomor);
    cout << endl;
}

void hasilSkor(char key[], char ans[],int count)
{
    int skor, benar, salah;
    skor = 0;
    benar = 0;
    salah = 0;
    for(int i = 0; i < count; i++)
    {
        if(ans[i] == 'P')
        {
            continue;
        }
        else if(key[i] == ans[i])
        {
            skor += 4;
            benar++;
        }
        else
        {
            skor -= 1;
            salah++;
        }

    }

    //Pengkondisian agar skor tidak negatif
    if(skor < 0)
    {
        skor = 0;
    }

    cout << "###########################################" << endl;
    cout << "#########       SKOR AKHIR        #########" << endl;
    cout << "###########################################" << endl << endl;
    //hasil akhir
    cout << "ANDA MENDAPATKAN SKOR " << skor << endl << endl;
    cout << "Berhasil dijawab   : " << benar + salah << endl;
    cout << "Benar              : " << benar << endl;
    cout << "Salah              : " << salah << endl;
    cout << "Tidak dijawab      : " << 55 - (benar + salah) << endl;
}

int main()
{
    //THEME COLOR
    system("color fd");

    //Deklarasi
    string nama, umur, nim, jurusan, fakultas, universitas;
    int pilihan, count = 0;
    bool status = true;
    char key[] = {'B','A','B','A','B','A','E','D','C','E','A','B','A','B','E','C','E','C','E','B','C','C','C','D','C','C','E',
                  'D','C','A','A','C','E','B','A','D','C','A','B','B','C','C','A','D','D','D','D','D','A','D','D','A','C','D','D'};
    char ans[sizeof(key)];
    char yn, jawab;

    //LOGIN
    cout<<" 1. Register\n 2. Login\n pilihan kamu: ";cin>>pilihan;
    if(pilihan == 1)
    {
        string username, password;
        cout<<" pilih username : ";cin>>username;
        cout<<" pilih password : ";cin>>password;

        ofstream file;
        file.open(username + ".txt");
        file<<username<<endl<<password;
        file.close();

        main ();
    }
    else if (pilihan==2)
    {
        status = IsLoggedIn();

        if(!status)
        {
            cout<<" Gagal login! "<<endl;
            Sleep(1500);
            system("cls");
            main();
        }
        else
        {
            cout<<" Sukses Login! "<<endl;
            Sleep(1500);
            system("cls");
        }
    }

    //END LOGIN


    //PETUNJUK PENGGUNAAN
    loading("Tunggu sebentar ...");

    yn = 'a';

    while(yn != 'Y' || yn != 'N')
    {
        system("cls");
        petunjuk();
        cout << "Apakah anda sudah paham dan ingin melanjutkan?(Y/n) " << endl;
        cin >> yn;

        yn = toupper(yn);

        if(yn == 'Y')
        {
            system("cls");
            break;
        }
        else if(yn == 'N')
        {
            yn = 'a';

            while(yn != 'Y' || yn != 'N')
            {
                system("cls");
                petunjuk();
                cout << "Apakah anda yakin?(Y/n) " << endl;
                cin >> yn;

                yn = toupper(yn);

                if(yn == 'Y')
                {
                    system("cls");
                    loading("Menutup Program ...");
                    system("cls");
                    cout << "Terima Kasih Sudah menggunakan program ini!!!" << endl;
                    exit(0);
                }
                else if(yn == 'N')
                {
                    break;
                }
                else
                {
                    system("cls");
                    petunjuk();
                    cout << "Apakah anda yakin?(Y/n) " << endl;
                    cout << "Input SALAH!!!" << endl;
                    Sleep(1500);
                }
            }
        }
        else
        {
            system("cls");
            petunjuk();
            cout << "Apakah anda sudah paham dan ingin melanjutkan?(Y/n) " << endl;
            cout << "Input SALAH!!!" << endl;
            Sleep(1500);
        }
    }

    //OPENING

    loading("Tunggu sebentar ...");

    header();
    cout << endl;
    cout << "===== MASUKKAN DATA ======" << endl;
    cout << "Nama           : ";
    getline(cin, nama);
    getline(cin, nama);

    cout << "Umur           : ";
    getline(cin, umur);

    cout << "NIM            : ";
    getline(cin, nim);

    cout << "Jurusan        : ";
    getline(cin, jurusan);

    cout << "Fakultas       : ";
    getline(cin, fakultas);

    cout << "Universitas    : ";
    getline(cin, universitas);

    yn = 'a';

    while(yn != 'Y' || yn != 'N')
    {
        system("cls");
        header();
        biodata(nama,umur,nim,jurusan,fakultas,universitas);
        cout << "\nApakah anda yakin ingin memulai psikotes ini?(Y/n)" << endl;
        cin >> yn;

        yn = toupper(yn);

        if(yn == 'Y')
        {
            system("cls");
            break;
        }
        else if(yn == 'N')
        {
            yn = 'a';

            while(yn != 'Y' || yn != 'N')
            {
                system("cls");
                header();
                biodata(nama,umur,nim,jurusan,fakultas,universitas);
                cout << "\nApakah anda yakin?(Y/n) " << endl;
                cin >> yn;

                yn = toupper(yn);

                if(yn == 'Y')
                {
                    system("cls");
                    main();
                }
                else if(yn == 'N')
                {
                    break;
                }
                else
                {
                    system("cls");
                    header();
                    biodata(nama,umur,nim,jurusan,fakultas,universitas);
                    cout << "Apakah anda yakin?(Y/n) " << endl;
                    cout << "Input SALAH!!!" << endl;
                    Sleep(1500);
                }
            }
        }
        else
        {
            system("cls");
            header();
            biodata(nama,umur,nim,jurusan,fakultas,universitas);
            cout << "\nApakah anda yakin ingin memulai psikotes ini?(Y/n)" << endl;
            cout << "Input SALAH!!!" << endl;
            Sleep(1500);
        }
    }

    //START PSIKOTEST
    loading("Memulai Psikotes ...");

    for(int i = 0; i < sizeof(key); i++)
    {
        header();
        cout << endl;

        biodata(nama,umur,nim,jurusan,fakultas,universitas);
        soal(i + 1);

        //input jawaban
        cout << "Jawaban Anda ('P' untuk melewati, 'X' untuk mengakhiri)   : ";
        cin >> jawab;
        jawab = toupper(jawab);

        ans[i] = jawab;

        if(ans[i] == 'X')
        {
            system("cls");
            loading("Tunggu sebentar ...");
            break;
        }
        count++;
        system("cls");
        loading("Soal selanjutnya ...");
    }

    //END PSIKOTEST

    yn = 'a';

    while(yn != 'Y' || yn != 'N')
    {
        system("cls");
        header();
        biodata(nama,umur,nim,jurusan,fakultas,universitas);
        cout << "Psikotes telah selesai, ingin melihat hasilnya?(Y/n)" << endl;
        cin >> yn;

        yn = toupper(yn);

        if(yn == 'Y')
        {
            system("cls");

            rocketLoading();
            loading("Menghitung skor anda");

            header();
            cout << endl;

            hasilSkor(key,ans,count);
            cout << endl;

            break;
        }
        else if(yn == 'N')
        {
            yn = 'a';

            while(yn != 'Y' || yn != 'N')
            {
                system("cls");
                header();
                biodata(nama,umur,nim,jurusan,fakultas,universitas);
                cout << "Apakah anda yakin?(Y/n) " << endl;
                cin >> yn;

                yn = toupper(yn);

                if(yn == 'Y')
                {
                    system("cls");
                    loading("Menutup Program ...");
                    system("cls");
                    cout << "Terima Kasih Sudah menggunakan program ini!!!" << endl;
                    exit(0);
                }
                else if(yn == 'N')
                {
                    break;
                }
                else
                {
                    system("cls");
                    header();
                    biodata(nama,umur,nim,jurusan,fakultas,universitas);
                    cout << "Apakah anda yakin?(Y/n) " << endl;
                    cout << "Input SALAH!!!" << endl;
                    Sleep(1500);
                }
            }
        }
        else
        {
            system("cls");
            header();
            biodata(nama,umur,nim,jurusan,fakultas,universitas);
            cout << "Psikotes telah selesai, ingin melihat hasilnya?(Y/n)" << endl;
            cout << "Input SALAH!!!" << endl;
            Sleep(1500);
        }
    }

    //PEMBAHASAN

    yn = 'a';

    while(yn != 'Y' || yn != 'N')
    {
        system("cls");
        header();
        cout << endl;

        hasilSkor(key,ans,count);
        cout << endl;
        cout << "Apakah anda ingin melihat pembahasannya?(Y/n)" << endl;
        cin >> yn;

        yn = toupper(yn);

        if(yn == 'Y')
        {
            system("cls");

            rocketLoading();
            loading("Menampilkan pembahasan");

            for(int i = 0; i < count; i++)
            {
                yn = 'a';

                while(yn != 'Y' || yn != 'N')
                {
                    system("cls");
                    header();
                    cout << endl;

                    pembahasan(key[i],ans[i],i+1);
                    cout << "Lanjut ke pembahasan selanjutnya?(Y/n)" << endl;
                    cin >> yn;
                    yn = toupper(yn);

                    if(yn == 'Y')
                    {
                        system("cls");
                        loading("Pembahasan Selanjutnya");
                        break;
                    }
                    else if(yn == 'N')
                    {
                        system("cls");
                        loading("Tunggu sebentar ...");
                        break;
                    }
                    else
                    {
                        system("cls");
                        header();
                        cout << endl;

                        pembahasan(key[i],ans[i],i+1);
                        cout << "Lanjut ke pembahasan selanjutnya?(Y/n)" << endl;
                        cout << "Input SALAH!!!" << endl;
                        Sleep(1500);
                    }
                }
                system("cls");
                if(yn =='N')break;
            }
            break;
        }
        else if(yn == 'N')
        {
            yn = 'a';

            while(yn != 'Y' || yn != 'N')
            {
                system("cls");
                header();
                cout << endl;

                hasilSkor(key,ans,count);
                cout << endl;
                cout << "Apakah anda yakin?(Y/n) " << endl;
                cin >> yn;

                yn = toupper(yn);

                if(yn == 'Y')
                {
                    system("cls");
                    loading("Menutup Program ...");
                    system("cls");
                    cout << "Terima Kasih Sudah menggunakan program ini!!!" << endl;
                    exit(0);
                }
                else if(yn == 'N')
                {
                    break;
                }
                else
                {
                    system("cls");
                    header();
                    cout << endl;

                    hasilSkor(key,ans,count);
                    cout << endl;
                    cout << "Apakah anda yakin?(Y/n) " << endl;
                    cout << "Input SALAH!!!" << endl;
                    Sleep(1500);
                }
            }
        }
        else
        {
            system("cls");
            header();
            cout << endl;

            hasilSkor(key,ans,count);
            cout << endl;
            cout << "Apakah anda ingin melihat pembahasannya?(Y/n)" << endl;
            cout << "Input SALAH!!!" << endl;
            Sleep(1500);
        }
    }

    //END PEMBAHASAN

    //START CLOSING
    header();
    cout << "\nSemuanya telah selesai, apakah anda ingin Logout?(Y/n)" << endl;
    cin >> yn;

    yn = toupper(yn);

    if(yn == 'Y')
    {
        system("cls");
        loading("Logout ...");
        loading("Menutup Program...");
    }
    else if(yn == 'N')
    {
        system("cls");
        loading("Kembali ke halaman utama");
        main();
    }

    cout << "TERIMA KASIH SUDAH MEMPERCAYAKAN SEMUANYA KEPADA KAMI!!" << endl;
    //END CLOSING

    return 0;
}