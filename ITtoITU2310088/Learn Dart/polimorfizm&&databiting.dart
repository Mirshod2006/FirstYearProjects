main(List<String> args){
 Cow rosy = new Cow("Ola", "202207", "Oddiy", "Rosy");
}

void giveSomeInfo(FarmAnimals farm_an){
  farm_an.show_Habitat();
}
class FarmAnimals{
  String id_num = '';
  String name = '';
  String kind =""; 
  FarmAnimals(this.id_num,this.kind,this.name){
 print("Mani Constructorim boshqa inherited classlarga xalaqit berayapti!");
  }
 void show_Habitat(){
  print("Every farm animal live in this farm!");
 }
}

class Cow extends FarmAnimals{
  String rang = "";
  Cow(this.rang,id_num,kind,name) :super(id_num,kind,name){
    print("Sigirning ID raqami : $id_num;\nSigirning ranggi : $rang;\nSigirning turi : $kind;\nSigirning laqabi : $name;");
  }
  Cow.namedconstructor(id_num,kind,name) :super(id_num,kind,name){

  }
   @override
  void show_Habitat() {
    // TODO: implement show_Habitat
    print("Cows are bred  in my farm for a decade!");
  }
}
// class Sheep extends FarmAnimals{

// }

// class Bull extends FarmAnimals{

// }
// class Duck extends FarmAnimals{
  
// }
// class Goose extends FarmAnimals{

// }
// class Hourse extends FarmAnimals{
  
// }