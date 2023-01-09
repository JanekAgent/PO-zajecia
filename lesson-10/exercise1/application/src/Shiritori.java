import java.lang.reflect.Array;
import java.util.ArrayList;

// package oop-put-course.lesson-10.exercise1.application.src;
interface Game{
    public ArrayList<String> printWords();
    public ArrayList<String> play(String Word);
    public String restart();
}

public class Shiritori implements Game {
    public boolean game_over;
    ArrayList<String> words;
    // public ArrayList<String> words;
    public Shiritori(){
        game_over=false;
        words = new ArrayList<String>();
    }
    
    
    @Override 
    public ArrayList<String> play(String word){
        if (words.isEmpty()){
            words.add(word);
            return printWords();
        }
        if (words.contains(word)){
            game_over=true;
            System.out.print(word);
            System.out.print(" has already been used");
            return printWords();

        }
        System.out.println(word.charAt(0));
        if (words.get(words.size()-1).charAt(words.get(words.size()-1).length()-1)!=word.charAt(0)){
            game_over=true;
            System.out.print(word);
            System.out.print(" don't start with ");
            System.out.println(words.get(words.size()-1).charAt(words.get(words.size()-1).length()-1));
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
