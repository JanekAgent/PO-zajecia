
public class App {
    public static void main(String[] args) throws Exception {
        Sequence seq = new LowerCased(new Characters("Janek Spacja"));
        System.out.println(seq.printedSeq());

    }
}
