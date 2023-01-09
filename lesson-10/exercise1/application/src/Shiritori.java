import java.lang.reflect.Array;
import java.util.ArrayList;

// package oop-put-course.lesson-10.exercise1.application.src;


public class Shiritori {
    public boolean game_over;
    ArrayList<String> words;
    // public ArrayList<String> words;
    public Shiritori(){
        game_over=false;
        
    }
    public ArrayList<String> play(String word){
        if (word.contains(word)){
            game_over=true;
            System.out.print(word);
            System.out.print(" has already been used");
            return printWords();

        }
        if (words.get(words.size()).charAt(words.get(words.size()).length())==word.charAt(0)){
            game_over=true;
            System.out.print(word);
            System.out.print(" don't start with");
            System.out.println(words.get(words.size()).length());
            return printWords();
            
        }

        words.add(word);
        return printWords();
    }    
    public ArrayList<String> printWords(){
        return words;
    };
    public String restart(){
        words.clear();
        game_over=false;
        return "Game Restarted";
    }
}
