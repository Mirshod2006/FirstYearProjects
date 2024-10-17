main(List<String> args){
Set<String> ismlar = Set();
ismlar.add("John");
ismlar.add("Martin");
ismlar.add("David");
ismlar.add("David");
ismlar.add("David");
ismlar.add("Watson");
ismlar.add("Mortimer");
ismlar.add("James");
ismlar.add("Albert");
ismlar.add("Artur");
ismlar.add("Artur");
ismlar.add("Artur");
Set<int> ages = Set.from([21,23,45,23,56,78,56,25,45,67]);
// bu holda Set.from()dan elementlarni olib ages Setiga joylaydi
print("Ismlar: ${ismlar} \nYoshlar: ${ages
}\n\n");
List<int> juftlar = [2,4,6,8,10];
int i = 0;
for(int x in ages){
  print("No $i: $x");
  i++;
}
ages.clear();
//clear operatori hammasini delete qiladi set ichidagi
ages.addAll(juftlar);
// addAll operatori esa hozir juftlar arrayidagi hamma elementlarni ages setiga qo`shyapti
for(int x in ages){
 print("AddAlldan keyin No : $x");
}
// bool natijam = ismlar.remove("Artur");
// print("Natijam : $natijam");
// print("Natija : $ismlar");

// for(String s1 in ismlar){
//  print("Ism : $s1");
// }
}