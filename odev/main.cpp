#include <iostream>

using namespace std;

int main()
{
    int soru;
    cout<<"Cevabini gormek istediginiz soru numarasini giriniz(1-5): ";
    cin>>soru;
    if(soru==1){
        float yaricap;
        cout<<"Lutfen dairenin yaricapini giriniz ";
        cin>>yaricap;
        cout<<"Dairenin cevresi: "<<2*yaricap*3.14;
        cout<<"\nDairenin alani: "<<yaricap*yaricap*3.14;
    }else if(soru==2){
        cout<<"Ilk satirdaki ilk 2 tanimlama degisken isimleri hatali oldugundan hata verir. ";
        cout<<"3. tanimlamada degiskene atanan deger short veri tipi sinirini astigindan yanlis bir deger alir. ";
        cout<<"4. tanimlama * isaretinin ASCII degerini dondurur. 5. tanimlama aynen dogrudur. ";
        cout<<"6. tanimlamada char veri tipine tek karakterden fazla karakter atandigindan degisken beklenenden farkli deger alir. ";
        cout<<"7. tanimlama bool veri tipi icin dogru olmamakla birlikte programa hata verdirmez. ";
        cout<<"8. tanimlamada x, atanan degerin yalnizca tam sayi kismini alabilir. ";
        cout<<"9. tanimlama float veri tipinin sinirindan dolayi virgulden sonraki 1. basamaga kadar alabilir. ";
    }else if(soru==3){
        int s1,s2;
        cout<<"Ilk sayiyi giriniz: ";
        cin>>s1;
        cout<<"Ikinci sayiyi giriniz: ";
        cin>>s2;
        int s3=s1^s2;
        cout<<"Eger simdi goreceginiz sayi 0 ise girdiginiz sayilar esittir: "<<s3;
    }else if(soru==4){
        int yas1,yas2,yas3;
        cout<<"1. kisinin yasini giriniz. ";
        cin>>yas1;
        cout<<"2. kisinin yasini giriniz. ";
        cin>>yas2;
        cout<<"3. kisinin yasini giriniz. ";
        cin>>yas3;
        cout<<"3 kisinin yaslari toplami: "<<yas1+yas2+yas3;
    }else if(soru==5){
        cout<<"\\DENEYAP\\             Atolyesi\'ni \n\n\n   \"cok\" ama \"cok\" seviyorum!";
    }else{
        cout<<"Lutfen dogru bir soru numarasi giriniz";
    }
    return 0;
}
