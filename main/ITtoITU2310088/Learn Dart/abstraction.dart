void main(List<String> args) {
   var ti = Tortburchak();
   ti.boy = 12;
   ti.en = 8;
   print(ti.hisoblayuz());
   ti.perimetri();
   ti.xabarJonat();
}

abstract class Shape{
  double boy =0;
  double en = 0;

  void hisoblayuz();//{
  //   print("Hisoblada jami yuza: ${en*boy}");
  // }
   void perimetri();//{
  //   print("Hisobla jami perimetr : ${2*(en+boy)}");
  // }
  void xabarJonat(){
    print("Xabar Keldi...");
  }
}

class Tortburchak extends Shape{
  @override
  void xabarJonat() {
    super.xabarJonat();
  }
  double hisoblayuz() =>  en*boy;
  
  @override
  void perimetri() {
    print("Hisobla jami perimetr : ${2*(en+boy)}");
  }
}

class TogriTortburchak extends Shape{
 
  void hisoblayuz() {
    print("Hisoblada jami yuza: ${en*boy}");
  }
  @override
  double perimetri() {
    return 2*(en+boy);
  }
}