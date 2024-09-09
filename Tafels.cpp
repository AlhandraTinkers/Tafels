// Tafels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

void Sommen(int somtotaal) {
   
    
    int somteller = 1;
 
    int antwoord = NULL;
    int guess = 999;

    int tafel = 10;
    int t_teller = 10;

    time_t start_time;
    start_time = time(NULL);
    std::cout << "\n \n";


    while (somteller <= somtotaal)
    {
        srand((unsigned)time(NULL));
        int r_teller = rand() % (t_teller + 1);
        int r_tafel = rand() % (tafel + 1);
        int antwoord = r_teller * r_tafel;
        std::cout << r_teller;
        std::cout << " x ";
        std::cout << r_tafel;
        std::cout << " = ";

        std::cin >> guess;




        if (guess == antwoord)
        {

        }
        else if (guess != 999)
        {
            std::cout << "probeer nog eens! \n";
            std::cout << r_teller;
            std::cout << " x ";
            std::cout << r_tafel;
            std::cout << " = ";

            std::cin >> guess;

        }

        somteller++;
    }
    if (somteller >= somtotaal)
    {
        time_t end_time;
        end_time = time(NULL);

        time_t total_time = end_time - start_time;
        std::cout << "\ngoed gedaan! \n";
        std::cout << "je hebt de sommen in ";
        std::cout << total_time;
        std::cout << " seconden opgelost! \n \n";


    }

}

int main()
{
    char input = 'n';
    int somtotaal = 20;


    std::cout << "     _______  _______  _______  _______  ___      _______\n";
    std::cout << "    |       ||   _   ||       ||       ||   |    |       |\n";
    std::cout << "    |_     _||  | |  ||    ___||    ___||   |    |  _____|\n";
    std::cout << "      |   |  |  |_|  ||   |___ |   |___ |   |    | |_____ \n";
    std::cout << "      |   |  |       ||    ___||   __ _||   |___ |_____  |\n";
    std::cout << "      |   |  |   _   ||   |    |   |___ |       | _____| |\n";
    std::cout << "      |___|  |__| |__||___|    |_______||_______||_______|\n\n";


    std::cout << "Kan jij de tafelsommen maken? \nAls je er " << somtotaal; 
    std::cout << " goed hebt stoppen we de tijd. Hoe snel kan jij?\n";
    std::cout << "Druk op de j om te starten.";

    std::cin >> input;

    while (input == 'j')
    {

        Sommen(somtotaal); 
        
        std::cout << "Druk op de j om nog een keer te spelen. Elke andere invoer sluit het spel af: \n";

        std::cin >> input;
    }


    std::cout << "Tot ziens!";

}




 



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
