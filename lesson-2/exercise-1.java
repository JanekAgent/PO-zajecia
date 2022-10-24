interface Name {
 String firstName();
}
public class EnglishName implements Name{
 private final CharSequence text;
 public EnglishName(final CharSequence txt) {
 this.text = txt;
 }
 @Override
 public String firstName() {
 return this.text.toString().split("", 2)[0];
 }
}