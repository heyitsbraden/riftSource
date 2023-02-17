#include <iostream>
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
int ph = 30;
int attack = 8;
int heal = 5;
int main() {
std::string user_potion_pick;
if (user_potion_pick == "1") {
  hb = hb - 12; }
std::cout << "\nPlayers Health: " << ph;
std::cout << "\nBosses Health: " << bh;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
std::cout << "\n\n[\e[1mA\e[0mttack] - Attacks the opponent\n"; //Press A or a to attack
std::cout << "[\e[1mH\e[0meal] - Regains some health\n"; //Press H or h to heal
std::cout << "[\e[1mP\e[0motions] - Use a wide variety of special items to enhance your attack or health!\n"; //Press P or p to use potions
std::cout << "[P\e[1me\e[0mts] - Self-explanatory...\n"; //Press E or e to use pets
std::string user_action;
potions = 0; //Reset potion effects to zero
if (ph < 0.01) {
std::cout << "\n\nYour opponent beat you... :(";
  return 0; }
std::cin >> user_action;
if (user_action == "attack") {
  std::cout << "\nYou attack the boss.\n";
  bh = bh - attack - potions; }
if (user_action == "heal") {
  std::cout << "\nYou regain some health.\n";
  ph = ph + heal; }
if (user_action == "potions") {
  std::cout << "\n\nHere are the current potions avalible!";
  std::cout << "\n[Health Boost] - Boosts your health value (1)";
  std::cout << "\n[Attack Amplifier] - Amplifies your attack (2)";
  std::cout << "\n[Lethality Syrum] - Makes your attack lethal for the boss (3)\n";
  std::cout << "\n[Permanent Attack Boost] - Permanently adds +8 to your attacks (for this game only)\n";
  std::cin >> user_potion_pick;
  if (user_potion_pick == "1") {
    std::cout << "\nYou use the health boost\n";
    ph = ph + hb;
    }
    if (hb = 0) {
    std::cout << "You can't use the health boost, as it's already been used once..."; 
    }
    
  if (user_potion_pick == "2") {
    P1 = 4;
  }
  if (user_potion_pick == "3") {
    std::cout << "\nYou splash the lethality syrum on the boss, he takes 30 damage.\n";
    bh = bh - temp1;
    temp1 = temp1 - 30;
    }
  if (user_potion_pick == "4") {
    attack = attack + 8;
    std::cout << "Your attacks now do +8 standard value!";
  }
  main();
  }
int bossAction = (rand() % 3) + 1;
if (bossAction == 1) {
  std::cout << "\nYour opponent has attacked.";
  ph = ph - bha;
  if (bh < 0.01) {
  std::cout << "\n\nHey! You've beaten me!";
    return 0; } }
if (bossAction == 2) {
  std::cout << "\nYour opponent is healing.";
  bh = bh + heal;
if (bossAction == 3) {
  std::cout << "\nThe boss opened a rift...";
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout << "\nYou peek inside...";
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  std::cout << "\nIt doesn't look good...";
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
  std::cout << "You use an extra health potion to preapre for what the rift will bring...";
  ph = ph + 50;
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
  ph = ph - riftdamage;
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout << "The rift had some demons on the other side.";
  std::this_thread::sleep_for(std::chrono::milliseconds(250));
  std::cout << "The demons leap at you and attack!";
  ph = ph - 30;
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
}
  if (bh < 0.01) {
  std::cout << "\n\nHey! You've beaten me!";
    return 0; } }
  if (bh > 0) {
  main(); } 
  if (ph < 10) {
    std::cout << "\n\nHEALTH BOOST POTION AVALIBLE!\n\n";
    hb = hb + 12;
    }
}