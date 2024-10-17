void main(List<String> args) {
  var tv = Televizor();
  birlashtir(tv);
  var ovoz = OvozChiqargich();
  birlashtir(ovoz);

  List<Pult> pult = [];
  pult.add(ovoz);
  pult.add(tv);
  print(pult);
}
 void birlashtir(Pult t){
    t.ovozKopaytir();
    t.ovozKopaytir();
 }

class Pult{
  void ovozKopaytir(){
    print("Pult sinfi Ovoz ko'paytirildi...");
  }
   void ovozPasaytir(){
    print("Pult sinfi Ovoz ko'paytirildi...");
  }
}

class OvozChiqargich implements Pult{
  void ovozDarajasiniKorsat(){
    print("OvozChiqargich sinfi Ovoz balandligini korsatayapti...");
  }
   void ovozKopaytir(){
    print("Ovorchiqargich sinfi Ovoz ko'paytirildi...");
  }
   void ovozPasaytir(){
    print("Ovorchiqargich sinfi Ovoz ko'paytirildi...");
  }
}
class Televizor implements Pult,OvozChiqargich{
  @override
   void ovozDarajasiniKorsat(){
    //print("OvozChiqargich sinfi Ovoz balandligini korsatayapti...");
  }
  @override
  void ovozKopaytir() {
    print("Televizor sinfi Ovoz ko'paytirildi...");
  }
  void ovozPasaytir() {
    print("Televizor sinfi Ovoz ko'paytirildi...");
  }
}