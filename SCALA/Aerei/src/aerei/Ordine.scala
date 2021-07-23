package aerei

import scala.collection.mutable.ArrayBuffer

class Ordine(
  val aerei: ArrayBuffer[Aereo],
  var cliente: Cliente) {

  def addAereo(a: Aereo): Unit = {
    aerei += a
  }

  def removeAereo(p: Aereo): Unit = {
    aerei -= p
  }
  
  def printOrdine(): Unit = {
    for (a <- aerei) {
      println(a)
    }
  }

}