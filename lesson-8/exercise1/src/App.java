import javax.swing.FocusManager;

public class App{

    public static void main(String[] args){
        Forecast forecast=new Forecast.Fake();
        Weather weather = new Weather(forecast,100);
        Weather weatherForUSA = weather.makeForUSA(); 
        System.out.println(weatherForUSA.toString());
        assert "212.0".equals(weatherForUSA.toString());

    }
}