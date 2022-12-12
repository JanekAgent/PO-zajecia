public class Weather{
    private final float temperature;
    private final Forecast forecast;
    public Weather(Forecast forec,float temp){
        this.temperature=temp;
        this.forecast=forec;
    }
    public Weather makeForUSA() {
        return new Weather(this.forecast,this.forecast.fahrenheit(this.temperature));
    }
    @Override
    public String toString() {
        return Float.toString(temperature);
    }
}