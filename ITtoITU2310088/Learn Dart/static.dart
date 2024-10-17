void main(List<String> args) {
  print(Oquvchi.maktabRaqami);
  var mirshod = Oquvchi();
  Oquvchi.ism = "Mirshod";
  Oquvchi.oquvchiSoni++;
  mirshod.oquvchiSoniniYozdir();

  var dilshod = Oquvchi();
  Oquvchi.ism = "Dilshod";
  Oquvchi.oquvchiSoni++;
  dilshod.oquvchiSoniniYozdir();

  var abror = Oquvchi();
  Oquvchi.ism = "Abror";
  Oquvchi.oquvchiSoni++;
  abror.oquvchiSoniniYozdir();
}

class Oquvchi{
static int oquvchiSoni = 0;
 static const
  int maktabRaqami = 36;
 static String ism = '';
  void oquvchiSoniniYozdir(){
    print("O'quvchining ismi : $ism;\nO'quvchining IDsi : $oquvchiSoni;");
  }
}