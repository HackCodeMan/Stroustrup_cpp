#include <random>
#include <ctime>
#include <iostream>
#include <windows.h>

int randomize(int start, int finish)
{
    srand(time(0));
    int result = start + rand() % finish;
}
char bot_move()
{
    char result;
    int bot_choose = randomize(1, 3);
    switch (bot_choose)
    {
        case 1:
            result = 'К';
            break;
        case 2: 
            result = 'Н';
            break;
        case 3:
            result = 'Б';
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
    case 'К':
        result = "Камень";
        break;
    case 'Н':
        result = "Ножницы";
        break;
    case 'Б':
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
        if(bot_item == 'К')
        {
            switch (user_item)
            {
                case 'Н':
                    result = 'b';
                    break;
                case 'Б':
                    result = 'u';
                    break;
            }
        }
        else if (bot_item == 'Н')
        {
            switch (user_item)
            {
                case 'К':
                    result = 'b';
                    break;
                case 'Б':
                    result = 'u';
                    break;
            }
        }
        else if (bot_item == 'Б')
        {
            switch (user_item)
            {
                case 'К':
                    result = 'b';
                    break;
                case 'Н':
                    result = 'u';
                    break;
                default:
                    std::cerr << "Error: Ошибка в  switch в win_who_round" << std::endl;
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
        cout << "Выбери:\nK (Камень)\nН (Ножницы)\nБ (Бумага)\nНапиши заглавную букву выбора: ";
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
