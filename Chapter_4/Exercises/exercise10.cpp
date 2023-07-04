#include <random>
#include <ctime>
#include <iostream>
#include <windows.h>

int randomize(int start, int finish)
{
    srand(time(0));
    int result = start + rand() % finish;
    return result;
}
char bot_move()
{
    using namespace std;
    char result;
    int bot_choose = randomize(1, 3);
    switch (bot_choose)
    {
        case 1:
            result = 'K' ;
            break;
        case 2: 
            result = 'N' ;
            break;
        case 3:
            result = 'B';
            break;
        default:
            std::cerr << "Error in bot_move()\n";
    }
    return result;
}
std::string knb_to_str(char item)
{
    std::string result;
    switch (item)
    {
    case 'K':
        result = "Камень";
        break;
    case 'N':
        result = "Ножницы";
        break;
    case 'B':
        result = "Бумага";
        break;
    default:
        std::cerr << "error: knb_to_str\n";
        break;
    }
    return result;
}
char who_win_round(char bot_item, char user_item)
{
    char result;
    if (bot_item == user_item)
    {
        result = 'n';
    }
    else
    {
        if(bot_item == 'K')
        {
            switch (user_item)
            {
                case 'N':
                    result = 'b';
                    break;
                case 'B':
                    result = 'u';
                    break;
                default:
                    std::cerr << "Error: Ошибка в  switch в win_who_round" << std::endl;
                    break;
            }
        }
        else if (bot_item == 'N')
        {
            switch (user_item)
            {
                case 'K':
                    result = 'b';
                    break;
                case 'B':
                    result = 'u';
                    break;
                default:
                    std::cerr << "Error: Ошибка в  switch в win_who_round" << std::endl;
                    break;
            }
        }
        else if (bot_item == 'B')
        {
            switch (user_item)
            {
                case 'K':
                    result = 'b';
                    break;
                case 'N':
                    result = 'u';
                    break;
                default:
                    std::cerr << "Error: Ошибка в  switch в win_who_round" << std::endl;
                    break;
            }
        }   
    }
    return result; 

}
int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    int user_score = 0;
    int bot_score = 0;
    const int round = 3;

    while ((user_score < round) & (bot_score < round))
    {
        cout << "Выбери:\nK (Камень)\nN (Ножницы)\nB (Бумага)\nНапиши ЗАГЛАВНУЮ АНГЛИЙСКУЮ букву выбора: ";
        char user_item;
        cin >> user_item;
        char bot_item = bot_move();
        char who_win = who_win_round(bot_item, user_item);
        switch (who_win)
        {
        case 'b':
            cout << "Я побил тебя предметом: " << knb_to_str(bot_item) << " и заработал очко" << endl;
            bot_score++;
            break;
        case 'u':
            cout << "Ты побил меня предметом: " << knb_to_str(user_item) << " и заработал очко" << endl;
            user_score++;
            break;
        case 'n':
            cout << "У меня такой же предмет: " << knb_to_str(bot_item) << endl;
            break;
        default:
            cerr << "Error: Не смог определить кто выиграл в раунде." << endl;
            break;
        }
        cout << "Очки бота: " << bot_score << endl
        << "Очки игрока: " << user_score << endl;
   
    }
    return 0;
}
