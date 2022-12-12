import javax.swing.FocusManager;

public class App{

    public static void main(String[] args){
        Forecast forecast=new Forecast.Fake();
        Weather weather = new Weather(forecast,120);
        Weather weatherForUSA = weather.makeForUSA(); 
        //assert "80".equals(weatherForUSA.toString());

        Exchange exchange= new Exchange.Fake();
        Cash dollar = new Cash(exchange,500);
        Cash euro = dollar.exchangedCash("EUR");
        assert "617.25".equals(euro.toString());
        //System.out.println("Hello, World!");
    }
}