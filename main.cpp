#include <iostream>
#include <fstream> 
#include <string>
#include <chrono>
#include <thread>
#include <cmath>
int P1;
int riftdamage = 45;
int temp1 = 30;
int hb = 12;
int potions = 0 + P1;
int bh = 120;
int bha = 16;
int ph = 60;
int attack = 6;
int attackBoost = 6;
int uV = 0;
int heal = 5;
int score = 0;
int coins = 0;
int xp = 0;
int lvl = 1;
int xptolevelup = 100;
int lvlxp = 100;
int userPet;
int main() {
    if (xp > xptolevelup) {
        xp = xp - xptolevelup;
        lvl = lvl + 1;
        xptolevelup = xptolevelup + 100;
    }
    std::string user_potion_pick;
    if (user_potion_pick == "1") {
        hb = hb - 12;
    }
    std::cout << "\nPlayers Health: " << ph;
    std::cout << "\nBosses Health: " << bh;
    xp = score / 2;
    std::cout << "\nScore: " << score;
    std::cout << "\nCoins: " << coins;
    std::cout << "\nXP: " << xp;
    bha = 16;
    std::this_thread::sleep_for(std::chrono::milliseconds(800));
    std::cout << "\n\n[Attack] - Attacks the opponent\n"; //Press A or a to attack
    std::cout << "\n[Heal] - Regains some health\n"; //Press H or h to heal
    std::cout << "\n[Defend] - Blocks attack\n";
    std::cout << "\n[Potions] - Use a wide variety of special items to enhance your attack or health!\n"; //Press P or p to use potions
    std::cout << "\n[Pets] - Self-explanatory...\n"; //Press E or e to use pets
    std::string user_action;
    potions = 0; //Reset potion effects to zero
    if (ph < 0.01) {
        std::cout << "\n\nYour opponent beat you... :(";
        return 0;
    }
    std::cin >> user_action;
    if (user_action == "a") {
        std::cout << "\nYou attack the boss.\n";
        if (userPet == 1) {
            std::cout << "\nThe rock pet did extra damage!";
            bh = bh - 12;
            score = score + 21;
        }
        if (userPet == 2) {
            std::cout << "\nThe fairy pet healed you!";
            ph = ph + 12;
            score = score + 21;
        }
        if (userPet == 3) {
            std::cout << "\nThe faithful doggo attacked the boss, and weakened his attack by some.";
            bh = bh - 12;
            bha = bha - 6;
            score = score + 21;
        }
        bh = bh - attack - potions;
        coins = coins + 3;
        score = score + 14;
    }
    if (user_action == "d") {
        std::cout << "You defended yourself from the basses attacks!";
        if (userPet == 1) {
            std::cout << "\nThe rock pet did extra damage!";
            bh = bh - 12;
            score = score + 21;
        }
        if (userPet == 2) {
            std::cout << "\nThe fairy pet healed you!";
            ph = ph + 12;
            score = score + 21;
        }
        if (userPet == 3) {
            std::cout << "\nThe faithful doggo attacked the boss, and weakened his attack by some.";
            bh = bh - 12;
            bha = bha - 6;
            score = score + 21;
        }
        bha = 0;
    }
    if (user_action == "h") {
        std::cout << "\nYou regain some health.\n";
        if (userPet == 1) {
            std::cout << "\nThe rock pet did extra damage!";
            bh = bh - 12;
            score = score + 21;
        }
        if (userPet == 2) {
            std::cout << "\nThe fairy pet healed you!";
            ph = ph + 12;
            score = score + 21;
        }
        if (userPet == 3) {
            std::cout << "\nThe faithful doggo attacked the boss, and weakened his attack by some.";
            bh = bh - 12;
            bha = bha - 6;
            score = score + 21;
        }
        ph = ph + heal;
    }
    if (user_action == "e") {
        std::cout << "\nHere are the pets currently avalible";
        std::cout << "\n[Rock Pet]";
        std::cout << "\n[Fairy Pet]";
        std::cout << "\n[Faithful Doggo]";
        std::cout << "\n[middle finger]\n";
        std::string user_pets;
        std::cin >> user_pets;
        if (user_pets == "1") {
            std::cout << "\nThe rock pet joins your team";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "\nThe rock pet will do extra damage for every attack you do.";
            userPet = 1;
        }
        if (user_pets == "2") {
            std::cout << "\nThe fairy pet joins your team";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "\nThe fairy pet will heal you after each turn";
            userPet = 2;
        }
        if (user_pets == "3") {
            std::cout << "The faithful doggo joins your team";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "\nThe faithful doggo will defend you, and attack the boss each turn";
            userPet = 3;
        }
        if (user_pets == "4") {
            std::cout << "\nYou have collected the ancient middle finger, legend says that this will instant kill a boss... for a price of course...";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "\nThe middle finger will instant kill a boss, but you will take a lot of damage in return, use wisely.";
            userPet = 4;
        }
    }
    if (user_action == "p") {
        std::cout << "\n\nHere are the current potions avalible!";
        std::cout << "\nUse the number keys (1-4) to select the potion you want\n";
        std::cout << "\n[Health Boost]";
        std::cout << "\n[Attack Amplifier]";
        std::cout << "\n[Lethality Syrum]";
        std::cout << "\n[Permanent Attack Boost]\n";
        std::cin >> user_potion_pick;
        if (user_potion_pick == "1") {
            std::cout << "\nYou use the health boost\n";
            ph = ph + hb;
            coins = coins - 1;
            hb = 0;
        }
        if (hb == 0) {
            std::cout << "You can't use the health boost, as it's already been used once...";
        }

        if (user_potion_pick == "2") {
            attack = attack + attackBoost;
        }
        if (user_potion_pick == "3") {
            std::cout << "\nYou splash the lethality syrum on the boss, he takes 30 damage.\n";
            bh = bh - temp1;
            temp1 = temp1 - 30;
        }
        if (user_potion_pick == "4") {
            std::string userVariable;
            std::cin >> userVariable;
            if (userVariable == "1") {
                uV = uV + 1;
            }
            if (userVariable == "2") {
                uV = uV + 2;
            }
            if (userVariable == "3") {
                uV = uV + 3;
            }
            attack = attack * uV;
            std::cout << "Your attack now does: x" << uV << " Value";
            std::cout << "\nThis equals out to be: " << attack * uV << " damage";
        }
        main();
    }
    int bossAction = (rand() % 4) + 1;
    if (bossAction == 0) {
        ph = ph + 50;
        std::cout << "\nThe boss opened a rift...";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "\nYou peek inside...";
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
        std::cout << "\nIt doesn't look good...";
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
        std::cout << "You use an extra health potion to preapre for what the rift will bring...";
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
        ph = ph - riftdamage;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "The rift had some demons on the other side.";
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout << "The demons leap at you and attack!";
        ph = ph - 30;
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    }
    if (bossAction == 1) {
        std::cout << "\nYour opponent has attacked.";
        ph = ph - bha;
        if (bh < 0.01) {
            std::cout << "\n\nHey! You've beaten me!";
            return 0;
        }
    }
    if (bossAction == 2) {
        std::cout << "\nYour opponent is healing.";
        bh = bh + heal;
    }
    if (bossAction == 3) {
        std::cout << "\nYour opponent has attacked.";
        ph = ph - bha;
        if (bh < 0.01) {
            std::cout << "\n\nHey! You've beaten me!";
            return 0;
        }
    }
    if (bossAction == 3) {
        ph = ph + 50;
        std::cout << "\nThe boss opened a rift...";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "\nYou peek inside...";
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
        std::cout << "\nIt doesn't look good...";
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
        std::cout << "You use an extra health potion to preapre for what the rift will bring...";
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
        ph = ph - riftdamage;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "The rift had some demons on the other side.";
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout << "The demons leap at you and attack!";
        ph = ph - 30;
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    }
    if (bh < 0.001) {
        std::cout << "\n\nHey! You've beaten me!";
        std::cout << "\nWritting score to file...";
        std::ofstream MyFile("Level One Score.txt");
        MyFile << "Player Health: " << ph;
        MyFile << "\nBoss Health: " << bh;
        MyFile << "\n\nPlayer XP: " << xp;
        MyFile << "\nXP Until next level: " << xp - lvlxp;
        MyFile.close();
        std::cout << "\nYou move on to the next boss. [y/n]";
        std::string hh;
        std::cin >> hh;
        if (hh == "y") {
            bh = 180;
            bha = 18;
            std::cout << "Moving on to the next level...";
            main();
        }
    }
    if (bh > 0) {
        main();
    }
    if (ph < 0.001) {
        std::cout << "\n\nThe boss beat you :(";
        std::cout << "\nWritting score to file...";
        std::ofstream MyFile("score.txt");
        MyFile << "Player Health: " << ph;
        MyFile << "\nBoss Health: " << bh;
        MyFile << "\nPlayer XP: " << xp;
        MyFile << "\nPlayer Level: " << lvl;
        MyFile.close();
        std::cout << "Do you wish to play agin?";
        std::string playAgain;
        std::cin >> playAgain;
        if (playAgain == "y") {
            ph = 0;
            ph = 50;
            bh = 0;
            bh = 120;
            score = 0;
            xp = 0;
            coins = 0;
            main();
        }
        if (playAgain == "n") {
            return 0;
        }
    }
}