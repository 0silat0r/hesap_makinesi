#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    hesap_makinesi();
}

void hesap_makinesi()
{
    system("clear");
    
        printf("Hesap Makinesi V1\n");
        printf("Programming by cpu-astatine\n");

        int secim;
        printf("1- Aritmetiksel Islemler\n2- Yuzde Hesaplari\n: ");
        scanf("%d",&secim);

    if(secim == 1)
    {
        while(1)
        {
            system("clear");
            printf("Aritmetiksel Islemler\n");
        
            float a1,a2;
            float toplama,cikarma,carpma,bolme;
            printf("Lutfen ilk terimi girin: ");
            scanf("%f",&a1);

            printf("Lutfen ikinci terimi girin: ");
            scanf("%f",&a2);
            printf("\n");

            int secim2;
            printf("0- Cikis\n1- Toplama\n2- Cikarma\n3- Carpma\n4- Bolme\nLutfen seciminizi yapin\n: ");
            scanf("%d",&secim2);

            if(secim2 == 1)
            {
                toplama = a1+a2;
                printf("Islemin Cevabi\n");
                printf("%.2f + %.2f = %.2f\n",a1,a2,toplama);
                sleep(3);
                system("clear");
                continue;
            }
            else if(secim2 == 2)
            {
                cikarma = a1-a2;
                printf("Islemin Cevabi\n");
                printf("%.2f - %.2f = %.2f\n",a1,a2,cikarma);
                sleep(3);
                system("clear");
                continue;
            }
            else if(secim2 == 3)
            {
                carpma = a1*a2;
                printf("Islemin Cevabi\n");
                printf("%.2f * %.2f = %.2f\n",a1,a2,carpma);
                sleep(3);
                system("clear");
                continue;
            }
            else if(secim2 == 4)
            {
                if((a1 == 0) || (a2 == 0))
                {
                    printf("\nIlk terim veya son terim 0 olamaz. Yoksa ya islem 0 olur yada islem belirsizdir.\n");
                    sleep(3);
                    printf("Program yeniden baslatiliyor...\n");
                    sleep(2);
                    system("clear");
                    hesap_makinesi();
                }
                bolme = a1/a2;
                printf("Islemin Cevabi\n");
                printf("%.2f / %.2f = %.2f\n",a1,a2,bolme);
                sleep(3);
                system("clear");
                continue;
            }
            else if(secim2 == 0)
            {
                sleep(1);
                printf("\nProgram kapatiliyor...\n");
                sleep(2);
                return EXIT_SUCCESS;
            }
        }
    }
    else if(secim == 2)
    {
        system("clear");
        float yuzde,sayi,sonuc;
        printf("Yuzde Hesaplari\n");
            
        printf("Lutfen hesabi yapilacak sayiyi girin: ");
        scanf("%f",&sayi);

        printf("Yuzdeyi girin: ");
        scanf("%f",&yuzde);

        sonuc = sayi * (yuzde/100);
            
        printf("%.2f kadar marjinal bir etki olusturacaktir.\n",sonuc);
        return sonuc;
    }
    else
    {
        printf("Yanlis butona tikladiniz. Lutfen tekrar deneyin.\n");
        return EXIT_SUCCESS;
    }
}
