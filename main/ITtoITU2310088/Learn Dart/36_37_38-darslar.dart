// void main(List<String> args) {
// //   Function f2 =(int s1,int s2){
// //    num jami = s1 + s2;
// //   print("The sum of $s1 + $s2 is ${jami}!");
// //   };
// //  f2(13,12);
// //  var f1 =(son){
// //    return son*2;
// //  };
// //  print(f1(10));
// var fun1 = (String name) => "Hello $name!";
// var fun2 = (String sentence) => print(sentence);
// print(fun1("Mirshod"));
// fun2("I know what you know about me!\n  Because, you are me myself,\n    but there is a who knows everything about everything!");
// }




//HIGHER ORDER FUNCTION











//LEXICAL CLOSURE
void main(List<String> args) {
  String name = "Abdulloh";

  Function  showName=(){
  name = "Islom";
  print(name);
  };
  print(name);
  showName();
  print(name);
  Function f =(){
     String salom = "Salom Ber...";
     Function ayt = (){ 
      salom = "Assalomu aleykum!";
      return salom;
     };
     return ayt();
  };
  var ishlat = f();
  print(ishlat);
}