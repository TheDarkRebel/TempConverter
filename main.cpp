#include <iostream>

int convert_C_to_F(int temp){
    return temp * 9 / 5 + 32;
}

int convert_F_to_C(int temp){
    return (temp - 32) * 5 / 9;
}

int convert_C_to_K(int temp){
    const int T = 273;
    return temp + T;
}

int convert_K_to_C(int temp){
    const int T = 273;
    return temp - T;
}

int convert_F_to_K(int temp){
    const int T = 273;
    return ((temp - 32) * 5 / 9) + 273;
}

int convert_K_to_F(int temp){
    const int T = 273;
    return (temp - 273) * 9 / 5 + 32;
}


int main(){
    int choice;
    bool isRunning = true;
    do{
        std::cout << "\nВыберите действие: \n";
        std::cout << "\n0) Выход\n";
        std::cout << "1) Перевод из цельсия в фаренгейт\n";
        std::cout << "2) Перевод из фаренгейт в цельсия\n";
        std::cout << "3) Перевод из цельсия в кельвины\n";
        std::cout << "4) Перевод из кельвин в цельсия\n";
        std::cout << "5) Перевод из фаренгейт в кельвины\n";
        std::cout << "6) Перевод из кельвин в фаренгейт\n\n";
        
        if(!(std::cin >> choice)){
            std::cerr << "Такого номера нет!" << std::endl;
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            continue;
        }

        int temp;
        switch(choice){
            case 0:
                isRunning = false;
                break;

            case 1:
                std::cout << "Введите температуру по цельсия: \n";
                if(!(std::cin >> temp)){
                    std::cerr << "Неверный ввод!" << std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cout << "Температура по фаренгейту: " << convert_C_to_F(temp) << "* F\n" << std::endl;
                break;

            case 2:
                std::cout << "Введите температуру по фаренгейту: \n";
                if(!(std::cin >> temp)){
                    std::cerr << "Неверный ввод!" << std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cout << "Температура по цельсия: " << convert_F_to_C(temp) << "* C\n" << std::endl;
                break;

            case 3:
                std::cout << "Введите температуру по цельсия: \n";
                if(!(std::cin >> temp)){
                    std::cerr << "Неверный ввод!" << std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cout << "Температура в кельвинах: " << convert_C_to_K(temp) << " K\n" << std::endl;
                break;

            case 4:
                std::cout << "Введите температуру в кельвинах: \n";
                if(!(std::cin >> temp)){
                    std::cerr << "Неверный ввод!" << std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cout << "Температура по цельсия: " << convert_K_to_C(temp) << "* C\n" << std::endl;
                break;

            case 5:
                std::cout << "Введите температуру по фаренгейту: \n";
                if(!(std::cin >> temp)){
                    std::cerr << "Неверный ввод!" << std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cout << "Температура в кельвинах: " << convert_F_to_K(temp) << " K\n" << std::endl;
                break;

            case 6:
                std::cout << "Введите температуру в кельвинах: \n";
                if(!(std::cin >> temp)){
                    std::cerr << "Неверный ввод!" << std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cout << "Температура по фаренгейту: " << convert_K_to_F(temp) << "* F\n" << std::endl;
                break;

            default:
                std::cout << "Такого действия нет!\n";
        }


    } while(isRunning);
    
    return 0;
}