
import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
         Shiritori game = new Shiritori();
        Scanner input = new Scanner(System.in);
        while (true){
            if (game.game_over){
                game.restart();
            }
            else{
                game.play(input.nextLine());
            }
        }


    }
}
