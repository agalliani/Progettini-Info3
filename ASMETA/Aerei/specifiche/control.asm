asm control

import StandardLibrary
signature:

//DOMINI
	enum domain TipoCorpo = { JET_BODY | PROPELLER_BODY | FIGHT_BODY }
	enum domain TipoMotore = { JET_ENGINE | PROPELLER_ENGINE }
	enum domain TipoAereo = { JET | PROPELLER | FIGHT | CUSTOM }
	

	controlled sceltaMotore: TipoMotore
	controlled sceltaCorpo: TipoCorpo
	controlled aereo: TipoAereo
	

	controlled outMess: String
	
	monitored monMotore: TipoMotore
	monitored monCorpo: TipoCorpo

//FUNZIONI
	static buildPlane: Prod(TipoMotore, TipoCorpo) -> TipoAereo

definitions:

	function buildPlane($m in TipoMotore, $c in TipoCorpo) =
		switch ($m, $c)
			case (JET_ENGINE, JET_BODY):
				JET
			case (JET_ENGINE, FIGHT_BODY):
				FIGHT
			case (PROPELLER_ENGINE, PROPELLER_BODY):
				PROPELLER
			otherwise
				CUSTOM
		endswitch
		
	macro rule r_messaggioOut($s1 in TipoMotore, $s2 in TipoCorpo) = 
		switch (buildPlane($s1, $s2))
				case JET:
					outMess:= "Aereo Jet costruito!"
				case PROPELLER:
					outMess:= "Aereo a Propulsione costruito!"
				case FIGHT:
					outMess:= "Aereo da Combattimento costruito!"
				case CUSTOM:
					outMess:= "Aereo Custom costruito!"
			endswitch
	
	main rule r_Main = 
		par
			aereo := buildPlane(sceltaMotore, sceltaCorpo)
			r_messaggioOut[sceltaMotore, sceltaCorpo]
		endpar
		
		
		

default init s0:
	function sceltaMotore = monMotore
	function sceltaCorpo = monCorpo
	