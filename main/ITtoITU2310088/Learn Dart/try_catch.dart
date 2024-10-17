main(List<String> args){
print("Qandaydir xatolik yuz berganda bulardan foydalanamiz!");
// try{
// num xato = 40 ~/ 0;
// print("Natija : $xato");} catch(error,location){
//   print("Hey, you made an error,your error is $error \n and STACK TRACE is ${location} !");
// }finally{
//   print("Finally work wether your codes work or not!");
// }
try{
deployMoney(-20);
} catch(e){
 // print("XATO : "+e.xatoniKorsat());
}
}

deployMoney(int miqdor){
if(miqdor < 0){
  throw new deployMoneyXatosi();
}else{
  print("Hisobingizga $miqdor dollar miqdorida mablag` tushdi");
}
}

class deployMoneyXatosi implements Exception{
  String xatoniKorsat() => "Positive qiymat kiriting!";
}