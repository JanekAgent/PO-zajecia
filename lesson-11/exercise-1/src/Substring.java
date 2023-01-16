public class Substring implements Sequence {
    private Sequence chars;
    private int id;
    public Substring(Sequence charso,int index){
        chars=charso;
        id=index;

    };
    @Override 
    public String printedSeq(){
        String str;
        str=chars.printedSeq();
        
        return str.substring(id);
    }
    
}
