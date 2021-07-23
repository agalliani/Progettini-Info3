package aerei

import scala.collection.mutable.ArrayBuffer


class Aereo(
  var motore: Engine,
  var struttura: Body,
  val armamento: ArrayBuffer[Armamento]) {
  
  def addArmamento(t: Armamento): Unit = { armamento += t }
  def removeArmamento(t: Armamento): Unit = { armamento -= t }
  def removeAllArmamenti(): Unit = { armamento.clear() }

  override def toString(): String = {
    val armamentoString = for (t <- armamento) yield t
    s"""Aereo:
           |  Motore: $motore
           |  Struttura: $struttura
           |  $armamentoString
         """.stripMargin
  }

//TODO: calcolo del prezzo considerando il prezzo dei singoli pezzi
  def getPrice(
    armamentoPrices: Map[Armamento, Int],
    enginePrices: Map[Engine, Int],
    bodyPrices: Map[Body, Int]): Int = ???
}

