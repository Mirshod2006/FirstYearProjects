main(List<String> args){
List<String> Uzbekistan = ["Andijan","Fergana","Namangan","Toshkent","Sirdarya","Jizzah","Samarqand","Navai","Kashkadarya",
          "Surkhandarya","Bukhara","Khorazem","Karakalpagistan"];
List<String> USA = ["A"];  
List<String> Australia = ["B"];
List<String> Germany = ["C"];     
Map<String,List> states = {
  "Uzbekistan" : Uzbekistan,
  "USA" : USA,
  "Australia" : Australia,
  "Germany" : Germany
};
states.forEach((key, value) {
  print("Kalitso'z : $key, Qiymat : $value");
});
states.update("Uzbekistan", (value) => []);
for(String s in states.keys){
  print("States of ${s}");
  for(List<dynamic> c in states.values){
     for(String a in c){
      print("Cities : $a");
     }
  }
}
}
