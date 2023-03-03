import java.util.Scanner;
import java.util.Random;

class Main {
  static void clearScreen() {  
    System.out.print("\033[H\033[2J");  
    System.out.flush();  
}  
  static void action() {
    
  }
  public static void main(String[] args) {
    int i = 1;
    int ph = 20;
    int bh = 20;
    while (i == 1) {
    if (ph < 1) {
      clearScreen();
      System.out.println("You Died.");
      return; 
    }
    if (bh < 1) {
      clearScreen();
      System.out.println("The boss is dead.");
      return;
    }
    if (ph < 1) {
      clearScreen();
      System.out.println("You died.");
      return;
    }
    System.out.println("Player Health: " + ph);
    System.out.println("Boss Health: " + bh);
    System.out.println("\n[Attack]");
    System.out.println("[Heal]");
    Scanner user = new Scanner(System.in);
    String userInput = user.nextLine();
    if (userInput == "attack"); {
      bh = bh - 2;
    System.out.println("You attacked the boss.");
    }
    if (userInput == "heal") {
      ph = ph + 2;
    System.out.println("You healed yourself.");
    }
    Random rand = new Random();
    int bossValue = rand.nextInt() % 1;
    if (bossValue == 0) {
      ph = ph - 2;
    }
    if (bossValue == 1) {
      bh = bh + 2;
    }
    clearScreen();
    }
  }
}