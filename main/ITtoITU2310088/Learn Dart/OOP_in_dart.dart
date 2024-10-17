/*main(List<String> args){
//  var mirshod = Student();
//  mirshod.stuId = 2310088;
//  mirshod.high_band_scorer = true;
//  mirshod.stu_Name = "Abbos";
//  mirshod.doYourHomework();

//  Student abbos = Student();
//  abbos.stuId = 2310082;
//  abbos.high_band_scorer = true;
//  abbos.stu_Name = "Mirshod";
//  abbos.doYourHomework();
// the above work which is entering values to class variables became much more easier with help of Constructors
 var abbos = Student(2310088,"Abbos", true);
 var mirshod = Student.numberiShartbolmaganMethod("Mirshod", true);
 var dilshod = Student.scoreShartbolmaganMethod(2310098,"Dilshod");
}

class Student {
  int stuId = 0;
  String stu_Name = '';
  bool high_band_scorer = true;
    Student(this.stuId,this.stu_Name,this.high_band_scorer){
   print("Agar bu so`zlarni o`qiyotgan bo`lsam, demak quruvchi classi ishlayapti!");
   doYourHomework();
   }
//  Student(int idnum,String Name,bool highscorer){
//    this.stuId = idnum;
//    this.stu_Name = Name;
//    this.high_band_scorer = highscorer;
//   print("Agar bu so`zlarni o`qiyotgan bo`lsam, demak quruvchi classi ishlayapti!");
//   doYourHomework();
//    }
Student.scoreShartbolmaganMethod(this.stuId,this.stu_Name){
 print("Agar bu so`zlarni o`qiyotgan bo`lsam, demak quruvchi classi ishlayapti!");
   doYourHomework();  
}
Student.numberiShartbolmaganMethod(this.stu_Name,this.high_band_scorer){
 print("Agar bu so`zlarni o`qiyotgan bo`lsam, demak quruvchi classi ishlayapti!");
   doYourHomework();  
}
Student.nameShartbolmaganMethod(this.stuId,this.high_band_scorer){
 print("Agar bu so`zlarni o`qiyotgan bo`lsam, demak quruvchi classi ishlayapti!");
   doYourHomework();  
}
   void doYourHomework(){
    print("O`quvchi ID raqami : ${this.stuId}, O`quvchining ismi : ${this.stu_Name}, A'lochimi : ${this.high_band_scorer ? "Ha" : "Yo`q"}");
   }
   
}*/
main(List<String> args){
//  var bahodir = Student(23100346,"Bernard",false);
// bahodir.stu_Name = "Bernard II";
//   print( bahodir.showStudentId);
//   print( bahodir.showStudentName);
}

class Student {
  int stuId = 0;
  // underscore is used to convert variables from public to private,but i have a lot questions about protected
  String stu_Name  = "";
  bool high_band_scorer = true;
  //  Student(this.stuId,this.stu_Name,this.high_band_scorer){
  //  print("Agar bu so`zlarni o`qiyotgan bo`lsam, demak quruvchi classi ishlayapti!");
  //  //the more  times i use this constructor, the more i can see above sentence
  //  // and also the job of below function. 
  //  doYourHomework();
  //  // we reviewed different kinds of Constructors in Dart 
  //  // for example in my first Constructor I added all variables to variable enterence field
  //  // but I can enter 2 variables or 1 , or even no variable can be implemented
  //  }
  //  set changeName(String stu_Name){
  //    this.stu_Name = stu_Name;
  //  }
  //  set changeId(int stuId){
  //     if(stuId <= 0){
  //       this.stuId = 1;
  //     }else{
  //       this.stuId = stuId;
  //     }
  //  }
  //  //these both functions are setters, i will use from them when i make my variables private
  //  // the duty of that is insearting value of any variables
  //  get showStudentId{
  //    return "O'quvchi Raqami : $stuId";
  //  }
  //  String get showStudentName => "O'quvchining ismi : $stu_Name";
   // getters have much more similarity like setters because their usage case is nearly the same
   // i will use from getters to show the value of variables 
   void doYourHomework(){
    print("O`quvchi ID raqami : ${this.stuId}, O`quvchining ismi : ${this.stu_Name}, A'lochimi : ${this.high_band_scorer ? "Ha" : "Yo`q"}");
   }
}