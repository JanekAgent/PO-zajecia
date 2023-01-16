interface Sequence{
    String printedSeq ();
}
public class Characters implements Sequence {
    private String Str;
    public Characters(String stro){this.Str=stro;}
    @Override 
    public String printedSeq(){return Str;}


    
}

