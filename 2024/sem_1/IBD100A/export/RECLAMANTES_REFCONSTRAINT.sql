--------------------------------------------------------
--  Ref Constraints for Table RECLAMANTES
--------------------------------------------------------

  ALTER TABLE "RECLAMANTES" ADD CONSTRAINT "FK_RECLATEMUN" FOREIGN KEY ("CODIGODOMUNICIPIO")
	  REFERENCES "MUNICIPIOS" ("CODIGODOMUNICIPIO") ENABLE;
