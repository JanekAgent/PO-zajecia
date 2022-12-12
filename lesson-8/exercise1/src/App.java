public class App{

    public static void mian(String[] args){
        Exchange exchange= new Exchange.Fake();
        Cash dollar = new Cash(exchange,500);
        Cash euro = dollar.exchangedCash("EUR");
        assert "617.25".equals(euro.toString());
        System.out.println("Hello, World!");
    }
}