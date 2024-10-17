import 'OOP_in_dart.dart';
main(List<String> args){
 var mirshod = Inha_Student();
 mirshod.studyHard();
 mirshod.enterence_Year = 2023;
 mirshod.have_Id_card = true;
 mirshod.high_band_scorer = true;
 mirshod.stu_Name = "Mirshod";
 mirshod.id_number ="U2310088";
 mirshod.stuId = 2310088;
 mirshod.doYourHomework();
 print(mirshod.stuId);
}


class Inha_Student extends  Student{
  bool have_Id_card = true;
  @override
  // TODO: implement stuId
  int get stuId => 2310088;
  String id_number = '';
  int enterence_Year = 0;
  void studyHard(){
    print("I have got A+ from every subject!");
  }
  void show_Student_Info(){
    print(" O`quvchi ID raqami : ${this.stuId},\n   O`quvchining ismi : ${this.stu_Name},\n    A'lochimi : ${this.high_band_scorer ? "Ha" : "Yo`q"}");
  }
  @override
  void doYourHomework() {
   print("Enterence year of student : ${this.enterence_Year},\n O`quvchi ID raqami : ${this.stuId},  O`quvchining ismi : ${this.stu_Name},   A'lochimi : ${this.high_band_scorer ? "Ha" : "Yo`q"}");
   
  }
}

class TATU_Students extends Student{
  void getCourses(){
    print("I am taking part in programming courses!");
  }
}