package aerei

sealed trait Armamento
case object Mitragliatore extends Armamento
case object Bomba extends Armamento
case object Siluro extends Armamento
case object BombaAtomica extends Armamento
case object SerbatoioExtra extends Armamento
case object ProtezioneAntiMissile extends Armamento

sealed trait Engine
case object PropellerEngine extends Engine
case object JetEngine extends Engine

sealed trait Body
case object JetBody extends Body
case object PropellerBody extends Body
case object FightBody extends Body