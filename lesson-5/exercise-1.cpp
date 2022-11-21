#include <iostream>
using namespace std;
#include <map>
#include <sstream>
#include <iomanip>

class FakeCantor {
 private:
  std::map<std::string, float> rates{{"USD", 1.0366f},
                                     {"GBP", 0.87063f},
                                     {"CHF", 0.9881f},
                                     {"JPY", 145.12f}};
 public:
  FakeCantor() = default;
  float EuroToRate(const std::string &currency) {
    return rates[currency];
  };
};

class Currency {
 public:
  virtual Currency *AddedCurrency(float value, std::string currency) = 0;
  virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
  virtual std::string Abbreviation() = 0;
  virtual std::string Symbol() = 0;
  virtual std::string Balance() = 0;
  virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {
    private:
    float euroValue;
    FakeCantor fk;
    public:
    Euro *AddedCurrency(float value, string currency){
        float v=fk.EuroToRate(currency);
        v=euroValue+value/v;

        Euro obj(v);
        Euro* wsk=&obj;
        return wsk;
    }
    Euro *SubtractedCurrency(float value, string currency){
        float v=fk.EuroToRate(currency);
        v=euroValue-value/v;

        Euro obj(v);
        Euro* wsk=&obj;
        return wsk;
    }
    string Abbreviation(){
        return "EUR";
    }
    string Symbol(){
        return "€";
    }
    string Balance(){
        string value=to_string(euroValue);
        return value;
    }
    float DollarExchangeRate(){
        //float one=1;
        float v=fk.EuroToRate("USD");
        return v;
    }
    Euro(float value=0){
        euroValue=value;
    }
  // TODO: implement class

};

int main() {
  Euro tenEuro(10);
  cout<<tenEuro.Balance();
  cout<<tenEuro.Symbol();
  cout<<tenEuro.Abbreviation();
  //Euro moreEuros;
  Euro moreEuros=*tenEuro.AddedCurrency(100,"USD");
  cout<<moreEuros.Balance();
  cout<<moreEuros.Symbol();
  Euro lessEuros=*tenEuro.SubtractedCurrency(10,"USD");
  cout<<lessEuros.Balance();
  return 0;
}
