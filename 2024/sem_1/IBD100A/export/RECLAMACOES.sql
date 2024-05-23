--------------------------------------------------------
--  DDL for Table RECLAMACOES
--------------------------------------------------------

  CREATE TABLE "RECLAMACOES" 
   (	"CODIGODARECLAMACAO" NUMBER(*,0), 
	"CODIGODORECLAMANTE" NUMBER(*,0), 
	"CODIGODAEMPRESA" NUMBER(*,0), 
	"DATA" VARCHAR2(10 BYTE), 
	"TURNODESERVICO" VARCHAR2(1 BYTE), 
	"INCOMODOPRINCIPAL" NUMBER(*,0)
   ) ;
