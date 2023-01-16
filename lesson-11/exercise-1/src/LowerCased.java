public class LowerCased implements Sequence{
    private Sequence chars;

    public LowerCased(Sequence charso){
        chars=charso;


    };
    public String printedSeq(){
        String str;
        str=chars.printedSeq();
        
        return str.toLowerCase();
    }
    

}
