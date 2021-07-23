package aerei
import scala.collection.mutable.ArrayBuffer

object Main extends App {

  //creo un aereo per tipo: testo i costruttori
  var aereo_linea = new Aereo(
    PropellerEngine,
    PropellerBody,
    ArrayBuffer(SerbatoioExtra))

  var aereo_jet = new Aereo(
    JetEngine,
    JetBody,
    ArrayBuffer(ProtezioneAntiMissile))

  var aereo_caccia = new Aereo(
    JetEngine,
    FightBody,
    ArrayBuffer(Mitragliatore, Bomba))

  //testo toString
  print("----> TEST TOSTRING: \n " + aereo_caccia.toString() + "\n")

  //test add
  aereo_caccia.addArmamento(BombaAtomica)
  aereo_caccia.addArmamento(SerbatoioExtra)

 
  print("----> TEST ADD: \n " + aereo_caccia.toString() + "\n")

  //test remove
  aereo_caccia.removeArmamento(Mitragliatore)
  aereo_caccia.removeArmamento(SerbatoioExtra)


  print("----> TEST REMOVE: \n " + aereo_caccia.toString() + "\n")

  //CREO UN INDIRIZZO E UN CLIENTE E UN ORDINE A LORO ASSOCIATI
  var indirizzo = new Indirizzo(
    "123 via delle vie",
    "4B",
    "Bergamo",
    "Italia",
    "24121")

  var cliente = new Cliente(
    "Guerraf Ondaio",
    "213-567891",
    indirizzo)

  //AGGIUNGO GLI AEREI CREATI ALLA LISTA DI AEREI ORDINATI E LI ASSOCIO AL CLIENTE
  var o = new Ordine(
    ArrayBuffer(aereo_caccia, aereo_jet, aereo_linea),
    cliente)

  print("\n ----> TEST printOrdine \n")
  o.printOrdine()

}
