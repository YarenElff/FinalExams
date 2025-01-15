#include <iostream>
#include <locale.h>

using namespace std;
int process;

struct personel
{
	string name;
	string surname;
	int wage;
};


void ciz(char character, int number);
void processOne();
int fahreneit(int degree);
void processTwo();
void processThree();
void aylarUygulamasi();
void personelUygulamasi();


int main()
{
    setlocale(LC_ALL, "Turkish");

	

	ciz('-', 100);
	cout << "\033[31m" << "Final sinavi icin hazirladigim programa hosgeldiniz!" << "\033[0m" << endl;
	cout << "\033[31m" << "Islenen konularda pratik yapmak ve ornek gormek icin bu uygulamadan faydalanabilirsiniz!!" << "\033[0m" << endl;
	cout << "\033[31m" << "Bakabileceginiz konular asagida liste halinde gosterilmistir:" << "\033[0m" << endl;
	ciz('-', 100);
	cout << "1)Derece-Fahreneit Uygulamasi(Fondksiyonlar)" << endl << "2)Pointerler ve Adresler" << endl << "3)Veri Tipi Tanimlama" << endl;
	ciz('-', 100);
	cout << "Lutfen yapmak istediginiz islemin numarasini giriniz: ";
	cin >> process;

	switch (process)
	{
	case 1: processOne();
		break;
	case 2: processTwo();
		break;
	case 3: processThree();
		break;
	default:
		break;
	}




}

void ciz(char character, int number) 
{
	for (int i = 0; i < number; i++)
	{
		cout << character;
	}

	cout << endl;
}

void processOne() 
{
	int derece;
	cout << "Fahreneit ' a cevirmek istediginiz derece degerini giriniz :  ";
	cin >> derece;
	cout << fahreneit(derece);
}

int fahreneit(int degree)
{
	int result = (degree * 1.8) + 32;

	return result;

}

void processTwo()
{
	int number = 0;
	int number2 = 0;
	int* ptrNum;
	int array[3]{ 1,2,3 };
	int* arrayPtr;

	cout << "Bu islemi gerceklestirmek icin lutfen sayi giriniz (1-100)[number degiskenine aktarilacak] : ";
	cin >> number;

	ptrNum = &number;

	cout << "Isleme girilen sayi = " << number << endl;
	cout << "Isleme girilen sayinin bellek adresi (ptrNum) = " << ptrNum << " ve bu adresin alternatif yazimi (&number) = " << &number << endl;
	cout << "* ve & birbirinin butunleyenidir (*ptrNum) = " << *ptrNum << endl;

	ciz('-', 100);

	cout << "Simdi durumu biraz daha karistiralim. *ptrNum degiskenimizin degerini farkli bir sayi girerek degistirelim = ";
	cin >> number2;
	*ptrNum = number2;
	cout << "normalde ilk basta ptrNum = &number demistik ve ptrNum sayinin adresine esit olmustu. Simdi ise ptrNum'in basijna * koyarak aslinda degeri su sekilde bildirdik : " << endl;
	cout << "*&number = number2 dolayisiyle * ve & butunleyen oldugundan number = number2 ile ayni anlama gelmis oldu. Haydi kontrol edelim!!" << endl;
	ciz('-', 100);
	cout << "Girilen yeni sayi(number2) = " << number2 << endl;
	cout << "Yeni sayinin adresi(ptrNum) = " << ptrNum << " ve bu adresin alternatif yazimi (&number2) = " << &number2 << endl;
	cout << "* ve & birbirinin butunleyeni oldugundan (*ptrNum) = " << *ptrNum << endl;

	ciz('*', 100);

	cout << "Gelin pointerlara bir de diziler esliginde bakalim!" << endl;
	cout << "Onemli Bilgi = Dizi adı ilk elemanın adresidir." << endl;
	cout << "Array adinda 3 elemanli bir dizi tanimliyoruz. Ve bu diziyi arrayPtr adli pointera atiyoruz." << endl;

	arrayPtr = array;

	cout << "arrayPtr = array oldugunda dizinin ilk elemani olan 1'in adresi gelecektir.Bunun icin & kullanmaya gerek yoktur! Gorelim : " << arrayPtr << endl;
	cout << "Kontrol etmek icin &array[0] ' i de yazdiralim : " << &array[0];

	ciz('*', 100);

	cout << "& eklememek sadece ilk eleman icin gecerlidir. simdi gelin bir sonraki elemana gecmeyi deneyelim!!" << endl;
	cout << "Bunun icin arrayPtr = array + 1 yazdiralim ve olusan degere bakalim!" << endl;
	arrayPtr = array + 1;
	cout << "*arrayPtr : " << *arrayPtr;


}

void processThree() 
{
	cout << "Veri Tipi Tanimlama Bolumune Hosgeldiniz!!" << endl;
	cout << "Enum ve Struct isimli iki adet tanimlama tipipmiz bulunur. Bunlardan struct icerisinde birden cok degisken tutabilirken," << endl;
	cout << "Enum sadece dizi mantigiyla yazilir ve icerisinde degisken tutamaz." << endl;
	cout << "Enum Ornegi : Aylar Uygulamasi" << endl;
	aylarUygulamasi();

	cout << "Bir de struct ornegi bakalim : Personel Uygulamasi" << endl;
	personelUygulamasi();



}

void aylarUygulamasi() 
{
	enum aylar { Gecersiz, Ocak, Subat, Mart, Nisan, Mayis, Haziran, Temmuz, Agustos, Eylul, Ekim, Kasim, Aralik };
	int islem;

	enum aylar ay;
	
	cout << "Lutfen bir ay giriniz (Ocak(1) , Subat(2) gibi) = ";
	cin >> islem;

	ay = static_cast<aylar>(islem);

	switch (islem)
	{
		case 0:cout << "Gecersiz" << endl;
			break;
		case 1:cout << "Ocak" << endl;
			break;
		case 2:cout << "Subat" << endl;
			break;
		case 3:cout << "Mart" << endl;
			break;
		case 4:cout << "Nisan" << endl;
			break;
		case 5:cout << "Mayis" << endl;
			break;
		case 6:cout << "Haziran" << endl;
			break;
		case 7:cout << "Temmuz" << endl;
			break;
		case 8:cout << "Agustos" << endl;
			break;
		case 9:cout << "Eylul" << endl;
			break;
		case 10:cout << "Ekim" << endl;
			break;
		case 11:cout << "Kasim" << endl;
			break;
		case 12:cout << "Aralik" << endl;
			break;
		default:
			break;
	}

	
}

void personelUygulamasi()
{
	string isim;
	string soyisim;
	int maas = 0;

	cout << "Lutfen personelin ismini giriniz : ";
	cin >> isim;
	cout << "Lutfen personelin soyismini giriniz : ";
	cin >> soyisim;
	cout << "Personelin maasini giriniz : ";
	cin >> maas;

	personel personel1;
	personel1.name = isim;
	personel1.surname = soyisim;
	personel1.wage = maas;


	cout << "Eklenen personel!!!" << endl;
	cout << "ismi : " << personel1.name << endl;
	cout << "soyismi : " << personel1.surname << endl;
	cout << "maasi : " << personel1.wage << endl;


}


