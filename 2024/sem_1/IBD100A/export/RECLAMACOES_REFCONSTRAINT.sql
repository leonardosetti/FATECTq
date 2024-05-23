--------------------------------------------------------
--  Ref Constraints for Table RECLAMACOES
--------------------------------------------------------

  ALTER TABLE "RECLAMACOES" ADD CONSTRAINT "FK_RECLAM_EMPR" FOREIGN KEY ("CODIGODAEMPRESA")
	  REFERENCES "EMPRESAS" ("CODIGODAEMPRESA") ENABLE;
  ALTER TABLE "RECLAMACOES" ADD CONSTRAINT "FK_RECLAM_INCO" FOREIGN KEY ("INCOMODOPRINCIPAL")
	  REFERENCES "INCOMODOS" ("CODIGODOINCOMODO") ENABLE;
  ALTER TABLE "RECLAMACOES" ADD CONSTRAINT "FK_RECLAM_RECLAMANTE" FOREIGN KEY ("CODIGODORECLAMANTE")
	  REFERENCES "RECLAMANTES" ("CODIGODORECLAMANTE") ENABLE;
