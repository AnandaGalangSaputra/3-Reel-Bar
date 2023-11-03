#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <iomanip>

#define BG_YELLOW "\033[43m"  // Warna latar belakang kuning
#define RESET "\033[0m"      // Reset pengaturan warna

using namespace std;

int main()
{
    srand(time(0));
    char mainLagi;
    int saldo = 50000;
    int taruhan;


    system("cls");

    std::cout << "   _____   _           _       _  __         _                                       _        _____ " << std::endl;
    std::cout << "  / ____| | |         | |     | |/ /        | |                                     | |      | ____|" << std::endl;
    std::cout << " | (___   | |   ___   | |_    | ' /    ___  | |   ___    _ __ ___    _ __     ___   | | __   | |__  " << std::endl;
    std::cout << "  \\___ \\  | |  / _ \\  | __|   |  <    / _ \\ | |  / _ \\  | '_ ` _ \\  | '_ \\   / _ \\  | |/ /   |___ \\ " << std::endl;
    std::cout << "  ____) | | | | (_) | | |_    | . \\  |  __/ | | | (_) | | | | | | | | |_) | | (_) | |   <     ___) |" << std::endl;
    std::cout << " |_____/  |_|  \\___/   \\__|   |_ |\\_\\  \\___| |_|  \\___/  |_| |_| |_| | .__/   \\___/  |_|\\_\\   |____/ " << std::endl;
    std::cout << "                                                                     | |                             " << std::endl;
    std::cout << "                                                                     |_|                             " << std::endl;

    system("pause");

    do
    {
        system("cls");

        cout << "Saldo Anda: "<< BG_YELLOW << "$" << saldo << RESET << endl;
        cout << "Masukkan taruhan Anda: $";
        cin >> taruhan;

        if (taruhan > saldo)
        {
            cout << "Taruhan Anda Melebihi saldo" << endl;
            system("pause");
            continue;
        }

        int angka1 = rand() % 3 + 1;
        int angka2 = rand() % 3 + 1;
        int angka3 = rand() % 3 + 1;

        // int angka1 = 2;
        // int angka2 = 2;
        // int angka3 = 2;

        system("cls");
        
        cout << "[ mesin di putar ... ] " << endl;
        Sleep(2000);

        system("cls");

        cout << "\n Mesin Slot \n" << endl;

        cout << "| " << angka3 << " | " << angka1 << " | " << angka2 << " |" << endl;
        cout << "| " << "-" << " | " << "-" << " | " << "-" << " |" << endl;

        cout << BG_YELLOW << "| " << angka1 << " | " << angka2 << " | " << angka3 << " |" << RESET << endl;

        cout << "| " << "-" << " | " << "-" << " | " << "-" << " |" << endl;
        cout << "| " << angka2 << " | " << angka1 << " | " << angka3 << " |" << endl;


        if (angka1 == angka2 && angka2 == angka3)
        {
            cout << "Selamat! Anda Memenangkan $" << (taruhan * 2) << endl;
            saldo += (taruhan * 2);
            Sleep(2000);
        }
        else
        {
            cout << "Maaf, Anda kalah." << endl;
            saldo -= taruhan;
            Sleep(2000);
        }

        if (saldo <= 0)
        {
            cout << "Saldo Anda habis. Depo Lagi Lah ... ." << endl;
            // break;
        }

        // cout << "Saldo Anda : $" << saldo << endl;
        // system("pause");

        cout << "Mau Main Lagi? (y/n): ";
        cin >> mainLagi;

    } while (mainLagi == 'y' || mainLagi == 'Y');

    system("cls");
    cout << "Terima kasih telah \n bermain di Slot Kelompok 5!" << endl;

    return 0;
}
