#include <stdio.h>
#include <stdlib.h>

int main()
{
    int motor_hacmi,arac_say,aralik,mh2000_byk_say,mh1600_2000_say,mh1600_kck_say,engelli_say,vbyk_sirano,vbyk_mh,abyk_sirano,abyk_mh,vsiz3000kck_mh1600kck,anhtes_byk100000,top_plaka;
    float vergisiz_fiyat,vsiz_2000byk_top,otv,mtv,vsiz_16002000_top,vsiz_1600kck_top,vsiz_fiyat_top,otvli_fiyat,kdv,anh_teslim,anh_fiyat_top,max_vsiz,vbyk_anhtes,max_anhtes,abyk_anhtes,top_otv,top_kdv,top_mtv,mh1600_kck_yuzde,mh1600_2000_yuzde,mh2000_byk_yuzde,vsiz_1600kck_ort,vsiz_16002000_ort,vsiz_2000byk_ort,vsiz_tum_ort,anh_tum_ort;
    char engel,devam;

    arac_say = 0;
    mh1600_kck_say = 0;
    mh1600_2000_say = 0;
    mh2000_byk_say = 0;
    vsiz3000kck_mh1600kck = 0;
    anhtes_byk100000 = 0;
    engelli_say = 0;
    vsiz_2000byk_top = 0;
    vsiz_16002000_top = 0;
    vsiz_1600kck_top = 0;
    top_otv = 0;
    top_kdv = 0;
    top_mtv = 0;
    top_plaka = 0;
    max_anhtes = 0;
    max_vsiz = 0;


    do{
        do{
        printf("Aracin motor hacmini girin: ");
        scanf("%d", &motor_hacmi);
        if (motor_hacmi<=0)
            printf("\nYanlis bir deger girdiniz.Tekrar girin.\n");

        } while(motor_hacmi<=0);
        do{
        printf("Aracin vergisiz fiyatini girin: ");
        scanf("%f", &vergisiz_fiyat);
        if (vergisiz_fiyat<=0)
            printf("\nYanlis bir deger girdiniz.Tekrar girin.\n");
        } while(vergisiz_fiyat<=0);
        arac_say++;

        if (motor_hacmi>2000) {
            vsiz_2000byk_top = vergisiz_fiyat + vsiz_2000byk_top;
            mh2000_byk_say++;
            otv = vergisiz_fiyat*1.3;
            //printf("\nAralik degerini girin(2001-2500 = 1, 2501-3000 = 2, 3001-3500 = 3, 3501-4000 = 4, 4001 ve ustu = 5): ");
            //scanf("%d", &aralik);
            if (motor_hacmi>2000 && motor_hacmi<=2500)
                aralik=1;
                if(motor_hacmi>2500 && motor_hacmi<=3000)
                    aralik=2;
                    if (motor_hacmi>3000 && motor_hacmi<=3500)
                       aralik=3;
                       if (motor_hacmi>3500 && motor_hacmi<=4000)
                           aralik=4;
                           if (motor_hacmi>4000)
                               aralik=5;

            do{
                switch (aralik) {
                    case 1: mtv = 3443/2; break;
                    case 2: mtv = 4799/2; break;
                    case 3: mtv = 7308/2; break;
                    case 4: mtv = 11489/2; break;
                    case 5: mtv = 18803/2; break;
                    default: printf("Belirtilen araliklara gore giris yapmalisiniz! \n");
                             printf("\nAralik degerini girin(2001-2500 = 1, 2501-3000 = 2, 3001-3500 = 3, 3501-4000 = 4, 4001 ve ustu = 5): ");
                             scanf("%d", &aralik);
                    }
            } while (aralik!=1 && aralik!=2 && aralik!=3 && aralik!=4 && aralik!=5);
             }
        else
            if (motor_hacmi>1600) {
                vsiz_16002000_top = vergisiz_fiyat + vsiz_16002000_top;
                mh1600_2000_say++;
                otv = vergisiz_fiyat*0.8;
               //printf("\nAralik degerini girin(1601-1800 = 1, 1801-2000 = 2): ");
                //scanf("%d", &aralik);
                if(motor_hacmi>1600 && motor_hacmi<=1800)
                   aralik=1;
                   if(motor_hacmi>1800 && motor_hacmi<=2000)
                     aralik=2;


                do{
                    switch (aralik) {
                        case 1: mtv = 1457/2; break;
                        case 2: mtv = 2295/2; break;
                        default: printf("Belirtilen araliklara gore giris yapmalisiniz!");
                        printf("Aralik degerini girin(1601-1800 = 1, 1801-2000 = 2): ");
                        scanf("%d", &aralik);
                        }
                } while (aralik!=1 && aralik!=2);
                 }
            else {

                vsiz_1600kck_top = vergisiz_fiyat + vsiz_1600kck_top;
                mh1600_kck_say++;
                if (vergisiz_fiyat<30000)
                    vsiz3000kck_mh1600kck++;

                do {
                    printf("Alicinin engeli var mi?(E/H): ");
                    scanf(" %c", &engel);

                    if (engel == 'E' || engel == 'e') {
                        engelli_say++;
                        otv = 0;
                        mtv = 0;
                        }
                    else
                        if (engel == 'H' || engel == 'h') {
                            otv = vergisiz_fiyat*0.4;

                            //printf("\nAralik degerini girin(1300 ve alti = 1, 1301-1600 = 2): ");
                            //scanf("%d", &aralik);
                            if(motor_hacmi<=1300)
                                aralik=1;
                                if(motor_hacmi>1300 && motor_hacmi<=1600)
                                   aralik=2;

                            do{
                                switch (aralik) {
                                    case 1: mtv = 517/2; break;
                                    case 2: mtv = 827/2; break;
                                    default: printf("\nBelirtilen aralikta giris yapmalisiniz! \n");
                                             printf("Aralik degerini girin(1301 ve alti = 1, 1301-1600 = 2): ");
                                             scanf("%d", &aralik);
                                             break;
                                        }
                                    } while (aralik!=1 && aralik!=2);
                                }
                        else {
                             printf("\nSadece gosterildigi gibi girin!\n"); }



    }while( engel!='E' && engel!='H' && engel!='e' && engel!='h');
  }
        vsiz_fiyat_top = vsiz_2000byk_top + vsiz_16002000_top + vsiz_1600kck_top;
        otvli_fiyat = vergisiz_fiyat + otv;
        kdv = otvli_fiyat*0.18;
        anh_teslim = otvli_fiyat + kdv + mtv + 375;
        anh_fiyat_top = anh_teslim + anh_fiyat_top;

        printf("\nAracin satis sira numarasi: %d\n", arac_say);
        printf("Aracin vergisiz fiyati: %.2fTL\n", vergisiz_fiyat);
        printf("Aracin otv tutari: %.2fTL\n", otv);
        printf("Aracin kdv tutari: %.2fTL\n", kdv);
        printf("Aracin mtv tutari: %.2fTL\n", mtv);
        printf("Aracin plaka masrafi: 375TL\n");
        printf("Aracin anahtar teslim fiyati: %.2fTL\n", anh_teslim);
        printf("\n");

        if (anh_teslim>100000)
            anhtes_byk100000++;

        if (vergisiz_fiyat>max_vsiz) {
            max_vsiz = vergisiz_fiyat;
            vbyk_sirano = arac_say;
            vbyk_mh = motor_hacmi;
            vbyk_anhtes = anh_teslim;
        }
        if (anh_teslim>max_anhtes) {
            max_anhtes = vergisiz_fiyat;
            abyk_sirano = arac_say;
            abyk_mh = motor_hacmi;
            abyk_anhtes = anh_teslim;
        }
        top_otv = otv + top_otv;
        top_kdv = kdv + top_kdv;
        top_mtv = mtv + top_mtv;
        top_plaka = arac_say*375;

        mh1600_kck_yuzde = (float) mh1600_kck_say*100/arac_say;
        mh1600_2000_yuzde = (float) mh1600_2000_say*100/arac_say;
        mh2000_byk_yuzde = (float) mh2000_byk_say*100/arac_say;
        vsiz_1600kck_ort = (float) vsiz_1600kck_top/mh1600_kck_say;
        vsiz_16002000_ort = (float) vsiz_16002000_top/mh1600_2000_say;
        vsiz_2000byk_ort = (float) vsiz_2000byk_top/mh2000_byk_say;
        vsiz_tum_ort = (float) vsiz_fiyat_top/arac_say;
        anh_tum_ort = (float) anh_fiyat_top/arac_say;



            do{
                printf("Baska arac var mi?(E/H): ");
                scanf(" %c", &devam);

                if (devam=='H' || devam=='h') {
                    printf("\nMotor hacmi 1600'u gecmeyen araclarin sayisi ve yuzdesi: %d , %.2f\n ", mh1600_kck_say, mh1600_kck_yuzde);
                    printf("Motor hacmi 1600 ile 2000 arasinda olan araclarin sayisi ve yuzdesi: %d , %.2f\n", mh1600_2000_say, mh1600_2000_yuzde);
                    printf("Motor hacmi 2000'den yuksek olan araclarin sayisi ve yuzdesi: %d , %.2f\n", mh2000_byk_say, mh2000_byk_yuzde);
                    printf("Motor hacmi 1600'u gecmeyen araclarin vergisiz fiyatlarinin ortalamasi: %.2f TL\n", vsiz_1600kck_ort);
                    printf("Motor hacmi 1600 ile 2000 arasinda olan araclarin vergisiz fiyatlarinin ortalamasi: %.2f TL\n", vsiz_16002000_ort);
                    printf("Motor hacmi 2000'den yuksek olan araclarin vergisiz fiyatlarinin ortalamasi: %.2f TL\n", vsiz_2000byk_ort);
                    printf("Tum araclarin vergisiz fiyatlarinin ortalamasi: %.2f TL\n", vsiz_tum_ort);
                    printf("Tum araclarin anahtar teslim fiyatlarinin ortalamasi: %.2f TL\n", anh_tum_ort);
                    printf("Vergisiz fiyati 30000 TL'den dusuk ve motor hacmi 1600'u gecmeyen araclarin sayisi: %d\n", vsiz3000kck_mh1600kck);
                    printf("Anahtar teslim satis fiyati 100000'den yuksek olan araclarin sayisi: %d\n", anhtes_byk100000);
                    printf("Ortopedik engellilere satilan araclarin sayisi: %d\n", engelli_say);
                    printf("Vergisiz fiyati en yuksek olan aracin satis sira numarasi,vergisiz fiyati,motor hacmi,anahtar teslim satis fiyati: %d %.2f TL %d %.2f TL\n", vbyk_sirano, max_vsiz, vbyk_mh, vbyk_anhtes);
                    printf("Anahtar teslim satis fiyati en yuksek olan aracin satis sira numarasi,vergisiz fiyati,motor hacmi,anahtar teslim satis fiyati: %d %.2f TL %d %.2f TL\n", abyk_sirano, max_anhtes, abyk_mh, abyk_anhtes);
                    printf("Devlete odenen toplam OTV,KDV,MTV tutarlari ve toplam plaka masrafi: %.2f TL %.2f TL %.2f TL %d TL", top_otv,top_kdv,top_mtv,top_plaka);
                }
                else
                    if (devam=='E' || devam=='e')
                        break;
                    else
                        printf("\nSadece gosterildigi gibi girin!2\n");


            } while (devam !='E' && devam != 'e' && devam != 'H' && devam !='h');

    } while (devam == 'E' || devam == 'e');


    return 0;
}
