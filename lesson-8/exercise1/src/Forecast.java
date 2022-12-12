public interface Forecast {
    float fahrenheit(float temperature);
    final class Fake implements Forecast {
        @Override
        public float fahrenheit(float temperature){
            
            return 32f+1.8f*temperature;
        }
    }
    
}
