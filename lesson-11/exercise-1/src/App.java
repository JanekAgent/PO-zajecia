
public class App {
    public static void main(String[] args) throws Exception {
        Sequence seq = new Concatenation(new Characters("first text"),new Characters(" second text"));
        System.out.println(seq.printedSeq());

    }
}
