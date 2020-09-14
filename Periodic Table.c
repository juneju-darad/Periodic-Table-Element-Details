#include<stdio.h>
#include<string.h>

struct elements
{
      char symbol[3];
      int AtomicNumber;
};

void printfile(struct elements E)
{
      FILE *fp;

      puts(E.symbol);

      if (E.AtomicNumber == 1 || strcmp(E.symbol,"H") == 0) {
            fp = fopen("1.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber ==  2 || strcmp(E.symbol,"He") == 0) {
            fp = fopen("2.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

       else if (E.AtomicNumber == 3 || strcmp(E.symbol,"Li") == 0) {
            fp = fopen("3.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 4 || strcmp(E.symbol,"Be") == 0) {
            fp = fopen("4.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 5 || strcmp(E.symbol,"B") == 0) {
            fp = fopen("5.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 6 || strcmp(E.symbol,"C") == 0) {
            fp = fopen("6.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

       else if (E.AtomicNumber == 7 || strcmp(E.symbol,"N") == 0) {
            fp = fopen("7.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 8 || strcmp(E.symbol,"O") == 0) {
            fp = fopen("8.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 9 || strcmp(E.symbol,"F") == 0) {
            fp = fopen("9.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 10 || strcmp(E.symbol,"Ne") == 0) {
            fp = fopen("10.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 11 || strcmp(E.symbol,"Na") == 0) {
            fp = fopen("11.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 12 || strcmp(E.symbol,"Mg") == 0) {
            fp = fopen("12.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 13 || strcmp(E.symbol,"Al") == 0) {
            fp = fopen("13.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 14 || strcmp(E.symbol,"Si") == 0) {
            fp = fopen("14.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 15 || strcmp(E.symbol,"P") == 0) {
            fp = fopen("15.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 16 || strcmp(E.symbol,"S") == 0) {
            fp = fopen("16.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 17 || strcmp(E.symbol,"Cl") == 0) {
            fp = fopen("17.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 18 || strcmp(E.symbol,"Ar") == 0) {
            fp = fopen("18.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 19 || strcmp(E.symbol,"K") == 0) {
            fp = fopen("19.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 20 || strcmp(E.symbol,"Ca") == 0) {
            fp = fopen("20.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 21 || strcmp(E.symbol,"Sc") == 0) {
            fp = fopen("21.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 22 || strcmp(E.symbol,"Ti") == 0) {
            fp = fopen("22.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 23 || strcmp(E.symbol,"V") == 0) {
            fp = fopen("23.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 24 || strcmp(E.symbol,"Cr") == 0) {
            fp = fopen("24.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 25 || strcmp(E.symbol,"Mn") == 0) {
            fp = fopen("25.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 26 || strcmp(E.symbol,"Fe") == 0) {
            fp = fopen("26.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 27 || strcmp(E.symbol,"Co") == 0) {
            fp = fopen("27.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 28 || strcmp(E.symbol,"Ni") == 0) {
            fp = fopen("28.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 29 || strcmp(E.symbol,"Cu") == 0) {
            fp = fopen("29.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 30 || strcmp(E.symbol,"Zn") == 0) {
            fp = fopen("30.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 31 || strcmp(E.symbol,"Ga") == 0) {
            fp = fopen("31.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 32 || strcmp(E.symbol,"Ge") == 0) {
            fp = fopen("32.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 33 || strcmp(E.symbol,"As") == 0) {
            fp = fopen("33.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 34 || strcmp(E.symbol,"Se") == 0) {
            fp = fopen("34.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 35 || strcmp(E.symbol,"Br") == 0) {
            fp = fopen("35.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 36 || strcmp(E.symbol,"Kr") == 0) {
            fp = fopen("36.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 37 || strcmp(E.symbol,"Rb") == 0) {
            fp = fopen("37.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 38 || strcmp(E.symbol,"Sr") == 0) {
            fp = fopen("38.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 39 || strcmp(E.symbol,"Y") == 0) {
            fp = fopen("39.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 40 || strcmp(E.symbol,"Zr") == 0) {
            fp = fopen("40.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 41 || strcmp(E.symbol,"Nb") == 0) {
            fp = fopen("41.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 42 || strcmp(E.symbol,"Mo") == 0) {
            fp = fopen("42.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 43 || strcmp(E.symbol,"Tc") == 0) {
            fp = fopen("43.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 44 || strcmp(E.symbol,"Ru") == 0) {
            fp = fopen("44.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 45 || strcmp(E.symbol,"Rh") == 0) {
            fp = fopen("45.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 46 || strcmp(E.symbol,"Pd") == 0) {
            fp = fopen("46.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 47 || strcmp(E.symbol,"Ag") == 0) {
            fp = fopen("47.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 48 || strcmp(E.symbol,"Cd") == 0) {
            fp = fopen("48.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 49 || strcmp(E.symbol,"In") == 0) {
            fp = fopen("49.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 50 || strcmp(E.symbol,"Sn") == 0) {
            fp = fopen("50.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 51 || strcmp(E.symbol,"Sb") == 0) {
            fp = fopen("51.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 52 || strcmp(E.symbol,"Te") == 0) {
            fp = fopen("52.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 53 || strcmp(E.symbol,"I") == 0) {
            fp = fopen("53.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 54 || strcmp(E.symbol,"Xe") == 0) {
            fp = fopen("54.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 55 || strcmp(E.symbol,"Cs") == 0) {
            fp = fopen("55.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 56 || strcmp(E.symbol,"Ba") == 0) {
            fp = fopen("56.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 57 || strcmp(E.symbol,"La") == 0) {
            fp = fopen("57.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 58 || strcmp(E.symbol,"Ce") == 0) {
            fp = fopen("58.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 59 || strcmp(E.symbol,"Pr") == 0) {
            fp = fopen("59.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 60 || strcmp(E.symbol,"Nd") == 0) {
            fp = fopen("60.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 61 || strcmp(E.symbol,"Pm") == 0) {
            fp = fopen("61.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 62 || strcmp(E.symbol,"Sm") == 0) {
            fp = fopen("22.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 63 || strcmp(E.symbol,"Eu") == 0) {
            fp = fopen("63.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 64 || strcmp(E.symbol,"Gd") == 0) {
            fp = fopen("64.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 65 || strcmp(E.symbol,"Tb") == 0) {
            fp = fopen("65.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 66 || strcmp(E.symbol,"Dy") == 0) {
            fp = fopen("66.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 67 || strcmp(E.symbol,"Ho") == 0) {
            fp = fopen("67.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 68 || strcmp(E.symbol,"Er") == 0) {
            fp = fopen("68.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 69 || strcmp(E.symbol,"Tm") == 0) {
            fp = fopen("69.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 70 || strcmp(E.symbol,"Yb") == 0) {
            fp = fopen("70.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 71 || strcmp(E.symbol,"Lu") == 0) {
            fp = fopen("71.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 72 || strcmp(E.symbol,"Hf") == 0) {
            fp = fopen("72.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 73 || strcmp(E.symbol,"Ta") == 0) {
            fp = fopen("73.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 74 || strcmp(E.symbol,"W") == 0) {
            fp = fopen("74.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 75 || strcmp(E.symbol,"Re") == 0) {
            fp = fopen("75.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 76 || strcmp(E.symbol,"Os") == 0) {
            fp = fopen("76.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 77 || strcmp(E.symbol,"Ir") == 0) {
            fp = fopen("77.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 78 || strcmp(E.symbol,"Pt") == 0) {
            fp = fopen("78.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 79 || strcmp(E.symbol,"Au") == 0) {
            fp = fopen("79.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 80 || strcmp(E.symbol,"Hg") == 0) {
            fp = fopen("80.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 81 || strcmp(E.symbol,"Tl") == 0) {
            fp = fopen("81.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 82 || strcmp(E.symbol,"Pb") == 0) {
            fp = fopen("82.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 83 || strcmp(E.symbol,"Bi") == 0) {
            fp = fopen("83.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 84 || strcmp(E.symbol,"Po") == 0) {
            fp = fopen("84.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 85 || strcmp(E.symbol,"At") == 0) {
            fp = fopen("85.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 86 || strcmp(E.symbol,"Rn") == 0) {
            fp = fopen("86.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 87 || strcmp(E.symbol,"Fr") == 0) {
            fp = fopen("87.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 88 || strcmp(E.symbol,"Ra") == 0) {
            fp = fopen("88.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 89 || strcmp(E.symbol,"Ac") == 0) {
            fp = fopen("89.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 90 || strcmp(E.symbol,"Th") == 0) {
            fp = fopen("90.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 91 || strcmp(E.symbol,"Pa") == 0) {
            fp = fopen("91.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 92 || strcmp(E.symbol,"U") == 0) {
            fp = fopen("92.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 93 || strcmp(E.symbol,"Np") == 0) {
            fp = fopen("93.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 94 || strcmp(E.symbol,"Pu") == 0) {
            fp = fopen("94.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 95 || strcmp(E.symbol,"Am") == 0) {
            fp = fopen("95.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 96 || strcmp(E.symbol,"Cm") == 0) {
            fp = fopen("96.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 97 || strcmp(E.symbol,"Bk") == 0) {
            fp = fopen("97.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 98 || strcmp(E.symbol,"Cf") == 0) {
            fp = fopen("98.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 99 || strcmp(E.symbol,"Es") == 0) {
            fp = fopen("99.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 100 || strcmp(E.symbol,"Fm") == 0) {
            fp = fopen("100.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 101 || strcmp(E.symbol,"Md") == 0) {
            fp = fopen("101.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 102 || strcmp(E.symbol,"No") == 0) {
            fp = fopen("102.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 103 || strcmp(E.symbol,"Lr") == 0) {
            fp = fopen("103.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 104 || strcmp(E.symbol,"Rf") == 0) {
            fp = fopen("104.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 105 || strcmp(E.symbol,"Rf") == 0) {
            fp = fopen("105.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 106 || strcmp(E.symbol,"Sg") == 0) {
            fp = fopen("106.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 107 || strcmp(E.symbol,"Bh") == 0) {
            fp = fopen("107.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 108 || strcmp(E.symbol,"Hs") == 0) {
            fp = fopen("108.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 109 || strcmp(E.symbol,"Mt") == 0) {
            fp = fopen("109.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 110 || strcmp(E.symbol,"Ds") == 0) {
            fp = fopen("110.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 111 || strcmp(E.symbol,"Rg") == 0) {
            fp = fopen("111.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 112 || strcmp(E.symbol,"Cn") == 0) {
            fp = fopen("112.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 113 || strcmp(E.symbol,"Uut") == 0) {
            fp = fopen("113.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 114 || strcmp(E.symbol,"Fl") == 0) {
            fp = fopen("114.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 115 || strcmp(E.symbol,"Uup") == 0) {
            fp = fopen("115.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 116 || strcmp(E.symbol,"Lv") == 0) {
            fp = fopen("116.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 117 || strcmp(E.symbol,"Uus") == 0) {
            fp = fopen("117.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else if (E.AtomicNumber == 118 || strcmp(E.symbol,"Uuo") == 0) {
            fp = fopen("118.txt", "r");
            char c;
            while((c = getc(fp))!= EOF){
                  putchar(c);
            }
            fclose(fp);
      }

      else printf("Wrong Input!!");

      return ;
}

int main(void)
{
      struct elements E;
      int x;

      printf("Search by:\n1.Atomic Number\n2.Symbol\n");
      scanf("%d", &x);

      switch (x) {
            case 1 :
                  printf("Please enter the Atomic Number : ");
                  scanf("%d", &E.AtomicNumber);
                  strcpy(E.symbol, "");
                  break;

            case 2 :
                  printf("Please enter the Symbol : ");
                  scanf("%s", E.symbol);
                  E.AtomicNumber = 150;
                  break;

            default :
                  printf("Wrong Input!");
                  break;
      }

      printfile(E);

      return 0;
}

