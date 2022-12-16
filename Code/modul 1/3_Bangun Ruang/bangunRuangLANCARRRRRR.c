#include <stdio.h>
#include <stdlib.h>


float volumeTabung(float r, float t){//fungsi tabung
        float volume;
        volume = 3.14 * r * r * t;
        return volume;
        }
float lpTabung(float r, float t){
        float lp;
        lp = 2 * 3.14 * r * (r + t);
        return lp;
        }

float volumeBola(float r){//fungsi bola
        float volume;
        volume = (4 * 3.14 * r * r * r) / 3;
        return volume;
        }
float lpBola(float r){
        float lp;
        lp = 4 * 3.14 * r * r;
        return lp;
        }


float volumeLimas(float s, float t){//fungsi limas segitiga
        float volume;
        volume = (s * s * t) / 3;
        return volume;
        }
float lpLimas(float s, float sm){
        float lp;
        lp = (s * s) + (2 * s * sm);
        return lp;
        }

float volumePrisma(float a, float ta, float t){//fungsi prisma segitiga
        float volume;
        volume = (a * ta) / 2 * t;
        return volume;
        }
float lpPrisma(float a, float b, float c, float ta, float t){
        float lp;
        lp = (a * ta) + ((a + b + c) * t);
        return lp;
        }

float volumeKerucut(float r, float t){//fungsi kerucut
        float volume;
        volume = (3.14 * r * r * t) / 3;
        return volume;
        }
float lpKerucut(float r, float gp){
        float lp;
        lp = 3.14 * r * (r + gp);
        return lp;
        }


void namaKelompok(){
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                          MENGHITUNG                          | |\n");
        printf("\t\t| |                         BANGUN RUANG                         | |\n");
        printf("\t\t| |..............................................................| |\n");
        printf("\t\t| |                        Mari Kita Coba                        | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t| |             1. Ida Bagus Paalakaa RNB                        | |\n");
        printf("\t\t| |                 2205551003                                   | |\n");
        printf("\t\t| |             2. I Gede Made Rapriananta Pande                 | |\n");
        printf("\t\t| |                 2205551005                                   | |\n");
        printf("\t\t| |             3. Ni Kadek Ari Diah Lestari                     | |\n");
        printf("\t\t| |                 2205551069                                   | |\n");
        printf("\t\t| |             4. I Gusti Ayu Krisna Kusuma Dewi                | |\n");
        printf("\t\t| |                 2205551072                                   | |\n");
        printf("\t\t| |             5. Kadek Yogi Dwi Putra Utama                    | |\n");
        printf("\t\t| |                 2205551076                                   | |\n");
        printf("\t\t| |             6. Anak Agung Indi Kusuma Putra                  | |\n");
        printf("\t\t| |                 2205551079                                   | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n\n");
        system("pause");
        system("cls");
}


int validasi_Int(float *var)
{
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%f %c", var, &cek) == 1)
        {
            return *var;
        }
    }
    return 0;
}

// validasi ulang int
void Input_Int(float *var, char *nama)
{
    while (1)
    {
        printf("%s", nama);
        fflush(stdin);
        if (validasi_Int(var))
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input anda salah !                   | |\n");
	printf("\t\t| |                  Masukan Input Dengan Benar                  | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}

void Input_negatif(float *var, char *nama){
    while (1)
    {
        Input_Int(var, nama);
        fflush(stdin);
        if (*var >= 0)
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input anda salah !                   | |\n");
	printf("\t\t| |                  Masukan Input Dengan Benar                  | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}
// range input integer
void range_Validasi_Int(float *var, int range1, int range2, char *nama)
{
    while (1)
    {
        Input_Int(var, nama);
        fflush(stdin);
        if (*var >= range1 && *var <= range2)
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input anda salah !                   | |\n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                  Masukan Input Dengan Benar                  | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");

    }
}


int main(){
        system("color f0");
        float read;

	float jariJariTabung;
	float tinggiTabung;

	float jariJariBola;

	float sisiLimas;
	float tinggiLimas;
	float tinggiSisiMiring;

	float panjangAlasPrisma;
	float panjangAlas2Prisma;
	float panjangAlas3Prisma;
	float tinggiAlasPrisma;
	float tinggiPrisma;

	float jariJariKerucut;
	float tinggiKerucut;
	float garisPelukisKerucut;

    namaKelompok();
        float input;
    do{
	printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                          MENGHITUNG                          | |\n");
	printf("\t\t| |                         BANGUN RUANG                         | |\n");
	printf("\t\t| |..............................................................| |\n");
	printf("\t\t| |                        Mari Kita Coba                        | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t| | 1.Tabung                                                     | |\n");
	printf("\t\t| | 2.Bola                                                       | |\n");
	printf("\t\t| | 3.Limas Segiempat                                            | |\n");
	printf("\t\t| | 4.Prisma Segitiga                                            | |\n");
	printf("\t\t| | 5.Kerucut                                                    | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n\n");

        range_Validasi_Int(&input,1,5,"\n\n\t\t\t\t     Pilih bangun ruang: ");
        system("cls");  
    
        if(input==1){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan jari-jari tabung: ");
        Input_negatif(&jariJariTabung, " ");
        printf("\t\tMasukkan tinggi tabung: ");
        Input_negatif(&tinggiTabung, " ");
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume tabung : %.2f", volumeTabung(jariJariTabung, tinggiTabung));
        printf("\n\t\tLuas permukaan tabung : %.2f\n", lpTabung(jariJariTabung, tinggiTabung));
        printf("\t\t____________________________________________________________________\n");

        }else if(input==2){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan jari-jari bola: ");
        Input_negatif(&jariJariBola, " ");
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume bola : %.2f", volumeBola(jariJariBola));
        printf("\n\t\tLuas permukaan bola : %.2f\n", lpBola(jariJariBola));
        printf("\t\t____________________________________________________________________\n");

        }else if(input==3){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan sisi alas limas: ");
        Input_negatif(&sisiLimas, " ");
        printf("\t\tMasukkan tinggi limas: ");
        Input_negatif(&tinggiLimas, " ");
        printf("\t\tMasukkan tinggi sisi miring limas: ");
        Input_negatif(&tinggiSisiMiring, " ");
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume limas : %.2f", volumeLimas(sisiLimas, tinggiLimas));
        printf("\n\t\tLuas permukaan limas : %.2f\n", lpLimas(sisiLimas, tinggiSisiMiring));
        printf("\t\t____________________________________________________________________\n");

        }else if(input==4){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan panjang alas prisma: ");
        Input_negatif(&panjangAlasPrisma, " ");
        printf("\t\tMasukkan panjang alas prisma lainnya: ");
        Input_negatif(&panjangAlas2Prisma, " ");
        printf("\t\tMasukkan panjang alas prisma lainnya: ");
        Input_negatif(&panjangAlas3Prisma, " ");
        printf("\t\tMasukkan tinggi alas prisma: ");
        Input_negatif(&tinggiAlasPrisma," ");
        printf("\t\tMasukkan tinggi prisma: ");
        Input_negatif(&tinggiPrisma, " ");
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume prismaa : %.2f", volumePrisma(panjangAlasPrisma, tinggiAlasPrisma, tinggiPrisma));
        printf("\n\t\tLuas permukaan prisma : %.2f\n", lpPrisma(panjangAlasPrisma, panjangAlas2Prisma, panjangAlas3Prisma, tinggiAlasPrisma, tinggiPrisma));
        printf("\t\t____________________________________________________________________\n");

        }else if(input==5){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan jari-jari kerucut: ");
        Input_negatif(&jariJariKerucut, " ");
        printf("\t\tMasukkan tinggi kerucut: ");
        Input_negatif(&tinggiKerucut, " ");
        printf("\t\tMasukkan tinggi garis pelukis kerucut: ");
        Input_negatif(&garisPelukisKerucut, " ");
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume kerucut : %.2f", volumeKerucut(jariJariKerucut, tinggiKerucut));
        printf("\n\t\tLuas permukaan kerucut : %.2f\n", lpKerucut(jariJariKerucut, garisPelukisKerucut));
        printf("\t\t____________________________________________________________________\n");

        }
        printf("\t\t\t\t Apakah kamu ingin menghitung lagi?\n");
	Input_negatif(&read,"\t\t\t\t (2 = tidak / 1 = iya):  ");
	system("cls");
        
    }while(read == 1);
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                             | |\n");
	printf("\t\t| |                                                             | |\n");
	printf("\t\t| |    Terima Kasih Telah Menggunakan Program Ini yaaaaaa!!!    | |\n");
        printf("\t\t| |                                                             | |\n");
	printf("\t\t| |                                                             | |\n");
        printf("\t\t| |        \\||||||||||||||||||||   ||||||||||||||||||\\          | |\n");
        printf("\t\t| |         \\|||||||||||||||||||   |||||||||||||||||||\\         | |\n");
        printf("\t\t| |          \\||||||||||||||||||   ||||||||||||||||||||\\        | |\n");
        printf("\t\t| |                   ||||||||||                                | |\n");
        printf("\t\t| |                   ||||||||||   ||||||||||||||||||||/        | |\n");
        printf("\t\t| |                   ||||||||||   |||||||||||||||||||/         | |\n");
        printf("\t\t| |                   ||||||||||   ||||||||||||||||||/          | |\n");
        printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
        printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
        printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
        printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
        printf("\t\t| |                    \\||||||||   |||||||/                     | |\n");
        printf("\t\t| |                     \\|||||||   ||||||/                      | |\n");
        printf("\t\t| |                      \\||||||   |||||/                       | |\n");
        printf("\t\t| |                       \\|||||   ||||/                        | |\n");
        printf("\t\t| |                        \\||||   |||/                         | |\n");
	printf("\t\t| |_____________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
return 0;
}
