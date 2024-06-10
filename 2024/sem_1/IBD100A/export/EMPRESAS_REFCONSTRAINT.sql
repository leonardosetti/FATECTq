--------------------------------------------------------
--  Ref Constraints for Table EMPRESAS
--------------------------------------------------------

  ALTER TABLE "EMPRESAS" ADD CONSTRAINT "FK_EMPMUN" FOREIGN KEY ("CODIGODOMUNICIPIO")
	  REFERENCES "MUNICIPIOS" ("CODIGODOMUNICIPIO") ENABLE;
