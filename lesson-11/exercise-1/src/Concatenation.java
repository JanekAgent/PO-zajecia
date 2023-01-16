public class Concatenation implements Sequence {
    private Sequence chars1;
    private Sequence chars2;

    public Concatenation(Sequence charso1,Sequence charso2){
        chars1=charso1;
        chars2=charso2;

    };
    @Override 
    public String printedSeq(){
        
        String result = chars1.printedSeq().concat(chars2.printedSeq());
        return result;
    }
    


    
}

